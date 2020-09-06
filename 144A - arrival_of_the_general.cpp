#include <iostream>
#include<cmath>
using namespace std;

int main() {
int n;
int maxvalue=0;
int minvalue=1000;
int maxindex=0;
int minindex=0;
cin>>n;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
if(x>maxvalue){
	maxindex=i;
	maxvalue=x;
}
 if(x<=minvalue){
	minindex=i;
	minvalue=x;
 }
}
if(maxindex>minindex){
	cout<<(maxindex+(n-1)-minindex)-1;
}
else{
	cout<<(maxindex+(n-1)-minindex);

}

	return 0;
}