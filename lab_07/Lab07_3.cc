#include <iostream>
using namespace std;

enum week { 
    SUNDAY, 
    MONDAY, 
    TUESDAY, 
    WEDNESDAY, 
    THURSDAY, 
    FRIDAYU, 
    SATURDAY 
};

int main()
{
    week today;
    today = "MONDAY";
    cout << "Day " << today+1;
    return 0;
}
