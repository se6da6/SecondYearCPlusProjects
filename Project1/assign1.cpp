#include "Inventory.h"

//Client code for Inventory class
//Seda Dadak

// write the showNoProducts() function

void showNoProducts(const Inventory&);

int main()
{
	cout << "Inventory object examples from Inventory.data file:" << endl << endl;
	Inventory company("Inventory.data", 15);
	cout << "\nNumber of products = "
		<< company.getNoProducts() << endl;
	cout << "printing all products in Inventory.data to the screen:\n\n";
	company.writeInventory(cout);
	cout << "\nLooking up product # 54312:\n";
	company.showProduct(54312);		//should be in Inventory.data, if not add it
	cout << "\nIncrease price by $1.22 for product # 54312\n\n";
	company.increasePrice(54312, 1.22);
	cout << "Looking up new price for product # 54312:\n";
	company.showProduct(54312);		//should be incremented
	cout << "\nLooking up product # 60000:\n";
	company.showProduct(60000);		//incremented over $1000
	cout << "\n\nIncrease price by $1000 for product # 88888:\n";
	company.increasePrice(60000, 1000.);
	cout << "Looking up new price for product # 60000\n\n";
	company.showProduct(60000);		//incremented over $1000
	cout << "Number of products = " << company.getNoProducts() << endl;
	cout << "\nprinting all products in Inventory.data screen:\n\n";
	company.writeInventory(cout);


	cout << "\n\n\nEmpty object examples from default.data file" << endl << endl;
	Inventory myshop("default.data");			//empty file
	cout << "Number of products = " << myshop.getNoProducts() << endl << endl;
	cout << "Increase price by $1.22 for product # 24000\n\n";//not in file
	myshop.increasePrice(3483, 1.22);
	ofstream fout("output.file");
	if (!fout.is_open())
	{
		cout << "error opening file " << endl;
		system("pause");
		exit(1);
	}
	fout << fixed << setprecision(2);
	myshop.writeInventory(fout);




	cout << "\n\nFull file (products.data file) examples" << endl << endl;
	Inventory fullLoad("product.data");  //file has more than 25 records
	fullLoad.increasePrice(854, 2.00);
	fullLoad.writeInventory(cout);
	cout << "Number of products  = " << fullLoad.getNoProducts()
		<< endl << endl;
	cout << "\nLooking up product # 666:\n";
	fullLoad.showProduct(666);  //pass one that doesn't exist

	showNoProducts(fullLoad);			   //add the code to call your showNoProducts() function here

	system("type output.file");
	system("pause");
}

void showNoProducts(const Inventory& myInventory)
{
	cout << "Current number of product : " << myInventory.getNoProducts() << endl;
}
/*Inventory object examples from Inventory.data file:


Number of products = 9
printing all products in Inventory.data to the screen:

Product Code        Description                        Price
1023                calendar                           10.00
2310                Computer Desk                     200.00
3322                television                        750.00
54312               Table                              50.00
60000               Printer                           500.00
1111                Phone                             550.00
1122                Frame                             450.00
1133                Wall Clock                         75.00
1144                Watch                             100.00
Number of products :9

Looking up product # 54312:
Description: Table Price:50.00

Increase price by $1.22 for product # 54312

Looking up new price for product # 54312:
Description: Table Price:51.22

Looking up product # 60000:
Description: Printer Price:500.00


Increase price by $1000 for product # 88888:
Price will be more 1000.0 so it is assigned 1000.00
Looking up new price for product # 60000

Description: Printer Price:1000.00
Number of products = 9

printing all products in Inventory.data screen:

Product Code        Description                        Price
1023                calendar                           10.00
2310                Computer Desk                     200.00
3322                television                        750.00
54312               Table                              51.22
60000               Printer                          1000.00
1111                Phone                             550.00
1122                Frame                             450.00
1133                Wall Clock                         75.00
1144                Watch                             100.00
Number of products :9



Empty object examples from default.data file

Number of products = 0

Increase price by $1.22 for product # 24000

The product code could not found
Number of products :0


Full file (products.data file) examples

Product Code        Description                        Price
1023                calendar                           10.00
2310                Computer Desk                     200.00
3322                television                        750.00
54312               Table                              50.00
60000               Printer                           500.00
1111                Phone                             550.00
1122                Frame                             450.00
1133                Wall Clock                         75.00
1144                Watch                             100.00
1155                Bottle                             25.00
1166                Umbrella                           10.00
1177                Bookcase                           75.00
1188                Sunglasses                         75.00
1199                Glassess                          250.00
2200                Crayons                            20.00
2210                Pen                                10.00
2211                pencil                              2.50
2222                Headphone                         100.00
2233                Camera                            150.00
2244                Backpack                           50.00
2255                Painting set                       45.00
2266                Desk                               75.00
854                 Printing paper                     12.00
2277                Pillow                             20.00
2288                Sheet protector                     5.00
Number of products :25
Number of products  = 25


Looking up product # 666:
Product can not be found.
Current number of product : 25
Product Code        Description                        Price
Press any key to continue . . .*/