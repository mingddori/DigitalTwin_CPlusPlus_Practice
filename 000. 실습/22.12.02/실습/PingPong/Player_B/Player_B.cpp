#include "../PingPongTableDll/PingPongTable.h"

typedef PingPongTable* (*pCreatePingPongTable)();
typedef void (*pSetWhoAttacked)(PingPongTable* table, char player_name);
typedef void (*pSetAttackSuccess)(PingPongTable* table, bool is_success);
typedef void (*pSetScore)(PingPongTable* table, std::string player, int score);
typedef char (*pGetWhoAttacked)(PingPongTable* table);
typedef bool (*pGetAttackSuccess)(PingPongTable* table);
typedef int (*pGetScore)(PingPongTable* table, std::string player);

int main()
{
    std::string path(PINGPONGTABLE_DLL);
    path = "../lib/" + path;
    HMODULE _dll = ::LoadLibraryA(path.c_str());

    if (_dll != NULL)
    {
        pCreatePingPongTable cpt = (pCreatePingPongTable)GetProcAddress(_dll, "CreatePingPongTable");
        pSetWhoAttacked setWhoAtk = (pSetWhoAttacked)GetProcAddress(_dll, "SetWhoAttacked");
        pSetAttackSuccess setAtkSucc = (pSetAttackSuccess)GetProcAddress(_dll, "SetAttackSuccess");
        pSetScore setScore = (pSetScore)GetProcAddress(_dll, "SetScore");
        pGetWhoAttacked getWhoAtk = (pGetWhoAttacked)GetProcAddress(_dll, "GetWhoAttacked");
        pGetAttackSuccess getAtkSucc = (pGetAttackSuccess)GetProcAddress(_dll, "GetAttackSuccess");
        pGetScore getScore = (pGetScore)GetProcAddress(_dll, "GetScore");

        PingPongTable* t = cpt();
        
        while (1) {
            char who = getWhoAtk(t);

            if (who == 'A') {
                std::cout << "A의 공격을 확인" << std::endl;
                setWhoAtk(t, 'B');
                setAtkSucc(t, true);
                std::cout << "B의 공격" << std::endl;
            }
            else {
                std::cout << "A의 공격을 대기" << std::endl;

                continue;
            }
            
        }
    }

    return 0;
}