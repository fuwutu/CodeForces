//4033146   Jul 7, 2013 8:27:46 AM	fuwutu	 272A - Dima and Friends	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, f, total(0), answer(0);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> f;
        total += f;
    }
    for (int i = 1; i <= 5; ++i)
    {
        if ((total + i) % (n + 1) != 1)
        {
            answer += 1;
        }
    }
    cout << answer << endl;
    return 0;
}
