//4003975   Jul 2, 2013 8:27:30 PM	fuwutu	 4A - Watermelon	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
