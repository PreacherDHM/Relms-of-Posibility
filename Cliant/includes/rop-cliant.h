#ifndef ROP_CLIANT_H
#define ROP_CLIANT_H
//Start Coding rop-cliant.h
#include "Player.h"
#include "rop-entity.h"
#define PORT 4316

namespace rop {
    void ConectToServer(char* server);
    void SendData(char* buffer, int bufferSize);
    char* ResiveData(int bufferSize);

    void Connect(char* ip, Player player);
    void UpdateFromServer(/*scean*/);
    void SendPlayerData(Player* player);
    void ResivePlayerData(Player* player);
}
#endif
