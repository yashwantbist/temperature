#include "temperature.h"
#include <iostream>
using namespace std;


int main() {
    Temperature temp;
    cin >> temp;
    temp.print();
    Temperature temp2;
    cin >> temp2;
    if (temp == temp2) {
        cout << "Temps are equal";
    }
    else {
        cout << " Temps are not equal, please try agian!";
    }

    return 0;
}

