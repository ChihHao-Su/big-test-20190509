#include "item.h"

void item::showInfo(){
	Cout<<"ITEM INFO:"<<endl;
		<<"\t"<<name<<"\t"<<x<<"\t"<<y<<"\t"<<z<<endl;
}

item::item(str name){
	this->name = name;
}
