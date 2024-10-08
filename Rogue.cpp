
#include "Rogue.hpp"

Rogue::Rogue(const std::string& title, int maxHP, int dmg) : Unit::Unit(title, maxHP, dmg) {}

void Rogue::attack(Unit* enemy) {
    enemy->takeDamage(this->dmg);
}

void Rogue::counterAttack(Unit* enemy) {
    if (enemy->getHP() > 0) {
        this->takeDamage(enemy->getDmg() / 2);
    }
}

Rogue::~Rogue() {}