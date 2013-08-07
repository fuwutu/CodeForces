//4240257   Aug 7, 2013 4:45:32 PM	fuwutu	 6A - Triangle	 GNU C++0x	Accepted	 62 ms	 0 KB
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int length[4];
    scanf("%d%d%d%d", &length[0], &length[1], &length[2], &length[3]);
    sort(length, length + 4);
    if (length[0] + length[1] > length[2] || length[1] + length[2] > length[3])
    {
        printf("TRIANGLE\n");
    }
    else if (length[0] + length[1] == length[2] || length[1] + length[2] == length[3])
    {
        printf("SEGMENT\n");
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
