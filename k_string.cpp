#include <iostream>
#include <algorithm>
using namespace std;
//don't copy it directly, even if you don't understand it try to solve this one by taking a example and solve it in your copy
int main() {
	int k,count=0;
	char ch;
	cin>>k;
	string s;
	cin>>s;
	int l=s.length();
	sort(s.begin(),s.end());
	for(int i=0;i<s.length();i++){
	    if(i%k==0){
	       ch=s[i]; 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}
	if(l==count && count%k==0){
	    for(int i=0;i<k;i++){
	        for(int l=0;l<s.length();l+=k){
	            cout<<s[l];
	        }
	    }
	}else{
	    cout<<"-1";
	}

	return 0;
}