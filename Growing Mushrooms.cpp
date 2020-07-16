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

long double decreasePercent(ll num, ll percent){
    long double check = (percent /(long double) 100) * num;
    long double ans = num - check;
    return ans;
}

bool comp(pair<ll, long double> &a, pair<ll, long double> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    fast;
    ll n, t1, t2, k;
    cin >> n >> t1 >> t2 >> k;
    vector<pair<ll, long double>> vec;
    for(ll i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        long double possibility1 = decreasePercent(a * t1, k) + (b * t2);
        long double possibility2 = decreasePercent(b * t1, k) + (a * t2);
        long double maxi = max(possibility1, possibility2);
        vec.pb({i + 1, maxi});
    }

    sort(vec.begin(), vec.end(), comp);
    for(ll i = 0; i < vec.size(); i++){
        cout << vec[i].first << " " << fixed << setprecision(2) << vec[i].second << endl;
    }

    return 0;
}