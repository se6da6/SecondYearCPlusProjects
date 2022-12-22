#include "Product.h"

//Client code for Product class and its derived classes
//Seda Dadak

void show(const Product* productPtr)
{
	cout << "***Inside Polymorphic function." << endl;
	productPtr->show(cout);
	
}

int main()
{
	// do not change my main except where you call the polymorphic function as indicated below

	cout << "1a) Create dynamic Product (non default): " << endl;
	Product* phone = new Product(90, "Android cell");
	assert(phone);
	cout << "Name= " << phone->getProductName() << endl;
	cout << "Bar code=" << phone->getBarCode() << endl << endl;
	phone->show(cout);
	cout << "Call polymorphic function:\n ";
	show(phone);


	cout << endl << endl;
	delete phone;

	cout << "1b) Create dynamic Product (default): " << endl;
	Product* item = new Product;
	assert(item);
	cout << "Name= " << item->getProductName() << endl;
	cout << "Bar code=" << item->getBarCode() << endl << endl;
	item->show(cout);
	cout << "Call polymorphic function:\n ";
	show(item);


	cout << endl << endl;
	delete item;


	cout << "2a) Create dynamic PrePackedFood (non default): " << endl;
	PrePackedFood* pasta = new PrePackedFood(40, "spaghetti", -.67);
	assert(pasta);
	cout << "Name= " << pasta->getProductName() << endl;
	cout << "Bar code=" << pasta->getBarCode() << endl << endl;
	cout << "Unit Price=" << pasta->getUnitPrice() << endl << endl;
	pasta->show(cout);
	cout << "Call polymorphic function:\n ";
	show(pasta);


	cout << endl << endl;
	delete pasta;


	cout << "2b) Create dynamic Prepacked (default): " << endl;
	PrePackedFood* food = new PrePackedFood;
	assert(food);
	cout << "Name= " << food->getProductName() << endl;
	cout << "Bar code=" << food->getBarCode() << endl << endl;
	cout << "Unit Price=" << food->getUnitPrice() << endl << endl;
	food->show(cout);
	cout << "Call polymorphic function:\n ";
	show(food);


	cout << endl << endl;
	delete food;


	cout << "3a) Create dynamic FreshFood (non default): " << endl;
	FreshFood* apples = new FreshFood(-6, "Delicious", 1.1, .67);
	assert(apples);
	cout << "Name= " << apples->getProductName() << endl;
	cout << "Bar code=" << apples->getBarCode() << endl << endl;
	cout << "Weight=" << apples->getWeight() << endl << endl;
	cout << "Price=" << apples->getUnitPrice() << endl << endl;
	apples->show(cout);
	cout << "Call polymorphic function:\n ";
	show(apples);


	cout << endl << endl;
	delete apples;

	cout << "3b) Create dynamic FreshFood (default): " << endl;
	FreshFood* freshPtr = new FreshFood;
	assert(freshPtr);
	cout << "Name= " << freshPtr->getProductName() << endl;
	cout << "Bar code=" << freshPtr->getBarCode() << endl << endl;
	cout << "Weight=" << freshPtr->getWeight() << endl << endl;
	cout << "Price=" << freshPtr->getUnitPrice() << endl << endl;
	freshPtr->show(cout);
	cout << "Call polymorphic function:\n ";
	show(freshPtr);


	cout << endl << endl;
	delete freshPtr;

	system("pause");
}
/*
1a) Create dynamic Product (non default):
 ***** Inside Product non-default constructor!****
Name= Android cell
Bar code=90

***Inside Product show function***
Barcode is:90   Product Name is:Android cell
Call polymorphic function:
 ***Inside Polymorphic function.
***Inside Product show function***
Barcode is:90   Product Name is:Android cell


****Inside Product destructor****
1b) Create dynamic Product (default):
****Inside Product default constructor!***
Please enter a product name.
Computer
Please enter barcode.
255
Name= Computer
Bar code=255

***Inside Product show function***
Barcode is:255  Product Name is:Computer
Call polymorphic function:
 ***Inside Polymorphic function.
***Inside Product show function***
Barcode is:255  Product Name is:Computer


****Inside Product destructor****
2a) Create dynamic PrePackedFood (non default):
 ***** Inside Product non-default constructor!****
***Inside PrePackedFood non-default constructor***
Name= spaghetti
Bar code=40

Unit Price=0

***Inside PrePackedFood show function***
***Inside Product show function***
Barcode is:40   Product Name is:spaghetti
Unit price is: 0
Call polymorphic function:
 ***Inside Polymorphic function.
***Inside PrePackedFood show function***
***Inside Product show function***
Barcode is:40   Product Name is:spaghetti
Unit price is: 0


****Inside Product destructor****
2b) Create dynamic Prepacked (default):
****Inside Product default constructor!***
Please enter a product name.
Pasta
Please enter barcode.
555
***Inside PrePackedFood default constructor.***
Please enter unit price.
5.0
Name= Pasta
Bar code=555

Unit Price=5

***Inside PrePackedFood show function***
***Inside Product show function***
Barcode is:555  Product Name is:Pasta
Unit price is: 5
Call polymorphic function:
 ***Inside Polymorphic function.
***Inside PrePackedFood show function***
***Inside Product show function***
Barcode is:555  Product Name is:Pasta
Unit price is: 5


****Inside Product destructor****
3a) Create dynamic FreshFood (non default):
 ***** Inside Product non-default constructor!****
****Inside FreshFood non-default constructor ***
Name= Delicious
Bar code=0

Weight=0.67

Price=1.1

***Inside FreshFood show function***
***Inside Product show function***
Barcode is:0    Product Name is:Delicious
Price is: 0.737
Call polymorphic function:
 ***Inside Polymorphic function.
***Inside FreshFood show function***
***Inside Product show function***
Barcode is:0    Product Name is:Delicious
Price is: 0.737


****Inside Product destructor****
3b) Create dynamic FreshFood (default):
****Inside Product default constructor!***
Please enter a product name.
Apricot
Please enter barcode.
444
***Inside FreshFood default constructor.***
Please enter unit price .
3.0
Please enter weight .
2.0
Name= Apricot
Bar code=444

Weight=2

Price=3

***Inside FreshFood show function***
***Inside Product show function***
Barcode is:444  Product Name is:Apricot
Price is: 6
Call polymorphic function:
 ***Inside Polymorphic function.
***Inside FreshFood show function***
***Inside Product show function***
Barcode is:444  Product Name is:Apricot
Price is: 6


****Inside Product destructor****
Press any key to continue . . .*/

