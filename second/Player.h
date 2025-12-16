#pragma once
#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    Player(string nickname);

    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();

    // getter 함수
    string getJobName() {
        return Job_name;
    }
    string getNickname() {
        return Nickname;
    }
    int getLevel() {
        return level;
    }
    int getHP() {
        return HP;
    }
    int getMP() {
        return MP;
    }
    int getPower() {
        return Power;
    }
    int getDefence() {
        return Defence;
    }
    int getAccuracy() {
        return Accuracy;
    }
    int getSpeed() {
        return Speed;
    }

    // setter 함수
    void setNickname(string nickname){}
    void setHP(int hp){}
    void setMP(int mp){}
    void setPower(int power){}
    void setDefence(int defence){}
    void setAccuracy(int accuracy){}
    void setSpeed(int speed){}

protected:
    string Job_name;
    string Nickname;
    int level;
    int HP;
    int MP;
    int Power;
    int Defence;
    int Accuracy;
    int Speed;
};



