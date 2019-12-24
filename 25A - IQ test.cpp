//4034892   Jul 7, 2013 5:15:08 PM	fuwutu	 25A - IQ test	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    int n, x, even(0), lastodd(0), lasteven(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even = even + 1;
            lasteven = i;
        }
        else
        {
            even = even - 1;
            lastodd = i;
        }
    }
    if(even > 0){
        cout << lastodd << endl;
    }
   else{
       cout << lasteven << endl;
       return 0;
}
