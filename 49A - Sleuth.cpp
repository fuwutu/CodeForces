//4231238 Aug 5, 2013 8:54:36 AM fuwutu 49A - Sleuth GNU C++0x Accepted 62 ms 0 KB 
#include <iostream>

using namespace std;

int main()
{
    char s[110];
    cin.getline(s, sizeof(s) / sizeof(s[0]), '\n');
    bool vowel(true);
    char* p = s;
    while (*p != '\0')
    {
        if (*p >= 'a' && *p <= 'z' || *p >= 'A' && *p <= 'Z')
        {
            if (*p == 'a' ||*p == 'e' ||*p == 'i' ||*p == 'o' ||*p == 'u' ||*p == 'y' ||
                *p == 'A' ||*p == 'E' ||*p == 'I' ||*p == 'O' ||*p == 'U' ||*p == 'Y')
            {
                vowel = true;
            }
            else
            {
                vowel = false;
            }
        }
        ++p;
    }
    cout << (vowel ? "YES" : "NO") << endl;
    return 0;
}
