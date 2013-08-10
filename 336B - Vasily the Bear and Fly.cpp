//4262082   Aug 10, 2013 7:07:20 PM	fuwutu	 336B - Vasily the Bear and Fly	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double m, R;
    cin >> m >> R;

    double answer = (m * (m + 1) * (m + 2) / 3 - m) * 2;
    answer += (sqrt(2.0) - 2) * ((m * m - m) + (m * m - m - (m - 1) * 2));
    answer /= (m * m);

    answer *= R;
    cout << setprecision(7) << answer << endl;
    return 0;
}
