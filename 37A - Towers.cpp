//4033020   Jul 7, 2013 7:13:59 AM	fuwutu	 37A - Towers	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, l, h[1001] = {0};
    cin >> n;
    while (n--)
    {
        cin >> l;
        h[l] += 1;
    }

    int height = *max_element(h, h + 1001);
    int number = 1001 - count(h, h + 1001, 0);

    cout << height << " " << number << endl;

    return 0;
}
