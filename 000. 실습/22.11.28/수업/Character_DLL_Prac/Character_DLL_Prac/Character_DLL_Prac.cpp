#include "DLL_mini_Prac.h"

using namespace std;

int main()
{
    int A_health = 100;
    int A_attack = 5;
    
    int B_health = 100;
    int B_attack = 7;

    int heal_point = 30;


    
    while (true) {
        cout << "menu를 선택해주세요." << endl << "1. attack" << endl << "2. heal" << endl << "3. quit" << endl;
        string menu;
        cin >> menu;

        if (menu == "quit") {
            break;
        }
        else if (menu == "attack") {
            cout << "A가 B를 공격 하였습니다." << endl;
            B_health = attacked(B_health, A_attack);
            cout << "B의 체력은 : " << B_health << "입니다." << endl;
        }
        else if (menu == "heal") {
            cout << "B는 힐을 사용하였습니다." << endl;
            B_health = healed(B_health, heal_point);
            cout << "B의 체력은 : " << B_health << "입니다.\n";
        }

    }

}