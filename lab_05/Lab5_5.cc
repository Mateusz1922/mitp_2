#include <iostream>
#include <climits>
using namespace std;

int main()
{
    unsigned int x = UINT_MAX;
    cout<<x<<endl;
	// x++;
    cout<<(x < UINT_MAX ? x+1 : x) <<endl;

}
