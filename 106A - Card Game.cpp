//4235509   Aug 6, 2013 9:00:31 AM	fuwutu	 106A - Card Game	 GNU C++0x	Accepted	 62 ms	 0 KB
#include <cstdio>

using namespace std;

int rank(char c)
{
    const char* order = "6789TJQKA";
    char* find = const_cast<char*>(order);
    while (*find != c)
    {
        ++find;
    }
    return find - order;
}

int main()
{
    char suit[2], card1[3], card2[3];
    scanf("%s%s%s", suit, card1, card2);

    bool beat = (card1[1] == suit[0] && card2[1] != suit[0])
        || (card1[1] == card2[1] && rank(card1[0]) > rank(card2[0]));
    printf(beat ? "YES\n" : "NO\n");
    return 0;
}
