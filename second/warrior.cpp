#include "warrior.h"
#include "monster.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)  /* 빈칸 3: 부모 클래스의 생성자 호출 */ {     // 몰랐음
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;
    HP = 80;/* 빈칸 4: 전사의 HP는 80으로 지정 */       //이건 알았음
    /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
}
void Warrior::attack() {
    cout << "* 장검을 휘두른다. " << endl; /* 빈칸 5: 전사의 공격 동작 출력 ex) 검을 휘두른다 */    //이것도 몰랐음
}