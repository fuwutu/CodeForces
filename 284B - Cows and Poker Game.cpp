//4035087   Jul 7, 2013 6:20:05 PM	fuwutu	 284B - Cows and Poker Game	 GNU C++0x	Accepted	15 ms	200 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    char ch[200001];
    scanf("%d%s", &n, ch);
    int allin = count(ch, ch + n, 'A');
    int in = count(ch, ch + n, 'I');
    int folded = count(ch, ch + n, 'F');
    if (in == 1)
    {
        printf("1\n");
    }
    else if (in == 0)
    {
        printf("%d\n", allin);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
