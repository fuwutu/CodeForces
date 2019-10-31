    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;
     
    short int v[300000];
     
    int main () {
        //freopen("in", "r", stdin);
        int n;
        scanf("%d", &n);
     
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            v[i] = x;
        }
     
        sort (v, v + n);
        for (int i = 0; i < n/2; i++) {
            sum += ((long long) v[i] + v[n - 1 - i]) * (v[i] + v[n - 1 - i]);
        }
     
        printf ("%I64d", sum);
    }
