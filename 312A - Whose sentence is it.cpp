//4263699   Aug 11, 2013 7:03:13 AM 	fuwutu 	312A - Whose sentence is it? 	GNU C++0x 	Accepted 	62 ms 	100 KB
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char ch[101];
    cin.getline(ch, 101);

    string s;
    while (n--)
    {
        cin.getline(ch, 101);
        s.assign(ch);

        if (s.length() >= 5)
        {
            if (s.substr(s.length() - 5, 5) == "lala.")
            {
                if (s.substr(0, 5) == "miao.")
                {
                    cout << "OMG>.< I don't know!" << endl;
                }
                else
                {
                    cout << "Freda's" << endl;
                }
            }
            else
            {
                if (s.substr(0, 5) == "miao.")
                {
                    cout << "Rainbow's" << endl;
                }
                else
                {
                    cout << "OMG>.< I don't know!" << endl;
                }
            }
        }
        else
        {
            cout << "OMG>.< I don't know!" << endl;
        }
    }
    return 0;
}
