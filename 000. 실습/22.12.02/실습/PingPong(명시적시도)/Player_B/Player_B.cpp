#include "../PingPongTableDll/PingPongTable.h"

typedef PingPongTable* (*pCreatePingPongTable)();
typedef void (*pSetWhoAttacked)(std::string player_name);
typedef void (*pSetAttackSuccess)(bool is_success);
typedef void (*pSetScore)(std::string player, int score);
typedef std::string(*pGetWhoAttacked)();
typedef bool (*pGetAttackSuccess)();
typedef int (*pGetScore)(std::string player);

int main()
{
    std::string path(PINGPONGTABLE_DLL);
    path = "../lib/" + path;
    HMODULE _dll = ::LoadLibraryA(path.c_str());

    if (_dll != NULL)
    {
        pCreatePingPongTable cpt = (pCreatePingPongTable)GetProcAddress(_dll, "CreatePingPongTable");
        pSetWhoAttacked setWhoAtk = (pSetWhoAttacked)GetProcAddress(_dll, "SetWhoAttacked");
        pSetAttackSuccess setAtKSucc = (pSetAttackSuccess)GetProcAddress(_dll, "SetAttackSuccess");
        pSetScore setScore = (pSetScore)GetProcAddress(_dll, "SetScore");
        pGetWhoAttacked getWhoAtk = (pGetWhoAttacked)GetProcAddress(_dll, "GetWhoAttacked");
        pGetAttackSuccess getAtkSucc = (pGetAttackSuccess)GetProcAddress(_dll, "GetAttackSuccess");
        pGetScore getScore = (pGetScore)GetProcAddress(_dll, "GetScore");

        cpt();
        setScore("B", 5);
        printf("Player: %s, A Score: %d\n", getWhoAtk().c_str(), getScore("A"));

        getchar();
    }

    return 0;
}