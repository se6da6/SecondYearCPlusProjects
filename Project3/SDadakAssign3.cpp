#include "Subscription.h"

//Client code of Subscription class
//Seda Dadak

int main()
{
	Subscription* newSubscPtr = new Subscription("Penguin House");
	assert(newSubscPtr != NULL);
	cout << "Distributor name : "<<newSubscPtr->getDistributorName() << endl;
	cout<<"At the beginning number of magazines: "<< newSubscPtr->getNoMagazines()<<endl;
	newSubscPtr->addMagazine("defg", "Happy Life", 'm');
	newSubscPtr->addMagazine("jklm", "Geniuse Kids", 'w');
	newSubscPtr->addMagazine("ptsr", "Home Decor", 'm');
	newSubscPtr->addMagazine("asft", "Epic Pulse", 'm');
	newSubscPtr->addMagazine("abcd", "National Geographic", 'y');
	cout << "Try to insert same magazine " << endl;
	newSubscPtr->addMagazine("abcd", "National Geographic", 'y');
	newSubscPtr->showMagazines(cout);
	cout << "Removing from beginning. " << endl;
	newSubscPtr->removeMagazine("Epic Pulse");
	newSubscPtr->showMagazines(cout);
	cout << "Removing from the middle. " << endl;
	newSubscPtr->removeMagazine("Happy Life");
	newSubscPtr->showMagazines(cout);
	cout << "Removing from the end. " << endl;
	newSubscPtr->removeMagazine("National Geographic");
	newSubscPtr->showMagazines(cout);
	cout << "Tyr to remove same magazine " << endl;
	newSubscPtr->removeMagazine("National Geographic");
	newSubscPtr->showMagazines(cout);
	system("pause");
	
}
/*
Distributor name : Penguin House
At the beginning number of magazines: 0
Try to insert same magazine
Magazine already exist.
Distributor Name:   Penguin House
Magazine Name       ISBN                Delivery Type
Epic Pulse          asft                Monthly
Geniuse Kids        jklm                Weekly
Happy Life          defg                Monthly
Home Decor          ptsr                Monthly
National Geographic abcd                Monthly
Number of magazines is :6
Removing from beginning.
Distributor Name:   Penguin House
Magazine Name       ISBN                Delivery Type
Geniuse Kids        jklm                Weekly
Happy Life          defg                Monthly
Home Decor          ptsr                Monthly
National Geographic abcd                Monthly
Number of magazines is :5
Removing from the middle.
Distributor Name:   Penguin House
Magazine Name       ISBN                Delivery Type
Geniuse Kids        jklm                Weekly
Home Decor          ptsr                Monthly
National Geographic abcd                Monthly
Number of magazines is :4
Removing from the end.
Distributor Name:   Penguin House
Magazine Name       ISBN                Delivery Type
Geniuse Kids        jklm                Weekly
Home Decor          ptsr                Monthly
Number of magazines is :3
Tyr to remove same magazine
Isbn not found
Distributor Name:   Penguin House
Magazine Name       ISBN                Delivery Type
Geniuse Kids        jklm                Weekly
Home Decor          ptsr                Monthly
Number of magazines is :3
Press any key to continue . . .
*/