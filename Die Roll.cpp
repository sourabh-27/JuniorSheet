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
int main()
{
    fast;
    ll y, w;
    cin >> y >> w;
    ll ans = 6 - max(y, w) + 1;
    if(ans == 0){
        cout << "0/1" << endl;
    }else if(ans == 6){
        cout << "1/1" << endl;
    }
    else{
        if(ans % 2 == 0){
            cout << ans / 2 << "/" << 3 << endl;
        }
        else if(ans % 3 == 0){
            cout << ans / 3 << "/" << 2 << endl;
        }
        else{
            cout << ans << "/" << 6 << endl;
        }
    }


    return 0;
}