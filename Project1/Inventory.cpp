#include "Inventory.h"

//Implementation file for inventory class
//Seda Dadak

void Inventory::showProduct(int currentProductCode)const
{

	int index = searchProduct(currentProductCode);
	if (products[index].productCode == currentProductCode)
	{
		cout << "Description: " << products[index].description << " Price:" << products[index].price << endl;

	}
	else
		cout << "Product can not be found." << endl;

		
	
}

void Inventory::writeInventory(ostream& fout) const
{

	fout << left << setw(20) << "Product Code "
		<< setw(20) << "Description"
		<< right << setw(20) << "Price" << endl;
	fout << fixed << setprecision(2);
	for (int index = 0; index < noProducts; index++)
	{
		fout << left << setw(20) << products[index].productCode
			<< setw(20) << products[index].description
			<< right << setw(20) << products[index].price << endl;
	}
	cout << "Number of products :" << noProducts << endl;
}


int Inventory::searchProduct(int currentProductCode)const
{
	int index = 0, num = 0;
	for (; index < noProducts; index++)
	{
		if (products[index].productCode == currentProductCode)
		{
			num = index;
			break;
		}
		else 
			num = noProducts;
	}
	return num;
}

void Inventory::increasePrice(int currentProductCode, double increaseInPrice)
{

	int index = searchProduct(currentProductCode);
	if (products[index].productCode == currentProductCode)
	{
		if ((products[index].price + increaseInPrice) > 1000.0)
			cout << "Price will be more 1000.0 so it is assigned "<< (products[index].price = 1000.0) << endl;
		else 
			products[index].price = (products[index].price + increaseInPrice);
	}else 
		cout << "The product code could not found" << endl;
}

Inventory::Inventory(string fileName, int newMaxProducts)
{
	if (newMaxProducts < SIZE)
		maxProducts = newMaxProducts;
	else
		maxProducts = 25;
	ifstream fin;
	fin.open(fileName);
	if (!fin.is_open())
	{
		cout << "error opening product file";
		system("pause");
		exit(-1);
	}

	for (noProducts = 0; noProducts < SIZE; noProducts++)
	{
		fin >> products[noProducts].productCode;
		if (fin.eof())
			break;
		fin.ignore(80, '\n');
		getline(fin, products[noProducts].description);

		fin >> products[noProducts].price;
	}
	system(fileName.c_str());
	

}