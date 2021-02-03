//4021768   Jul 4, 2013 7:57:17 PM	fuwutu	 266B - Queue at the School	 GNU C++0x	Accepted	15 ms	0 KB
#include <iostream>
#include <string>
using namespace std;

string swap_action(string str){
    for(int i = 1; i<str.length(); i++){
            if(str.at(i-1) == 'B' && str.at(i) == 'G'){
                str.at(i) = 'B';
                str.at(i-1) = 'G';
                i++;
            }
        }
    return str;
}

int main(){

    int student, t;
    string s;

    cin >> student >> t;
    cin.ignore();

    getline(cin, s);

    for(; t > 0; t--){
        s = swap_action(s);
    }

    cout << s << endl;

    return 0;
}
