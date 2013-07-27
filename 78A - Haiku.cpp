//4172472   Jul 27, 2013 5:55:14 AM	fuwutu	 78A - Haiku	 GNU C++0x	Accepted	30 ms	0 KB
#include <iostream>

using namespace std;

int main()
{
    char ch[101];
    int syllables[3] = {5, 7, 5};
    bool haiku(true);
    for (int i = 0; i < 3; ++i)
    {
        cin.getline(ch, sizeof(ch) / sizeof(ch[0]));
        int n = 0;
        for (int j = 0; ch[j] != 0; ++j)
        {
            if (ch[j] == 'a' || ch[j] == 'e' || ch[j] == 'i' || ch[j] == 'o' || ch[j] == 'u')
            {
                n += 1;
            }
        }
        if (n != syllables[i])
        {
            haiku = false;
        }
    }
    cout << (haiku ? "YES" : "NO") << endl;
    return 0;
}
