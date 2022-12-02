#ifndef __PINGPONGTABLE_H__
#define __PINGPONGTABLE_H__
#include <Windows.h>
#include <iostream>

#ifdef PINGPONGTABLE_EXPORT
#define PINGPONGTABLE_DECLSPEC __declspec(dllexport)
#else
#define PINGPONGTABLE_DECLSPEC __declspec(dllimport)
#endif

#if defined(_WIN64) & defined(_DEBUG)
#define PINGPONGTABLE_DLL "PingPongTableDlld_x64.dll"
#elif defined(_WIN64) & defined(NDEBUG)
#define PINGPONGTABLE_DLL "PingPongTableDll_x64.dll"
#elif defined(_WIN32) & defined(_DEBUG)
#define PINGPONGTABLE_DLL "PingPongTableDlld_x86.dll"
#elif defined(_WIN32) & defined(NDEBUG)
#define PINGPONGTABLE_DLL "PingPongTableDll_x86.dll"
#endif

class PingPongTable
{
private:
	static char _whoAttacked;
	static bool _attackSuccess;
	static int _scoreA;
	static int _scoreB;

public:
	PingPongTable();
	~PingPongTable();

	void SetWhoAttacked(char player_name);
	void SetAttackSuccess(bool is_success);
	void SetScore(std::string player, int score);

	char GetWhoAttacked();
	bool GetAttackSuccess();
	int GetScore(std::string player);
};

extern "C"
{
	PINGPONGTABLE_DECLSPEC PingPongTable* CreatePingPongTable();
	PINGPONGTABLE_DECLSPEC void SetWhoAttacked(PingPongTable* table, char player_name);
	PINGPONGTABLE_DECLSPEC void SetAttackSuccess(PingPongTable* table, bool is_success);
	PINGPONGTABLE_DECLSPEC void SetScore(PingPongTable* table, std::string player, int score);
	PINGPONGTABLE_DECLSPEC char GetWhoAttacked(PingPongTable* table);
	PINGPONGTABLE_DECLSPEC bool GetAttackSuccess(PingPongTable* table);
	PINGPONGTABLE_DECLSPEC int GetScore(PingPongTable* table, std::string player);
	PINGPONGTABLE_DECLSPEC void DeletePingPongTable(PingPongTable* table);
}
#endif