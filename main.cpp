#include <iostream>
#include "Unit.hpp"
#include "Soldier.hpp"
#include "Rogue.hpp"

int main() {
	Soldier soldier("Soldier", 100, 20);
	Rogue rogue("Rogue", 80, 10);

	std::cout << soldier << std::endl;
	std::cout << rogue << std::endl;
	std::cout << "Soldier attacks Rogue" << std::endl;
	soldier.attack(&rogue);

	std::cout << soldier << std::endl;
	std::cout << rogue << std::endl;
	std::cout << "Rogue attacks Soldier" << std::endl;

	rogue.attack(&soldier);
	std::cout << soldier << std::endl;
	std::cout << rogue << std::endl;

	std::cout << "Soldier attacks Rogue" << std::endl;
	soldier.attack(&rogue);
	std::cout << soldier << std::endl;
	std::cout << rogue << std::endl;

	return 0;
}
