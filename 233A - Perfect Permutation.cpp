//4033107   Jul 7, 2013 8:03:16 AM	fuwutu	 233A - Perfect Permutation	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << "2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
    }
    return 0;
}
