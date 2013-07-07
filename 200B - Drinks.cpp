//4033618   Jul 7, 2013 11:40:55 AM	fuwutu	 200B - Drinks	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, p, total(0);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> p;
        total += p;
    }
    cout << static_cast<double>(total) / static_cast<double>(n) << endl;
    return 0;
}
