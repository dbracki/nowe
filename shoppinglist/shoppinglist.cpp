#include "shoppinglist.hpp"

void ShoppingList::clear(){
	
	Alcohols.clear();
	Books.clear();
	Foods.clear();
	Toys.clear();
	
}

void ShoppingList::addFood ( Food Item ) {
	
	Foods.push_back( Item );
	}

double ShoppingList::getTotalPrice(){
	
	double suma=0;
	for (int i=0; i<Alcohols.size(); i++){
		suma+=Alcohols[i].getPrice();
	}
	//do zrobienia
}

bool ShoppingList::getMostExpensive (  string &Name, double &Price ){
	
	if(Alcohols.empty() && && &&) return false;
	Price=-1;
	for(int i=0; i<Alcohols.size(); i++){
		if(Price<Alcohols[i].getPrice()){
			Price=Alcohols[i].getPrice();
			Name=Alcohols[i].getName();
		}
	}
	
	return true;
}
