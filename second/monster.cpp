#include "Monster.h"
#include "Player.h"

void Monster::attack(Player* player) {
    int dmg = getMonsterPower() - player->getDefence(); // 몬스터의 공격력 - 플레이어의 방어력
        if (dmg <= 0) {
            dmg = 1;
        }
    cout << "데미지: " << dmg << endl;
    player->setHP(player->getHP() - dmg) // 플레이어 객체의 getHP 함수를 실행하여 플레이어HP - 데미지 계산 결과를 setHP 매개변수로 전달됩니다.
    if (> 0) {
        cout << "남은 HP: " <<  << endl; // 남은HP
    }
}