//4057396   Jul 13, 2013 6:22:17 AM	fuwutu	 291B - Command Line Arguments	 GNU C++0x	Accepted	62 ms	100 KB
#include <iostream>

using namespace std;

int main()
{
    char s[100001];
    string lexeme;
    cin.getline(s, sizeof(s) / sizeof(s[0]));
    char* p = s;
    bool quote(false);
    while (*p != 0)
    {
        if (quote)
        {
            if (*p != '\"')
            {
                lexeme.push_back(*p);
            }
            else
            {
                cout << "<" << lexeme << ">" << endl;
                lexeme.clear();
                quote = false;
            }
        }
        else
        {
            if (*p == '\"')
            {
                quote = true;
            }
            else if (*p == ' ')
            {
                if (!lexeme.empty())
                {
                    cout << "<" << lexeme << ">" << endl;
                    lexeme.clear();
                }
            }
            else
            {
                lexeme.push_back(*p);
            }
        }
        ++p;
    }
    if (!lexeme.empty())
    {
        cout << "<" << lexeme << ">" << endl;
    }
    return 0;
}
