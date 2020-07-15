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

bool comp(pair<ll, ll> &a, pair<ll, ll> &b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main()
{
    fast;
    ll n, m, k, t;
    cin >> n >> m >> k >> t;
    vector<pair<ll, ll>> vec;
    for(ll i = 0; i < k; i++){
        ll a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }
    sort(vec.begin(), vec.end(), comp);
    vector<ll> pos[n + 2];
    for(ll i = 0; i < k; i++){
        pos[vec[i].first].push_back(vec[i].second);
    }

    for(ll i = 1; i <= k; i++){
        for(ll j = 0; j < pos[i].size(); j++){
            cout << pos[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}