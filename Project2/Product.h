#include <iostream>
#include <string>
#include <cassert>

using namespace std;
// Specification file for Product class and its derived classes
//Seda Dadak

class Product {
public:
	Product();
	Product(int/*barCode*/, string/*productName*/);
	virtual ~Product();
	virtual void show(ostream&/*cout or fout*/)const;
	int getBarCode()const { return barCode; }
	string getProductName()const { return *productName; }

protected:
	int barCode;
	string* productName;
};

class PrePackedFood :public Product
{
public:
	PrePackedFood();
	PrePackedFood(int/*barCode*/, string /*productName*/, double/*unitPrice*/);
	void show(ostream&/*fout or cout*/)const;
	double getUnitPrice()const { return unitPrice; }
private:
	double unitPrice;
};

class FreshFood :public Product
{
public:
	FreshFood();
	FreshFood(int/*barCode*/, string/*productName*/,
		double/*unitPrice*/, double/*weight*/);
	void show(ostream&/*fout or cout*/)const;
	double getUnitPrice()const { return unitPrice; }
	double getWeight()const { return weight; }
private:
	double unitPrice, weight;
};

