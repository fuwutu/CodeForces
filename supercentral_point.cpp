#include <iostream>
    using namespace std;
    int main()
    {
        int n , z = 0;
        bool r , l , u , d ;
        r = l = u = d = 0;

        cin >> n;
        int arr[n][2];

        for (int i = 0 ; i < n ; ++i)
            cin >> arr[i][0] >> arr[i][1];

        for (int i = 0 ; i < n ; ++i)
            {
                for (int j = 0 ; j < n ; ++j)
                    {
                        if (i == j)
                            continue ;

                        // right
                        if (arr[j][0] > arr[i][0] && arr[i][1] == arr[j][1])
                            r = 1;

                        // left
                        if (arr[j][0] < arr[i][0] && arr[i][1] == arr[j][1])
                            l = 1;

                        // up
                        if (arr[j][0] == arr[i][0] && arr[i][1] < arr[j][1])
                            u = 1;

                        // down
                        if (arr[j][0] == arr[i][0] && arr[i][1] > arr[j][1])
                            d = 1;
                    }

                if (r == 1 && d==1 && l==1 && u==1)
                    ++z;

                r = l = u = d = 0;
            }

            cout << z << endl;

        return 0 ;

    }
