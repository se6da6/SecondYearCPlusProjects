#include<iostream>
#include <string>
#include<fstream>
#include <iomanip>
using namespace std;

//Creating abstract data type  to define Inventory class. This is specification file for inventory class.
//Seda Dadak

struct ProductRec {
	int productCode;
	string description;
	double price;
};

const int SIZE = 25;

class Inventory {
public:
	void showProduct(int /*product code*/)const;
	void writeInventory(ostream&/*output stream*/)const;
	int getNoProducts()const { return noProducts; }
	void increasePrice(int /*ProductRec.productCode*/, double /*ProductRec.price*/);
	Inventory(string/*name of file*/, int = 25/*maxProducts*/);

private:
	int searchProduct(int /*index of products in the array*/)const;
	ProductRec products[SIZE];
	int maxProducts;
	int noProducts;
};



