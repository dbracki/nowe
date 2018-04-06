#include "interface.hpp"

void Interface::addItem(){
	
	int d = 5;
	
	List.addFood( AvailableFoods[d] );
	
}

bool Interface::load(){
	
	return loadAlcohol() && loadFood() && loadBook() && loadToy();
	
}

bool Interface::loadAlcohol(){
	
	fstream File;
    File.open("Alcohol.txt",ios::in);
    if(File.good()==false)
    {
        cout<<"Sorry, couldn't find \"Alcohol.txt\" :("<<endl;
        return false;
    }
    
    string Line;
        for(int i=0; i<8; i++)
        {
        	string Name, Type;
        	int Percentage;
        	double Price;
            File>>Name;
            File>>Type;
            File>>Percentage;
            File>>Price;
            
            Alcohol a(Name, Type, Percentage, Price);
            AvailableAlcohols.push_back(a);
            
        }
        File.close();
    
	return true;
}

bool Interface::run(){
	
	
	cout<<"What would you like to do?"<<endl;
        cout<<"1. Show the shopping list"<<endl;
        cout<<"2. Add an item to the shopping list"<<endl;
        cout<<"3. Clear the shopping list"<<endl;
        cout<<"4. Show the most expensive purchase"<<endl;
        cout<<"5. Show total Price (+ 23% vat)"<<endl;
        cout<<"6. Run tests"<<endl;
        cout<<"7. Exit program"<<endl;
        switch ( getNumber(7) )
        {
        case 1:
            List.display();
            break;

        case 2:
            addItem();
            break;

        case 3:
            List.clear();
            break;

        case 4:{
        	string Name;
        	double Price;
        	if ( List.getMostExpensive( Name, Price ) ) {
        		// OK
				}
			else {
				// NIE MA PRODUKTOW
				}
			break; }

        case 5:
            List.getTotalPrice(); // WYPISZ
            break;

        case 6:
            //test();
            break;

        case 7:
            return false; }
            
	return true;

}
/*
bool Interface::loadFood(){
	
	fstream File;
    File.open("Food.txt",ios::in);
    if(File.good()==false)
    {
        cout<<"Sorry, couldn't find \"Food.txt\" :("<<endl;
        return false;
    }

        string Line;
        for(int i=0; i<8; i++)
        {
            f[i].Number=i+1;
            f[i].IsUsed=0;
            File>>f[i].Name;
            File>>f[i].Quantity;
            File>>f[i].ExpirationDate;
            File>>f[i].Price;
        }
    File.close();
    
	return true;
}
*/
