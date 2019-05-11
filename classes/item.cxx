#include "item.h"

void item::showInfo(){
	cout<<"ITEM INFO:"<<en
		<<"\t"<<name<<"\t"<<x<<"\t"<<y<<"\t"<<z<<endl;
}

item::item(str name){
	this->name = name;
}
