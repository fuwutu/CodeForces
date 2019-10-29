    #include <bits/stdc++.h>
    #define ll long long
     
    using namespace std;
     
    int main(void)
    {
    	ll int n, k;
    	ll int id;
    	cin>>n>>k;
    	set<ll int> s;
    	queue<ll int> q;
     
    	for(ll int i=0; i<n; i++)
    	{
    		cin>>id;
    		if(!s.count(id)){
    			if(q.size()>=k)
    			{
    				ll int cur = q.front();
    				q.pop();
    				s.erase(cur);
    			}
    			s.insert(id);
    			q.push(id);
    		}
    	}
     
    	vector<ll int> res;
    	while(!q.empty())
    	{
    		res.push_back(q.front());
    		q.pop();
    	}
     
    	reverse(res.begin(), res.end());
    	cout<<res.size()<<"\n";
    	for(auto it: res) cout<<it<<" ";
     
    	cout<<"\n";
     
     
     
    	return 0;
    }
