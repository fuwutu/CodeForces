//4032912   Jul 7, 2013 5:46:56 AM	fuwutu	 124A - The number of positions	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << min(n - a, b + 1) << endl;
    return 0;
}
