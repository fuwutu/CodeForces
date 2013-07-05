//4027816   Jul 5, 2013 8:24:34 PM	fuwutu	 158C - Cd and pwd commands	 GNU C++0x	Accepted	15 ms	100 KB
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    string command, parameter;
    vector<string> path;
    cin >> n;
    while (n--)
    {
        cin >> command;
        if (command.compare("pwd") == 0)
        {
            cout << "/";
            for (size_t i = 0; i < path.size(); ++i)
            {
                cout << path[i] << "/";
            }
            cout << endl;
        }
        else
        {
            cin >> parameter;
            size_t pos = 0;
            if (parameter[0] == '/')
            {
                path.clear();
                pos = 1;
            }
            while (true)
            {
                size_t next_pos = parameter.find('/', pos);
                if (next_pos != string::npos)
                {
                    string dir = parameter.substr(pos, next_pos - pos);
                    if (dir.compare("..") != 0)
                    {
                        path.push_back(dir);
                    }
                    else
                    {
                        if (!path.empty())
                        {
                            path.pop_back();
                        }
                    }
                    pos = next_pos + 1;
                }
                else
                {
                    string dir = parameter.substr(pos, string::npos);
                    if (dir.compare("..") != 0)
                    {
                        path.push_back(dir);
                    }
                    else
                    {
                        if (!path.empty())
                        {
                            path.pop_back();
                        }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
