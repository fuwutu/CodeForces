//4034464   Jul 7, 2013 3:07:20 PM	fuwutu	 287A - IQ Test	 GNU C++0x	Accepted	 15 ms	 0 KB
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vs(4);
    for (size_t i = 0; i < 4; ++i)
    {
        cin >> vs[i];
    }

    bool pass = false;
    for (size_t top = 0; top <= 2 && !pass; ++top)
    {
        for (size_t left = 0; left <= 2; ++left)
        {
            int dot = 0;
            for (size_t r = 0; r < 2; ++r)
            {
                for (size_t c = 0; c < 2; ++c)
                {
                    if (vs[top+r][left+c] == '.')
                    {
                        dot += 1;
                    }
                }
            }
            if (dot != 2)
            {
                pass = true;
                break;
            }
        }
    }
    cout << (pass ? "YES" : "NO") << endl;
    return 0;
}
