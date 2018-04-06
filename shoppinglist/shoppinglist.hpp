#ifndef SHOPPINGLIST_HPP
#define SHOPPINGLIST_HPP

#include <vector>
#include "products.hpp"

using namespace std;


class ShoppingList{
	
	private:
		
		vector<Alcohol> Alcohols;
		vector<Food> Foods;
		vector<Book> Books;
		vector<Toy> Toys;
		
	public:
		
		void addFood ( Food Item );
        void addToy ( Toy Item );
        void addAlcohol ( Alcohol Item );
        void addBook ( Book Item );
        
        double getTotalPrice ( );
        bool getMostExpensive (  string &Name, double &Price );
        void clear ( );
        
        void display( );
        
};

#endif
