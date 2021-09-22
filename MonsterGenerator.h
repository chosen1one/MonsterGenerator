#ifndef MONSTERGENERATOR.H
#define MONSTERGENERATOR.H

class MonsterGenerator {
public:
	static int getRandomNumber(int minn, int maxx) {
		static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
		
		return static_cast<int>(rand() * fraction * (maxx - minn + 1) + minn);
	}
	
	static Monster generateMonster() {
		static std::string s_names[6] = { "Monster1", "Monster2", "Monster3", "Monster4", "Monster5", "Monster6" };
		
		Monster::MonsterType type = static_cast<Monster::MonsterType>(getRandomNumber(0, 7));
		int health = getRandomNumber(1, 100);
		std::string name = s_names[getRandomNumber(0, 5)];
		
		return Monster(type, name, health);
	}
};

#endif
