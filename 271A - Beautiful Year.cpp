//4022146   Jul 4, 2013 8:34:23 PM	fuwutu	 271A - Beautiful Year	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
using namespace std;
int main()
{
    int n, m, a[4], i;
    cin >> n;
    m = n + 1;
    
    for (i = 0; i < 4; i++)
    {
        a[i] = m % 10;
        m = m / 10;
    }
    m=n+1;
    while (a[0] == a[1] || a[0] == a[2] || a[0] == a[3] || a[1] == a[2] || a[1] == a[3] ||a[2] == a[3]   )
    {
        n=m;
        m++;
        for (i = 0; i < 4; i++)
        {
            a[i] = n % 10;
            n = n / 10;
        }
        
    }
    if(m==n+1)
    {
        cout<<m;
    }
    else{cout<<m-1;}
    return 0;
}
