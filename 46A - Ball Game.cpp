//4136831   Jul 22, 2013 9:10:08 PM	fuwutu	 46A - Ball Game	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, c(2);
    cin >> n;
    cout << c;
    for (int i = 2; i < n; ++i)
    {
        c += i;
        if (c > n)
        {
            c -= n;
        }
        cout << " " << c;
    }
    cout << endl;
    return 0;
}
