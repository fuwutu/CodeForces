#include <bits/stdc++.h>

using namespace std;

int main()
{
	while()
    {
        int n;
        cin>>n;
        std::vector<int> a(n), b(n), c(n), ans;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
        }
        ans.push_back(a[0]);

        for(int i=1; i<n; i++)
        {
            if(i == (n-1))
            {
                if(ans[ans.size()-1] != a[i] && a[i] != ans[0])
                    ans.push_back(a[i]);
                else if(ans[ans.size()-1] != b[i] && b[i] != ans[0])
                    ans.push_back(b[i]);
                else if(ans[ans.size()-1] != c[i] && c[i] != ans[0])
                    ans.push_back(c[i]);
            }
            else if(ans[ans.size()-1] != a[i])
                ans.push_back(a[i]);
            
            else if(ans[ans.size()-1] != b[i])
                ans.push_back(b[i]);
            
            else if(ans[ans.size()-1] != c[i])
                ans.push_back(c[i]);
        }
        for(auto i : ans)
            cout<<i<<" ";
        cout<<endl;
    }
	return 0;
}