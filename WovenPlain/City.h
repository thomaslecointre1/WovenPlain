#pragma once
#include <string>
using namespace std;

class City
{
public:
	enum size { hamlet, village, town, city };
	City();
	City(size _size, string _name, unsigned int);
	virtual ~City();
	void incrementPopulation();
	void decrementPopulation();
	void setName(string);
	string getName();
	void updateSize();
private:
	size _size;
	string name;
	unsigned int population;
};
