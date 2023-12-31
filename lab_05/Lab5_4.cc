//============================================================================
// Name        : Lab4_4.cpp
// Author      : Michal Grega
// Version     : V1.0
// Copyright   : Copyright AGH 2017
// Description : Ternary operator example
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int in=0;
	int out=0;

	cout<<"Provide a number"<<endl;
	cin>>in;

	// The following code implements an if-else statement
	if (in>4) {
		out=1;
	}else {
		out=-1;
	}

	// Check results
	cout << "Out1: "<< out << endl;

	// Reset state
	out=0;

    // Reimplement the above code as a ternary operator
    // Your code here ...

    // Check results
	cout << "Out2: "<< out << endl;
	return 0;
}
