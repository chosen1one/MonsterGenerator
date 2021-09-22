#include "Monster.h"

std::string Monster::getTypeString() const {
	switch(m_type) {
		case Dragon: return "dragon";
		case Goblin: return "goblin";
		case Ogre: return "ogre";
		case Orc: return "orc";
		case Skeleton: return "skeleton";
		case Troll: return "troll";
		case Vampire: return "vampire";
		case Zombie: return "zombie"; 
	}
		
	return "Error!";
}

void Monster::print() const {
		std::cout << m_name << " is the " << getTypeString() << " that has " << m_health << " health points.\n"; 
}
