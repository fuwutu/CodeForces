//4205051   Jul 30, 2013 7:59:44 PM	fuwutu	 9A - Die Roll	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Y, W;
    cin >> Y >> W;

    const string probability[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int D = max(Y, W);
    cout << probability[D] << endl;
    return 0;
}
