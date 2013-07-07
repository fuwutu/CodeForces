//4034291   Jul 7, 2013 2:22:31 PM	fuwutu	 300A - Array	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it < 0)
        {
            cout << "1 " << *it << endl;
            arr.erase(it);
            break;
        }
    }

    bool found(false);
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        if (*it > 0)
        {
            found = true;
            cout << "1 " << *it << endl;
            arr.erase(it);
            break;
        }
    }

    if (!found)
    {
        cout << "2";
        int count = 0;
        for (vector<int>::iterator it = arr.begin(); count < 2;)
        {
            if (*it < 0)
            {
                cout << " " << *it;
                it = arr.erase(it);
                ++count;
            }
            else
            {
                ++it;
            }
        }
        cout << endl;
    }

    cout << arr.size();
    for (size_t i = 0; i < arr.size(); ++i)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
