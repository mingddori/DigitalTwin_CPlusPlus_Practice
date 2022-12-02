#include <windows.h>
#include "ArkLib.h"

int main() {
	CArkLib ark;
	ark.Create(ARK_DLL_RELEASE_FILE_NAME, NULL, NULL); //_T("ark.x64.dll") = > ARK_DLL_RELEASE_FILE_NAME
	ark.Open("sample.zip", NULL);
	ark.ExtractAllTo("C:/Users/KOSA/MS/002. 수업/003. M&S/000. 실습/221129/수업/ArkPractice/unzip/");
	
	return 0;
}