//============================================================================
// Name        : Lab06_4.cpp
// Author      : Andrzej Matiolanski
// Version     : V1.0
// Copyright   : Copyright AGH 2022
// Description : Infinite loop examples
//============================================================================

#include <iostream>
using namespace std;
int main() {

	int i=0;
	
	//for infinite loop
	// for(;;)
	// {
	// 	i++;
	// 	// cout<<i<<endl;
	// }
	
	//while infinite loop
	while(1)
	{
		i++;
		if (i > 144)
		{
			break;
		}
		if (!(i % 12))
		{
			cout<<i<<endl;
		}
	}
	
	//do-while infinite loop
	// do
	// {
	// 	i++;
	// 	// cout<<i<<endl;
	// }while(1);
	
	return 0;
}
