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

#define N (ll)1e5 + 10
vector<ll> vec[N];

int main()
{
    fast;
    ll n;
    cin >> n;
    long long arr[n + 1];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(ll i = 0; i < n; i++){
        vec[arr[i]].push_back(i);
    }

    vector<pair<ll, ll>> final;

    for(ll i = 1; i <= N; i++){
        if(vec[i].size() != 0){
            ll flag = 0;
            for(ll j = 1; j < vec[i].size() - 1; j++){
                if(vec[i][j] - vec[i][j - 1] == vec[i][j + 1] - vec[i][j]){
                    continue;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            if(flag == 1){
                continue;
            }
            else{
                if(vec[i].size() == 1){
                    final.pb({i, 0});
                }
                else{
                    final.pb({i, vec[i][1] - vec[i][0]});
                }
            }
        }
    }

    cout << final.size() << endl;
    for(ll i = 0; i < final.size(); i++){
        cout << final[i].first << " " << final[i].second << endl;
    }


    return 0;
}