//4021277   Jul 4, 2013 7:21:06 PM	fuwutu	 110A - Nearly Lucky Number	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
