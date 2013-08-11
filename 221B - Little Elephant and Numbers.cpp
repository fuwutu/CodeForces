//4263403   Aug 11, 2013 5:31:52 AM 	fuwutu 	221B - Little Elephant and Numbers 	GNU C++0x 	Accepted 	30 ms 	0 KB
#include <iostream>

using namespace std;

bool digit[10] = {false};

void init(int n)
{
    while (n != 0)
    {
        digit[n % 10] = true;
        n /= 10;
    }
}

bool match(int n)
{
    while (n != 0)
    {
        if (digit[n % 10])
        {
            return true;
        }
        n /= 10;
    }
    return false;
}

int main()
{
    int x;
    cin >> x;
    init(x);

    int d = 1, count(0);
    while (d * d < x)
    {
        if (x % d == 0)
        {
            if (match(d))
            {
                ++count;
            }
            if (match(x / d))
            {
                ++count;
            }
        }
        ++d;
    }
    if (d * d == x && match(d))
    {
        ++count;
    }
    cout << count << endl;
    return 0;
}
