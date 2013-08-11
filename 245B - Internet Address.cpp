//4263640   Aug 11, 2013 6:44:25 AM 	fuwutu 	245B - Internet Address 	GNU C++0x 	Accepted 	30 ms 	0 KB
#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    size_t p = s.find('p');
    s.insert(p + 1, "://");

    size_t ru = s.find("ru", p + 5);
    if (ru + 2 != s.length())
    {
        s.insert(ru + 2, "/");
    }
    s.insert(ru, ".");

    cout << s << endl;
    return 0;
}
