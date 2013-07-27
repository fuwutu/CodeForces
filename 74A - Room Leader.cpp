//4189293   Jul 27, 2013 5:07:36 PM	fuwutu	 74A - Room Leader	 GNU C++0x	Accepted	30 ms	100 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, plus, minus, a, b, c, d, e, top(-2501);
    string handle, leader;
    cin >> n;
    while (n--)
    {
        cin >> handle >> plus >> minus >> a >> b >> c >> d >> e;
        int points = plus * 100 - minus * 50 + a + b + c + d + e;
        if (points > top)
        {
            leader = handle;
            top = points;
        }
    }
    cout << leader;
    return 0;
}
