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
    ll n; cin >> n;
    vector<ll> arr;
    for(ll i = 0; i < n; i++){
        ll k; cin >> k;
        arr.push_back(k);
    }

    sort(all(arr));
    auto x = unique(all(arr));
    arr.resize(distance(arr.begin(), x));

    ll diff = arr[1] - arr[0];
    // cout << "diff: " << diff << endl;
    ll flag = 0;
    for(ll i = 1; i < arr.size(); i++){
        if(arr[i] - arr[i - 1] != diff){
            flag = 1;
            break;
        }
    }
    if(flag == 1 || arr.size() > 3){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }


    return 0;
}