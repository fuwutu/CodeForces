//4033282   Jul 7, 2013 9:25:08 AM	fuwutu	 255A - Greg's Workout	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, chest(0), biceps(0), back(0);
    cin >> n;
    for (int i = 0; i < n / 3; ++i)
    {
        cin >> a >> b >> c;
        chest += a;
        biceps += b;
        back += c;
    }
    if (n % 3 == 1)
    {
        cin >> a;
        chest += a;
    }
    else if (n % 3 == 2)
    {
        cin >> a >> b;
        chest += a;
        biceps += b;
    }
    if (chest > biceps && chest > back)
    {
        cout << "chest" << endl;
    }
    else if (biceps > back && biceps > chest)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
    }
    return 0;
}
