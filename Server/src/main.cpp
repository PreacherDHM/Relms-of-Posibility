#include <CommonLib.h>
#include <Server.h>
#include <cstdlib>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>

int main() { 
    // Start Server
    int sockFD = 0;
    int newSocket = { 0 };
    int opt = 1;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    
    if((sockFD = socket(AF_INET, SOCK_STREAM, 0)) == 0){
        perror("[ERROR] NETWORK: Could not create socket\n");
        exit(EXIT_FAILURE);
    }

    if((setsockopt(sockFD, SOL_SOCKET, SO_BROADCAST | SO_REUSEADDR | SO_REUSEPORT,
                &opt, sizeof(opt))) != 0) {
        perror("[ERROR] NETWORK: Could not set socket opetions\n");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if(bind(sockFD, (struct sockaddr*)&address, sizeof(address)) < 0){
        perror("[ERROR] NETWORK: Could not bind socket");
        exit(EXIT_FAILURE);
    }
    if(listen(sockFD, 5) < 0){
        perror("[ERROR] NETWORK: Something whent wrong with the lister");
        exit(EXIT_FAILURE);
    }
    if((newSocket = accept(sockFD, (struct sockaddr*)&address, 
                    (socklen_t*)&addrlen)) < 0){
        perror("[ERROR] NETWORK: Something whent wrong with the accept action");
        exit(EXIT_FAILURE);
    }


    // Manage Liseners
    // Varify Connection
    // Varify Player
    // Get Player Data
    // Send Player Data to other cliants
    // [LOOP] Update Player Position and actions
    return 0;
}
