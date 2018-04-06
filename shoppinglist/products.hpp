#ifndef PRODUCTS_HPP
#define PRODUCTS_HPP

#include <string>

using namespace std;

class Food
{
    private:
        string Name;
        string Quantity;
        string ExpirationDate;
        double Price;
    public:
    	Food(string Name, string Quantity, string ExpirationDate, double Price);
};

class Alcohol
{
    private:
        string Name;
        string Type;
        int Percentage;
        double Price;
        
     public:
   		Alcohol(string Name, string Type, int Percentage, double Price);
   		
   		double getPrice();
};

class Toy
{
    private:
        string Name;
        double Price;
    public:
   		Toy(string Name, double Price);
};

class Book
{
    private:
        string Name;
        string Author;
        string Type;
        double Price;
    public:
   		Book(string Name, string Author, string Type, double Price);
};


#endif
