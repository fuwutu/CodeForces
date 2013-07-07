//4033186   Jul 7, 2013 8:44:41 AM	fuwutu	 291A - Spyke Talks	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, id[1000];
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> id[i];
    }
    sort(id, id + n);
    int pairs = 0;
    for (int i = 1; i < n; ++i)
    {
        if (id[i] != 0 && id[i] == id[i-1])
        {
            pairs += 1;
            if (i + 1 < n && id[i] == id[i+1])
            {
                pairs = -1;
                break;
            }
        }
    }
    cout << pairs << endl;
    return 0;
}
