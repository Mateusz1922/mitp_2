// DO x = 10 to 20 
// 	SET y to 30 - x
// 	IF this is the last loop iteration
// 	    print "last iteration"
// 	IF x is greater than y by 3
// 		print "x is bigger then y"
// 	IF other cases
// 		print x
// 	print a newline
#include <iostream>

using std::cout, std::cin;
int main()
{
    int y;
    for (int x = 10; x < 21; x++)
    {
        y = 30 - x;
        if (x == 20)
        {
            cout << "last iteration";
        }
        else if (x - y > 3)
        {
            cout << "x is bigger then y";
        }
        else
        {
            cout << x << std::endl;
        }
        cout << std::endl;
    }
   
    return 0;
}