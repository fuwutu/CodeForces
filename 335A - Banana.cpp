//4331873	 Aug 24, 2013 1:46:14 PM	fuwutu	 335A - Banana	 GNU C++0x	Accepted	 30 ms	 0 KB
#include <cstdio>
#include <cstring>

int main()
{
    char s[1000];
    int n, count1[128] = {0}, count2[128] = {0};
    
    scanf("%s%d", s, &n);
    for (int i = 0; i < strlen(s); ++i)
    {
        count1[s[i]] += 1;
    }

    int letters = 0;
    for (int i = 'a'; i <= 'z'; ++i)
    {
        if (count1[i] != 0)
        {
            letters += 1;
        }
    }

    if (letters <= n)
    {
        while (n--)
        {
            int numerator = 1001, denominator = 1, index = 0;
            for (int i = 'a'; i <= 'z'; ++i)
            {
                if (count1[i] != 0)
                {
                    if (count2[i] * denominator < numerator * count1[i])
                    {
                        numerator = count2[i];
                        denominator = count1[i];
                        index = i;
                    }
                }
            }
            count2[index] += 1;
        }

        int sheets = 0;
        for (int i = 'a'; i <= 'z'; ++i)
        {
            if (count2[i] != 0)
            {
                int temp = (count1[i] + count2[i] - 1) / count2[i];
                if (temp > sheets)
                {
                    sheets = temp;
                }
            }
        }
        printf("%d\n", sheets);

        for (int i = 'a'; i <= 'z'; ++i)
        {
            while (count2[i]--)
            {
                printf("%c", i);
            }
        }
        printf("\n");
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
