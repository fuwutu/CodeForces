//4264747   Aug 11, 2013 12:07:08 PM	fuwutu	 12B - Correct Solution?	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;
    char m[11], digit[10] = {'0'}, digitcount(0);
    scanf("%d%s", &n, &m);

    while (n != 0)
    {
        digit[digitcount++] = '0' + n % 10;
        n /= 10;
    }

    sort(digit, digit + digitcount);

    if (digit[0] == '0')
    {
        for (int i = 1; i < digitcount; ++i)
        {
            if (digit[i] != '0')
            {
                digit[0] = digit[i];
                digit[i] = '0';
                break;
            }
        }
    }

    printf(strcmp(m, digit) == 0 ? "OK\n" : "WRONG_ANSWER\n");
    return 0;
}
