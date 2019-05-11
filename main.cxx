#include "classes/player.h"
#include "classes/item.h"
#include <string>
#include <iostream>
#include <memory>
using namespace std;


int main()
{
	shared_ptr<item> itemA(new item("BS香烟"));
	shared_ptr<item> itemB(new item("MG香烟"));
	shared_ptr<player> ysh(new player("杨思唅");	
	ysh->addItem(itemA);
	ysh->addItem(itemB);
	ysh->showInfo();
	ysh->showItemInfo();
}
