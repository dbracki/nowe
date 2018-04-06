#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#include <fstream>
#include <iostream>
#include "shoppinglist.hpp"
#include "products.hpp"

using namespace std;

class Interface{
	
	private:
		ShoppingList List;
		
		vector<Alcohol> AvailableAlcohols;
		vector<Food> AvailableFoods;
		vector<Book> AvailableBooks;
		vector<Toy> AvailableToys;
			
		int getNumber(int Range);
		void addItem();
		
		bool loadFood();
		bool loadAlcohol();
		bool loadBook();
		bool loadToy();
		
	public:
		
		bool load ( );
		bool run ( );
		
};

#endif
