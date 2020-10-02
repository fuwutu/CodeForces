/* 
*Problem Name (C. Building Permutation)
*Problem Statement :-
You have a sequence of integers a1, a2, ..., an. In one move, you are allowed to decrease or increase any number by one. 
Count the minimum number of moves, needed to build a permutation from this sequence.
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

        ll n;cin>>n; // ll is long long data type as defined above
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr,arr+n); //first we sort the array
        ll diff =0, sum =0;

        for(ll i=0; i<n; i++){

            if(arr[i] != i+1){ //now we check if the current element has value equal to (i+1) If no we proceed further

                diff = abs(arr[i] - (i+1)); // Now we check the absolute difference between the current element value
                                            // and (i+1) ... (i+1) denotes that there should have been (i+1) instead of arr[i].

                sum += diff;               // And we add the difference in a variable sum
            }
        }

        cout<<sum<<"\n";


     return 0;
}