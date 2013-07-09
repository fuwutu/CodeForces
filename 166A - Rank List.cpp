//4042740   Jul 9, 2013 6:04:04 PM	fuwutu	 166A - Rank List	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <algorithm>

using namespace std;

struct team
{
    int problems;
    int penaltytime;
};

bool cmp(const team& left, const team& right)
{
    return left.problems > right.problems
        || (left.problems == right.problems && left.penaltytime < right.penaltytime);
}

int main()
{
    int n, k;
    team t[50];
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> t[i].problems >> t[i].penaltytime;
    }
    sort(t, t + n, cmp);
    k -= 1;
    int l(k), r(k);
    while (l > 0 && t[l-1].problems == t[k].problems && t[l-1].penaltytime == t[k].penaltytime)
    {
        l -= 1;
    }
    while (r + 1 < n && t[r+1].problems == t[k].problems && t[r+1].penaltytime == t[k].penaltytime)
    {
        r += 1;
    }
    cout << r - l + 1 << endl;
    return 0;
}
