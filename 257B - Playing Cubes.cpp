//4266235   Aug 11, 2013 6:06:06 PM	fuwutu	 257B - Playing Cubes	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int Vasya = min(n, m);
    int Petya = n + m - 1 - Vasya;
    cout << Petya << " " << Vasya << endl;
    return 0;
}
