#include "Subscription.h"

//Implementation file for subscription class
//Seda Dadak

Subscription::Subscription(string newDistributorName)
{
	distributorName = newDistributorName;
	noOfMagazines = 0;
	firstPtr = NULL;
}

void Subscription::showMagazines(ostream& out)const
{
	out << left << setw(20) << "Distributor Name: " << distributorName << endl;
	out << left << setw(20) << "Magazine Name"
		<< setw(20) << "ISBN"
		<< setw(20) << "Delivery Type" << endl;
	Magazine* walker = firstPtr;

	while (walker != NULL)
	{
		out << left << setw(20) << walker->name
			<< setw(20) << walker->isbn
			<< setw(20) << ((walker->delivery=='D')?"Daily":(walker->delivery=='W')?"Weekly":"Monthly")<< endl;
		
		walker = walker->link;

	}

	cout << "Number of magazines is :" << noOfMagazines << endl;
}

void Subscription::addMagazine(string newIsbn, string newName, char newDelivery)
{

	Magazine* stalker = NULL;
	Magazine* walker = firstPtr;
	while (walker != NULL)
	{
		if (walker->name >= newName)
			break;
		stalker = walker;
		walker = walker->link;
	}
	if (walker != NULL && walker->name == newName) {
		cout << "Magazine already exist." << endl;
	}
	else {
		Magazine* builder = new Magazine;
		assert(builder != NULL);
		builder->isbn = newIsbn;
		builder->name = newName;
		newDelivery = toupper(newDelivery);
		builder->delivery = newDelivery;
		builder->link = walker;
		if (walker == firstPtr)
			firstPtr = builder;
		else			
			stalker->link = builder;
		
	}
	noOfMagazines++;

}

Subscription::~Subscription()
{
	Magazine* walker = firstPtr;
	while (walker != NULL)
	{
		walker = walker->link;
		cout << "Deleted magazine" << firstPtr->name << endl;
		delete firstPtr;
		firstPtr = walker;
	}
	
}

void Subscription::removeMagazine(string deleteName)
{
	Magazine* walker = firstPtr, * stalker = NULL;
	if (firstPtr == NULL)
		cout << "List is empty" << endl;
	else
	{
		while (walker != NULL)
		{
			if (walker->name == deleteName)
				break;
			stalker = walker;
			walker = walker->link;

		}
		if (walker == NULL)
			cout << "Isbn not found" << endl;
		else
		{
			if (walker == firstPtr)
				firstPtr = firstPtr->link;
			else
				stalker->link = walker->link;
			delete walker;
			noOfMagazines--;
		}
		
		
	}
	
}