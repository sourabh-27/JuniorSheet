#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define INF 0x3f3f3f3f
#define all(x) (x).begin(),(x).end()
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define pb push_back
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define mp make_pair
#define print(v); for(auto x:v) cout<<x<<" "; cout<<endl;
typedef long long int ll;
typedef long double ld;

int main()
{
    fast;
    ll t;
    cin >> t;
    ll flag = 0;
    while(t--){
        ll x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        ld a1 = y2 - y1;
        ld b1 = x1 - x2;
        ld c1 = a1 * x1 + b1 * y1;

        ld a2 = y4 - y3;
        ld b2 = x3 - x4;
        ld c2 = a2 * x3 + b2 * y3;

        ld d = a1 * b2 - a2 * b1;
        ld dX = c1*b2 - c2*b1;
        ld dY = a1*c2 - a2*c1;

        if(flag == 0){
            cout << "INTERSECTING LINES OUTPUT" << endl;
            flag = 1;
        }
        if(d == 0 && dX == 0 && dY == 0){
            cout << "LINE" << endl;
        }
        else if(d == 0 && (dX != 0 || dY != 0)){
            cout << "NONE" << endl;
        }
        else{
            ld xC = (b2*c1 - b1*c2)/d;
            ld yC = (a1*c2 - a2*c1)/d; 
            cout << "POINT " << fixed << setprecision(2) << xC << " " << yC << endl;
        }
    }

    cout << "END OF OUTPUT" << endl;


    return 0;
}