//4172001     Jul 27, 2013 4:19:28 AM 	fuwutu 	330A - Cakeminator 	GNU C++0x 	Accepted 	30 ms 	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int r, c, row[11] = {0}, col[11] ={0};
    string s;
    cin >> r >> c;
    for (int i = 0; i < r; ++i)
    {
        cin >> s;
        for (int j = 0; j < c; ++j)
        {
            if (s[j] == 'S')
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    int cakes(0);
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                cakes += 1;
            }
        }
    }
    cout << cakes << endl;
    return 0;
}
