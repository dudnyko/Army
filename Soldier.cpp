#include <iostream>
#include "Soldier.hpp"

Soldier::Soldier(const std::string& title, int maxHP, int dmg) : Unit::Unit(title, maxHP, dmg) {}

void Soldier::attack(Unit* enemy) {
    enemy->takeDamage(this->dmg);
    counterAttack(enemy);
}

void Soldier::counterAttack(Unit* enemy) {
    if (enemy->getHP() > 0) {
        this->takeDamage(enemy->getDmg() / 2);
    }
}

Soldier::~Soldier() {}