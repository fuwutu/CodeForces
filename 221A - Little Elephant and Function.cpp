//4033744   Jul 7, 2013 12:13:57 PM	fuwutu	 221A - Little Elephant and Function	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n;
    for (int i = 1; i < n; ++i)
    {
        cout << " " << i;
    }
    cout << endl;
    return 0;
}
