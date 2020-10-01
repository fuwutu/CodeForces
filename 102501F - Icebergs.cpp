#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define para(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define paraIni(X,S,Y) for (int (X) = S;(X) < (Y);++(X))
#define rpara(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()
#define unicos(X) (X).erase(unique(all(X)),(X).end())
#define NL <<"\n"
#define EPS 1e-6
#define MOD 1000000007
#define iinf 0x3f3f3f3f
#define llinf 0x3f3f3f3f3f3f3f3f
#define ll long long
#define pii pair<int, int>
#define pll pair<long, long>
using namespace std;


bool essentiallyEqual(float a, float b)
{
    return fabs(a - b) <= ( (fabs(a) > fabs(b) ? fabs(b) : fabs(a)) * EPS);
}

struct TVector {
    double x,y;
    // sum vectors
    TVector operator+ (TVector q) const
    {
        return {x+q.x, y+q.y};
    }
    // subtract vectors
    TVector operator- (TVector q) const
    {
        return {x-q.x, y-q.y};
    }
    // multiplication by scalar
    TVector operator* (int t) const
    {
        return {x*t, y*t};
    }
    
    // dot product
    // if 0: 90 or 270º
    // > 0: a<90
    // < 0: a>90
    double operator*(TVector q) const
    {
        return {x*q.x + y*q.y};
    }
    // if 0:  0 or 180º
    // if > 0: counter clockwise
    // else clockwise {

    // cross product
    ll operator^(TVector q) const
    {
        return {x*q.y - q.x*y};
    }

    // lenght of vector
    long double operator~ () const
    {
        // dot operator
        // {*this * *this}
        // or hypotenuse
        return { hypot (x,y)};
    }

    // distance between r and the segment pq
    long double disPointLine(TVector p, TVector q)
    {
        TVector r = *this;
        if ( ((r-p)*(q-p)>=0) && ((r-q)*(p-q) >=0))
        {
            return abs( (q-p)^(r-p)) / ~(p-q);
        }
        else
        {
            return min(~(r-p), ~(r-q) );
        }
    }
    // point on segment pq
    bool onLine( TVector p, TVector q)
    {
        TVector r = *this;
        long double dis = r.disPointLine(p,q);
        return essentiallyEqual(dis,0);
    }

    long double sqrdDist(TVector p)
    {
            return (x - p.x)*(x - p.x) + (y - p.y)*(y - p.y); 
    }
    int orientation(/*Point p,*/ TVector b, TVector c) 
    { 
        TVector a = *this;


        int val =  (c-a)^(b-a);
        return val;
    }
    int orientationV2(/*Point p,*/ TVector b, TVector c) 
    { 
        TVector a = *this;


        int val =  (c-a)^(b-a);   
        if (val == 0) return 0;  // colinear 
        return (val > 0)? 1: 2; // clock or counterclock wise 
    }
    void imprimePonto()
    {
        printf("%lld %lld",x,y );
    }
};

struct comparator
{
    TVector o;
    bool operator()(TVector a, TVector b) const
    {
        int val = (a-o)^(b-o);
        if (val == 0)
            return(a.sqrdDist(o) < b.sqrdDist(o) );
        return ( val  >= 0 );
    }
};

vector <TVector> points;
double polygonArea() 
{ 
    // Initialze area 
    double area = 0.0; 
    int n = points.size();
    // Calculate value of shoelace formula 
    int j = n - 1; 
    for (int i = 0; i < n; i++) 
    { 
        area += (points[j].x + points[i].x) * (points[j].y - points[i].y); 
        j = i;  // j is previous vertex to i 
    } 
  
    // Return absolute value 
    return fabs(area / 2.0); 
} 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    double totalArea=0;
    for (int i = 0; i < n; ++i)
    {
        int p;
        cin >> p;
        points.clear();
        for (int j = 0; j < p; ++j)
        {
            int x,y;
            cin >> x >> y;
            TVector p;
            p.x=x;
            p.y=y;
            points.pb(p);
        }
        totalArea+=polygonArea();
    }
    printf("%lld\n", (ll)(totalArea));
    return 0;
}