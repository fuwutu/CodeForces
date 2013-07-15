//4076800   Jul 15, 2013 9:04:58 PM	fuwutu	 4C - Registration System	 GNU C++0x	Accepted	 578 ms	 900 KB
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, int> database;
    string s;
    while (n--)
    {
        cin >> s;
        if (database.count(s) == 0)
        {
            cout << "OK" << endl;
            database[s] = 1;
        }
        else
        {
            cout << s << database[s] << endl;
            database[s] += 1;
        }
    }
    return 0;
}
