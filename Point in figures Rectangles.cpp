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

struct rect{
    double a, b, c, d;
};

int main()
{
    fast;
    char c;
    rect arr[11];
    ll i = 0;
    while(true){
        cin >> c;
        if(c == '*'){
            break;
        }
        cin >> arr[i].a >> arr[i].b >> arr[i].c >> arr[i].d;
        i++;
    }
    ll j = 1;
    // cout << "YO" << endl;
    double xC, yC;
    while(true){
        cin >> xC >> yC;
        // cout << "xC: " << xC << " yC: " << yC << endl;
        if(xC==9999.9 && yC==9999.9) break;
        ll flag = 0;
        for(ll idx = 0; idx < i; idx++){
            // cout << "a: " << arr[idx].a << " b: " << arr[idx].b << " c: " << arr[idx].c << " d: " << arr[idx].d << endl;
            if(xC > arr[idx].a && xC  < arr[idx].c && yC > arr[idx].d && yC < arr[idx].b){
                flag = 1;
                cout << "Point " << j << " is contained in figure " << idx + 1 << endl;
            }
        }
        if(flag == 0){
            cout << "Point " << j << " is not contained in any figure" << endl;
        }
        // cout << "YO2" << endl;
        j++;
    }


    return 0;
}