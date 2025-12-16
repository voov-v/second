#include "magician.h"
#include "Monster.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname)  /* 빈칸 3: 부모 클래스의 생성자 호출 */ {
    Job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    MP = 80;/* 빈칸 4: 전사의 HP는 80으로 지정 */
    /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
}
void attack() {
    cout << "* 마법을 캐스팅한다. " << endl; /* 빈칸 5: 전사의 공격 동작 출력 ex) 검을 휘두른다 */
}

void Magician::attack(Monster* monster) {
    int damage = 플레이어 공격력 - 몬스터 방어력
        if (damage = < 0) {
            damage = 1;
        }

    if (전사 || 마법사) {
        cout << "데미지: " << damage << endl;
    }
    else if (궁수) {
        if (damage / 3 = 0) {
            damage = 1;
        }
        cout << "데미지: " << damage / 3 << damage / 3 << damage / 3 << endl;
    }
    else if (도적) {
        if (damage / 5 = 0) {
            damage = 1;
        }
        for (i = 0; i < 5; i++) {
            cout << "데미지: " << damage / 5 << endl;
        }
    }

    //데미지값 매개변수 전달
        //출력

    if (> 0) { //남은 체력
        cout << "남은 체력: " <<  << endl; //남은체력
    }
    else {
        cout << "Player win!" << endl;
    }

}