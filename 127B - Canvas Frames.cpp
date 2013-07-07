//4035363   Jul 7, 2013 7:45:38 PM	fuwutu	 127B - Canvas Frames	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, a, count[101] = {0};
    cin >> n;
    while (n--)
    {
        cin >> a;
        count[a] += 1;
    }
    int total = 0;
    for (int i = 1; i <= 100; ++i)
    {
        total += count[i] / 2;
    }
    cout << total / 2 << endl;
    return 0;
}
