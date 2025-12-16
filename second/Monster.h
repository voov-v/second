#pragma once
#include <string>

using namespace std;
class Player;

class Monster {
public:
    Monster(string name) { HP = 10; Power = 30; Defence = 10; Speed = 10; }

    void attack(Player* player);

    string getName() {
        return Name;
    }
    int getMonsterHP() {
        return HP;
    }
    int getMonsterPower() {
        return Power;
    }
    int getMonsterDefence() {
        return Defence;
    }
    int getMonsterSpeed() {
        return Speed;
    }

    void setMonsterName(string name) {}
    void setMonsterHP(int hp) {}
    void setMonsterPower(int power) {}
    void setMonsterDefence(int defence) {}
    void setMonsterSpeed(int speed) {}

protected:
    string Name;
    int HP;
    int Power;
    int Defence;
    int Speed;
}; 
