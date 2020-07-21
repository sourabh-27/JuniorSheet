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

bool isClose(ll a, ll b, ll x, ll y, ll r){
    long double dist = sqrtf((a - x) * (a - x) + (b - y) * (b - y));
    // cout << "a: " << a << " b: " << b << " x: " << x << " y: " << y << " dist: " << dist << endl;
    if(dist <= r){
        return true;
    }
    return false;
}

int main()
{
    fast;
    ll xA, yA, xB, yB;
    cin >> xA >> yA >> xB >> yB;
    ll maxX = max(xA, xB), maxY = max(yA, yB);
    ll minX = min(xA, xB), minY = min(yA, yB);

    ll n;
    cin >> n;
    vector<pair<ll, pair<ll, ll>>> vec;
    for(ll i = 0; i < n; i++){
        ll x, y, r;
        cin >> x >> y >> r;
        vec.pb({x, {y, r}});
    }

    ll count = 0;
    for(ll i = minX; i <= maxX; i++){
        ll flag = 0;
        for(ll k = 0; k < vec.size(); k++){
            if(isClose(i, minY, vec[k].first, vec[k].second.first, vec[k].second.second)){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            // cout << "i: " << i << " j: " << j << endl;
            count++;
        }
    }

    for(ll i = minX; i <= maxX; i++){
        ll flag = 0;
        for(ll k = 0; k < vec.size(); k++){
            if(isClose(i, maxY, vec[k].first, vec[k].second.first, vec[k].second.second)){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            // cout << "i: " << i << " j: " << j << endl;
            count++;
        }
    }

    for(ll i = minY + 1; i <= maxY - 1; i++){
        ll flag = 0;
        for(ll k = 0; k < vec.size(); k++){
            if(isClose(minX, i, vec[k].first, vec[k].second.first, vec[k].second.second)){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            // cout << "i: " << i << " j: " << j << endl;
            count++;
        }
    }

    for(ll i = minY + 1; i <= maxY - 1; i++){
        ll flag = 0;
        for(ll k = 0; k < vec.size(); k++){
            if(isClose(maxX, i, vec[k].first, vec[k].second.first, vec[k].second.second)){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            // cout << "i: " << i << " j: " << j << endl;
            count++;
        }
    }

    cout << count << endl;


    return 0;
}