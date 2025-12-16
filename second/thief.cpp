#include "thief.h"
#include "monster.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)  /* 빈칸 3: 부모 클래스의 생성자 호출 */ {
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    speed = 80;/* 빈칸 4: 전사의 HP는 80으로 지정 */
    /* 마법사는 MP를 80, 도적은 스피드를 80, 궁수는 정확도를 80으로 지정 */
}
void attack() {
    cout << "* 돈을 훔친다? " << endl; /* 빈칸 5: 전사의 공격 동작 출력 ex) 검을 휘두른다 */
}
