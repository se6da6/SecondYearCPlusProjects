#include "Product.h"

//Implementation file for product class and its derived classes
//Seda Dadak


Product::Product(int newBarCode, string newProductName)
{
	cout << " ***** Inside Product non-default constructor!****" << endl;
	barCode = newBarCode < 0 || newBarCode>1000000 ? 0 : newBarCode;
	productName = new string((newProductName.length() == 0 ? "No Name" : newProductName));
	assert(productName != NULL);
}

Product::Product()
{
	cout << "****Inside Product default constructor!***" << endl;
	productName = new string;
	assert(productName != 0);
	cout << "Please enter a product name." << endl;
	getline(cin, *productName);
	while (productName->empty())
	{
		cout << "You must supply a description ";
		getline(cin, *productName);
	}
	cout << "Please enter barcode. " << endl;
	cin >> barCode;
	while (cin.fail()||barCode < 0 || barCode>1000000)
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Invalid barcode. It should be between 0-1000000.Please re-enter!" << endl;
		cin >> barCode;
	}
	cin.ignore(80, '\n');
}

Product::~Product()
{
	cout << "****Inside Product destructor****" << endl;
	delete productName;
}

void Product::show(ostream& out)const
{
	cout << "***Inside Product show function***" << endl;
	out << "Barcode is:" << barCode << "\t" << "Product Name is:" << *productName << endl;
}

PrePackedFood::PrePackedFood(int newBarCode, string newProductName, double newUnitPrice) :Product(newBarCode, newProductName)
{
	cout << "***Inside PrePackedFood non-default constructor*** " << endl;
	unitPrice = newUnitPrice < 0.0 || newUnitPrice >1000.0 ? 0 : newUnitPrice;

}

PrePackedFood::PrePackedFood()
{
	cout << "***Inside PrePackedFood default constructor.***" << endl;
	cout << "Please enter unit price. " << endl;
	cin >> unitPrice;
	while (cin.fail()|| unitPrice < 0.0 || unitPrice>1000.0)
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Unit price should be between 0.0-1000.0. Please re-enter! " << endl;
		cin >> unitPrice;
	}
	cin.ignore(80, '\n');
}

void PrePackedFood::show(ostream& out)const
{
	cout << "***Inside PrePackedFood show function***" << endl;
	Product::show(out);
	out << "Unit price is: " << unitPrice << endl;
}

FreshFood::FreshFood(int newBarCode, string newProductName, double newUnitPrice, double newWeight) : Product(newBarCode, newProductName)
{
	cout << "****Inside FreshFood non-default constructor ***" << endl;
	unitPrice = newUnitPrice < 0.0 || newUnitPrice >1000.0 ? 0 : newUnitPrice;
	weight = newWeight < 0.0 || newWeight >1000.0 ? 0 : newWeight;
}

FreshFood::FreshFood()
{
	cout << "***Inside FreshFood default constructor.***" << endl;
	cout << "Please enter unit price . " << endl;
	cin >> unitPrice;
	while (cin.fail()||unitPrice < 0.0 || unitPrice>1000.0)
	{
		cin.clear();
		cin.ignore(80, '\n');
		cout << "Unit price should be between 0.0-1000.0 . Please re-enter! " << endl;
		cin >> unitPrice;
	}
	cin.ignore(80, '\n');
	cout << "Please enter weight . " << endl;
	cin >> weight;
	while (weight < 0.0 || weight>10000.0)
	{
		cout << "Weight should be between 0.0-10000.0 gram. Please re-enter! " << endl;
		cin >> weight;
	}
	cin.ignore(80, '\n');
}

void FreshFood::show(ostream& out)const
{
	cout << "***Inside FreshFood show function***" << endl;
	Product::show(out);
	out << "Price is: " << unitPrice *  weight << endl;
	

}