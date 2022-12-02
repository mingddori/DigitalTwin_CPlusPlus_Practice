#include "PingPongTable.h"

#pragma data_seg(".PingPongShare")
std::string PingPongTable::_whoAttacked = "None";
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
    this->_whoAttacked = "None";
    this->_attackSuccess = false;
    this->_scoreA = 0;
    this->_scoreB = 0;
}

void PingPongTable::SetWhoAttacked(std::string player_name)
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

std::string PingPongTable::GetWhoAttacked()
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
    _table = new PingPongTable();
    return _table;
}

void SetWhoAttacked(std::string player_name)
{
    _table->SetWhoAttacked(player_name);
}

void SetAttackSuccess(bool is_success)
{
    _table->SetAttackSuccess(is_success);
}

void SetScore(std::string player, int score)
{
    _table->SetScore(player, score);
}

std::string GetWhoAttacked()
{
    return _table->GetWhoAttacked();
}

bool GetAttackSuccess()
{
    return _table->GetAttackSuccess();
}

int GetScore(std::string player)
{
    return _table->GetScore(player);
}

void DeletePingPongTable()
{
    delete _table;
}