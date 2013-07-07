//4033567   Jul 7, 2013 11:26:18 AM	fuwutu	 168A - Wizards and Demonstration	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int clones = (n * y + 99) / 100 - x;
    if (clones < 0)
    {
        clones = 0;
    }
    cout << clones << endl;
    return 0;
}
