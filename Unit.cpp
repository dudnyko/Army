#include "Unit.hpp"
#include "UnitIsDeadException.hpp"

Unit::Unit(const std::string& title, int maxHP, int dmg) {
    this->title = title;
    this->hp = maxHP;
    this->maxHP = maxHP;
    this->dmg = dmg;
}

Unit::~Unit() {}

const std::string Unit::getTitle() const {
    return this->title;
}

int Unit::getHP() const {
    return this->hp;
} 
int Unit::getMaxHP() const {
    return this->maxHP;
}
int Unit::getDmg() const {
    return this->dmg;
}

void Unit::takeDamage(int damage) {
    int resultHP = this->hp - damage;

    if (resultHP <= 0) {
        this->hp = 0;
        throw UnitIsDeadException();
    } else {
        this->hp = resultHP;
    }
}

std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    out << "Name: " << unit.getTitle() << std::endl;
    out << "Max HP: " <<  unit.getMaxHP() << std::endl;
    out << "Current HP: " << unit.getHP() << std::endl;

    return out;
}
