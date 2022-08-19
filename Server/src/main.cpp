#include <CommonLib.h>
#include <Server.h>
#include <cstdlib>
#include <sys/select.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() { 
    // Start Server
    int lissenerSocket  = 0;
    int newSocket       = 0;
    int opt             = 1;
    int readBufferLen   = 0;
    int cliantSockets[MAX_CONNECTIONS] = {0};
    int socketDescripter;
    int maxSocketDescripters;
    int activity = 0;

    //packet buffer
    char buffer[1025] = {0x61};
    //initing address 
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    fd_set readFileDesripters;


    const char* message = "Hey this is a test to see if this works\n Hi!!!\n";
    
    //Creating the socket
    pInfo("NETWORK", "Creating the socket");
    if((lissenerSocket = socket(AF_INET, SOCK_STREAM, 0)) == 0){
        perror("[ERROR] NETWORK: Could not create socket\n");
        exit(EXIT_FAILURE);
    }

    //Setting the socket opetions using setsockopt
    pInfo("NETWORK", "Setting opetions");
    if((setsockopt(lissenerSocket, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                &opt, sizeof(opt))) != 0) {
        perror("[ERROR] NETWORK: Could not set socket opetions\n");
        exit(EXIT_FAILURE);
    }

    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    //Binding the socket lissener
    pInfo("NETWORK", "Binding Sockets");
    if(bind(lissenerSocket, (struct sockaddr*)&address, sizeof(address)) < 0){
        perror("[ERROR] NETWORK: Could not bind socket\n");
        exit(EXIT_FAILURE);
    }

    //start lissening
    pInfo("NETWORK", "Listening...");
    if(listen(lissenerSocket, 3) < 0){
        perror("[ERROR] NETWORK: Something whent wrong with the lister\n");
        exit(EXIT_FAILURE);
    }

    while(true){
        FD_ZERO(&readFileDesripters);

        FD_SET(lissenerSocket, &readFileDesripters);
        maxSocketDescripters = lissenerSocket;

        for(int i = 0; i < maxSocketDescripters; i++){
            socketDescripter = cliantSockets[i];
            
            if(socketDescripter > 0){
                FD_SET(socketDescripter, &readFileDesripters);
            }
            if(socketDescripter > maxSocketDescripters){
                maxSocketDescripters = socketDescripter;
            }
        }
        activity = select( maxSocketDescripters + 1, &readFileDesripters, NULL,
                NULL, NULL);
        if((activity < 0) && (errno!=EINTR)){
            perror("[ERROR] SOCKET DESCRIPTER: Something whent wrong when checking the activity\n");
            exit(EXIT_FAILURE);
        }

        if(FD_ISSET(lissenerSocket, &readFileDesripters)){
            //accept socket
            if((newSocket = accept(lissenerSocket, (struct sockaddr*)&address, 
                    (socklen_t*)&addrlen)) < 0){
                perror("[ERROR] NETWORK: Something whent wrong with the accept action\n");
                exit(EXIT_FAILURE);
            } 

            //Printing status of connection
            printf("[NETWORK] NEW CONNECTION: there is a new connection\n {IP: %s, PORT: %d}",
                    inet_ntoa(address.sin_addr), ntohs(address.sin_port));

            //Sending packet
            if(send(newSocket,message, sizeof(message)/sizeof(message[0]), 0) != sizeof(message)/sizeof(message[0])){
                perror("[ERROR] NETWORK: failed to send message/packet\n");
            }

            printf("[INFO] NETWORK: Message was sent\n");

            //adding the new connection to the cliant socket list (cliantSockets)
            for(int i = 0; i < maxSocketDescripters; i++){
                if(cliantSockets[i] == 0){
                    cliantSockets[i] = newSocket;
                    pInfo("NETWORK","Adding socket to the cliant list");
                    break;
                }
            }
        }

        for(int i = 0; i < maxSocketDescripters; i++){
            socketDescripter = cliantSockets[i];

            if(FD_ISSET(socketDescripter, &readFileDesripters)){
                if((readBufferLen = recv(socketDescripter, buffer, 1024, 0)) == 0){
                   printf("[NETWORK] DISCONECT: A user has dissconected from the server\n{IP: %s, PORT: %d}",
                           inet_ntoa(address.sin_addr), ntohs(address.sin_port));

                  close(socketDescripter);
                  cliantSockets[i] = 0;
                } else {
                    buffer[readBufferLen] = '\0';
                    send(socketDescripter, buffer, sizeof(buffer)/sizeof(buffer[0]), 0);
                }
            }
        }
    }
    



    // Manage Liseners
    // Varify Connection
    // Varify Player
    // Get Player Data
    // Send Player Data to other cliants
    // [LOOP] Update Player Position and actions
    return 0;
}
