//4192132   Jul 28, 2013 4:38:27 AM	fuwutu	 2A - Winner	 GNU C++0x	Accepted	30 ms	200 KB
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<string, int>> rounds(n);
    map<string, int> player2score;
    for (int i = 0; i < n; ++i)
    {
        cin >> rounds[i].first >> rounds[i].second;
        player2score[rounds[i].first] += rounds[i].second;
    }

    set<string> winners;
    int m(-1000001);
    for (map<string, int>::iterator it = player2score.begin(); it != player2score.end(); ++it)
    {
        if (it->second > m)
        {
            m = it->second;
            winners.clear();
            winners.insert(it->first);
        }
        else if (it->second == m)
        {
            winners.insert(it->first);
        }
    }

    if (winners.size() > 1)
    {
        player2score.clear();
        for (vector<pair<string, int>>::iterator it = rounds.begin(); it != rounds.end(); ++it)
        {
            player2score[it->first] += it->second;
            if (player2score[it->first] >= m && winners.count(it->first) == 1)
            {
                winners.clear();
                winners.insert(it->first);
                break;
            }
        }
    }

    cout << *winners.begin() << endl;
    return 0;
}
