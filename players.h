#ifndef PLAYERS_H
#define PLAYERS_H
#include <string>
#include <iostream>
using namespace std;

class Player {
protected:
  string name;
  int health;
  int damage;
public:
  Player(string name, int health, int damage):
  name(name), health(health), damage(damage){}
  Player(): Player("N/A", 0, 0){}
  string getName(){
    return name;
  }
  int getHealth(){
    return health;
  }
  int getDamage(){
    return damage;
  }
  void setHealth(int healthset){
    health = healthset;
  }
 void setName(int nameset){
    name = nameset;
  }
 void setDamage(int damageset){
    health = damageset;
  }
  void attack(Player* opponent){
    opponent->health = health - this->damage;
  }
  void takeDamage(int damage){
    this->health = health - damage;
    if (health>0) {
      cout << name << " takes " << damage << " damage. Remaining health: " << health << endl;
    } else {
      cout << "blud is dead, he can't take damage" << endl;
    }
  }
};

class Warrior : public Player {
  private:
  string weapon;
  public:
  Warrior(string name, int health,int damage, string weapon) :
  Player::Player(name,health,damage), weapon(weapon) {}
  Warrior() : Player::Player(), weapon("Null") {}
  void swingWeapon (Player* opponent){
    takeDamage(opponent->getDamage());
    cout << name << " swings their " << weapon << " at " << opponent->getName() << " for " << damage << endl;
  }
};

class Wizard : public Player {
  private:
  int mana;
  public:
  Wizard(string name, int health,int damage, int mana) :
  Player::Player(name,health,damage), mana(mana) {}
  Wizard(): Player::Player() {mana = 0;}
  void castSpell(Player* opponent){
    if (mana == 0){
      cout << "mana depleted" << endl;
    } else {
      takeDamage(opponent->getDamage());
      cout << name << " casts a spell on " << opponent->getName() << " for " << damage << endl;
    }
  }
};


#endif