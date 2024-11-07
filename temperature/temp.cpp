#include <iostream>
#include "temperature.h"
using namespace std;


Temperature::Temperature() {
	celsius = 0;
	fahrenheit = 32.0;
}

bool Temperature::operator==(const Temperature& v) {
	return (celsius == v.celsius && fahrenheit == v.fahrenheit);
};
// friend istream& operator >>(istream& in, const Temperature& temp);
istream& operator>>(istream& in, Temperature& temp) {
	cout << "Enter the temp of the body:  ";
	in >> temp.celsius;
	temp.fahrenheit = ((temp.celsius * 9.0) / 5.0) + 32.0;
	return in;
}
void Temperature::print() const {
	cout << "temperature in celsius :  " << celsius << " temp in farhenheit :  " << fahrenheit << endl;
}