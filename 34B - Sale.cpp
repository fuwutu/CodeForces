//4263357   Aug 11, 2013 5:15:57 AM 	fuwutu 	34B - Sale 	GNU C++0x 	Accepted 	30 ms 	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, a[100];
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int s(0);
    for (int i = 0; i < m; ++i)
    {
        if (a[i] >= 0)
        {
            break;
        }
        s += a[i];
    }
    cout << -s << endl;
    return 0;
}
