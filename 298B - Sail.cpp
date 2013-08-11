//4263324   Aug 11, 2013 5:07:31 AM 	fuwutu 	298B - Sail 	GNU C++0x 	Accepted 	62 ms 	300 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, sx, sy, ex, ey, time(-1);
    string wind;
    cin >> t >> sx >> sy >> ex >> ey >> wind;
    for (int i = 0; i < t; ++i)
    {
        switch (wind[i])
        {
        case 'E':
            if (sx < ex)
            {
                sx += 1;
            }
            break;
        case 'S':
            if (sy > ey)
            {
                sy -= 1;
            }
            break;
        case 'W':
            if (sx > ex)
            {
                sx -= 1;
            }
            break;
        case 'N':
            if (sy < ey)
            {
                sy += 1;
            }
            break;
        default:
            break;
        }
        if (sx == ex && sy == ey)
        {
            time = i + 1;
            break;
        }
    }
    cout << time << endl;
    return 0;
}
