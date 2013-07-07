//4034419   Jul 7, 2013 2:54:03 PM	fuwutu	 1B - Spreadsheet	 GNU C++0x	Accepted	109 ms	0 KB
#include <cstdio>
#include <cstring>
#include <cctype>

int main()
{
    int n;
    char ch[20];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", ch);
        size_t m = strlen(ch);
        size_t C = 1;
        while (C < m && isdigit(ch[C]))
        {
            ++C;
        }

        if (C > 1 && C < m)
        {
            int col(0);
            for (size_t i = C + 1; i < m; ++i)
            {
                col = col * 10 + (ch[i] - '0');
            }

            int pow(26);
            while (col > pow)
            {
                col -= pow;
                pow *= 26;
            }

            col -= 1;
            while (pow != 1)
            {
                pow /= 26;
                printf("%c", col / pow + 'A');
                col %= pow;
            }

            ch[C] = 0;
            printf("%s\n", ch + 1);
        }
        else
        {
            int col(0), val(0), pow = (1);
            size_t i = 0;
            while (isalpha(ch[i]))
            {
                col += pow;
                pow *= 26;
                val = val * 26 + ch[i] - 'A';
                i += 1;
            }
            col += val;
            printf("R%sC%d\n", ch + i, col);
        }
    }
    return 0;
}
