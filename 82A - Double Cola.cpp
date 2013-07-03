//4006861   Jul 3, 2013 5:47:02 PM	fuwutu	 82A - Double Cola	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int r = 1;
    while (r * 5 < n)
    {
        n -= r * 5;
        r *= 2;
    }

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n - 1) / r] << endl;

    return 0;
}
