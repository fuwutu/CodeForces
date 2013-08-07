//4240233   Aug 7, 2013 4:37:55 PM	fuwutu	 186A - Строкосравнитель	 GNU C++0x	Accepted	 62 ms	 200 KB
#include <cstdio>
#include <cstring>

int main()
{
    char s1[100001], s2[100001];
    scanf("%s%s", s1, s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    bool same = false;
    if (len1 == len2)
    {
        int diff[3], diffcount(0);
        for (int i = 0; i < len1; ++i)
        {
            if (s1[i] != s2[i])
            {
                diff[diffcount++] = i;
                if (diffcount == 3)
                {
                    break;
                }
            }
        }
        if (diffcount == 2 && s1[diff[0]] == s2[diff[1]] && s1[diff[1]] == s2[diff[0]])
        {
            same = true;
        }
    }
    printf(same ? "YES\n" : "NO\n");

    return 0;
}
