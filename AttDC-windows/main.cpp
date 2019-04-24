#include "scenes.h"
#include "weapon.h"

int main()
{
	item chuj("chuj");
	weapon messner("messner", 25, 40);
	const int size = 2;
	item chuje[size];
	chuje[0] = chuj;
	chuje[1] = messner;
	std::string AAAA;
	for (int i = 0; i < size; i++)
	{
		std::cout << chuje[i].getItemName() << std::endl;
	}
	startFight(20, 35, 200, "DEBUG_ENEMY", 1000, 100, 175);
	showMenu();
	return 0;
}