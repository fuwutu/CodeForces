//4006999   Jul 3, 2013 6:34:23 PM	fuwutu	 112A - Petya and Strings	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    cout << strcmp(s1.c_str(), s2.c_str()) << endl;
    return 0;
}


// My solution

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s1,s2;
	cin >> s1;
	cin >> s2;
	for(int i=0;i<s1.size();i++)
	{
	    if(s1[i]>='a' && s1[i]<='z')
	    s1[i]=s1[i]-32;
	    if(s2[i]>='a' && s2[i]<='z')
	    s2[i]=s2[i]-32;
	    if(s1[i]>s2[i])
	    {
	        cout << "1";
	        return 0;
	    }
	    if(s1[i]<s2[i])
	    {
	        cout << "-1";
	        return 0;
	    }
	}
	cout << "0";
	return 0;
}
 
