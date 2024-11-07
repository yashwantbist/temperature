
#include <iostream>
#include <string>
using namespace std;

class Temperature {
private:
	double celsius;
	double fahrenheit;
public:
	Temperature();
	bool operator==(const Temperature& v);
	friend istream& operator>>(istream& in, Temperature& temp);
	void print() const;
};