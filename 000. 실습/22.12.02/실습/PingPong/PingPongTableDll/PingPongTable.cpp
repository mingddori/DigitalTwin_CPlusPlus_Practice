#include "PingPongTable.h"

#pragma data_seg(".PingPongShare")
char PingPongTable::_whoAttacked = 'z';
bool PingPongTable::_attackSuccess = false;
int PingPongTable::_scoreA = 0;
int PingPongTable::_scoreB = 0;
#pragma data_seg()
#pragma comment(linker, "/SECTION:.PingPongShare,RWS")

PingPongTable::PingPongTable()
{
}

PingPongTable::~PingPongTable()
{
}

void PingPongTable::SetWhoAttacked(char player_name)
{
    this->_whoAttacked = player_name;
}

void PingPongTable::SetAttackSuccess(bool is_success)
{
    this->_attackSuccess = is_success;
}

void PingPongTable::SetScore(std::string player, int score)
{
    if (player.compare("A") == 0)
    {
        this->_scoreA = score;
    }
    else
    {
        this->_scoreB = score;
    }
}

char PingPongTable::GetWhoAttacked()
{
    return _whoAttacked;
}

bool PingPongTable::GetAttackSuccess()
{
    return _attackSuccess;
}

int PingPongTable::GetScore(std::string player)
{
    if (player.compare("A") == 0)
    {
        return _scoreA;
    }
    else
    {
        return _scoreB;
    }
}

PingPongTable* CreatePingPongTable()
{
    return new PingPongTable();
}

void SetWhoAttacked(PingPongTable* table, char player_name)
{
    table->SetWhoAttacked(player_name);
}

void SetAttackSuccess(PingPongTable* table, bool is_success)
{
    table->SetAttackSuccess(is_success);
}

void SetScore(PingPongTable* table, std::string player, int score)
{
    table->SetScore(player, score);
}

char GetWhoAttacked(PingPongTable* table)
{
    return table->GetWhoAttacked();
}

bool GetAttackSuccess(PingPongTable* table)
{
    return table->GetAttackSuccess();
}

int GetScore(PingPongTable* table, std::string player)
{
    return table->GetScore(player);
}

void DeletePingPongTable(PingPongTable* table)
{
    delete table;
}