//4052591   Jul 12, 2013 3:41:55 AM	fuwutu	 242A - Heads or Tails	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int count = 0;
    for (int Vasya = a; Vasya <= x; ++Vasya)
    {
        int end = min(Vasya - 1, y);
        if (b <= end)
        {
            count += (end - b + 1);
        }
    }
    cout << count << endl;
    for (int Vasya = a; Vasya <= x; ++Vasya)
    {
        int end = min(Vasya - 1, y);
        for (int Petya = b; Petya <= end; ++Petya)
        {
            cout << Vasya << " " << Petya << endl;
        }
    }
    return 0;
}
