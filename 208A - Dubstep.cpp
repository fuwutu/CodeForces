//4032897   Jul 7, 2013 5:34:34 AM	fuwutu	 208A - Dubstep	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<string> words;
    size_t start = 0;
    while (true)
    {
        size_t end = s.find("WUB", start);
        if (end == string::npos)
        {
            words.push_back(s.substr(start, end));
            break;
        }
        if (end != start)
        {
            words.push_back(s.substr(start, end - start));
        }
        start = end + 3;
    }

    if (!words.empty())
    {
        cout << words[0];
    }
    for (size_t i = 1; i < words.size(); ++i)
    {
        cout << " " << words[i];
    }
    cout << endl;

    return 0;
}
