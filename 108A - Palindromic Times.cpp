//4240194   Aug 7, 2013 4:26:51 PM	fuwutu	 108A - Palindromic Times	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>

int main()
{
    int hh, mm;
    scanf("%d:%d", &hh, &mm);
    do 
    {
        ++mm;
        if (mm == 60)
        {
            ++hh;
            mm = 0;
        }
        if (hh == 24)
        {
            hh = 0;
        }
    } while (hh % 10 * 10 + hh / 10 != mm);
    printf("%02d:%02d\n", hh, mm);
    return 0;
}
