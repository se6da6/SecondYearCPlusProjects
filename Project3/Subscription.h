#include<iostream>
#include<string>
#include<cassert>
#include <iomanip>

using namespace std;
//Specification file for sunscription class using ADT, and links
//Name:Seda Dadak

struct Magazine {
	string name;
	string isbn;
	char delivery;
	Magazine* link;

};

class Subscription
{
public:
	Subscription(string/*distributorName*/);
	~Subscription();
	void showMagazines(ostream&/*out*/)const;
	void addMagazine(string/*isbn*/, string/*name*/, char/*delivery*/);
	void removeMagazine(string /*isbn*/);
	int getNoMagazines()const { return noOfMagazines; }
	string getDistributorName()const { return distributorName; }

private:
	Magazine* firstPtr;
	string distributorName;
	int noOfMagazines;
};


