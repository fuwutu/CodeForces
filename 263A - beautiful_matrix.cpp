#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y,i,j,a[6][6],ans;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(a[i][j]==1){
                x=i+1;
                y=j+1;
            }
        }
    }
    ans=abs(x-3)+abs(y-3);
    printf("%d\n",ans);
    return 0;
}