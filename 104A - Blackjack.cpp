//4055407   Jul 12, 2013 6:41:00 PM	fuwutu	 104A - Blackjack	 GNU C++0x	Accepted	15 ms	0 KB
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL) ;
    cin.tie(NULL) ;
    int n;
    cin >> n;
    if (n <= 10 || n > 21)
    {
        cout << 0 << endl;
    }
    else if (n == 20)
    {
        cout << 15 << endl;
    }
    else
    {
        cout << 4 << endl;
    }
    return 0;
}
