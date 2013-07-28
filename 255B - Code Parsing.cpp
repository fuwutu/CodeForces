//4195173   Jul 28, 2013 6:14:10 PM	fuwutu	 255B - Code Parsing	 GNU C++0x	Accepted	156 ms	2100 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int nx(0), ny(0);
    for (char c : s)
    {
        if (c == 'x')
        {
            nx += 1;
        }
        else
        {
            ny += 1;
        }
    }
    if (nx > ny)
    {
        s.assign(nx - ny, 'x');
    }
    else
    {
        s.assign(ny - nx, 'y');
    }
    cout << s << endl;
    return 0;
}
