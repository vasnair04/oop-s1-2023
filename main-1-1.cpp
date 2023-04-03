#include <iostream>
#include "players.h"

using namespace std;
int main() {

Wizard wizard("Gandalf", 100, 20, 50);

Warrior warrior("Aragorn", 120, 25, "Sword");
cout << "Let the battle begin!" << endl;
while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
wizard.castSpell(&warrior);
if (warrior.getHealth() > 0) {
warrior.swingWeapon(&wizard);
}
}
if (wizard.getHealth() > 0) {
cout << wizard.getName() << " wins!" << endl;
} else {
cout << warrior.getName() << " wins!" << endl;
}
return 0;
}