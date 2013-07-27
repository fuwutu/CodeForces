//4172301   Jul 27, 2013 5:23:55 AM	fuwutu	 63A - Sinking Ship	 GNU C++0x	Accepted	30 ms	100 KB
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string name, status;
    vector<string> rats, womenandchildren, men, captain;
    while (n--)
    {
        cin >> name >> status;
        if (status == "rat")
        {
            rats.push_back(name);
        }
        else if (status == "woman" || status == "child")
        {
            womenandchildren.push_back(name);
        }
        else if (status == "man")
        {
            men.push_back(name);
        }
        else
        {
            captain.push_back(name);
        }
    }
    for (auto one : rats)
    {
        cout << one << endl;
    }
    for (auto one : womenandchildren)
    {
        cout << one << endl;
    }
    for (auto one : men)
    {
        cout << one << endl;
    }
    for (auto one : captain)
    {
        cout << one << endl;
    }
    return 0;
}
