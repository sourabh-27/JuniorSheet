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

// ll findAns(vector<pair<ll, ll>> vec, ll curr, ll n, long long ** dp, ll whatWillYouDo){
//     if(curr >= n){
//         return 0;
//     }
//     ll ans1 = 0, ans2 = 0, ans3 = 0;
//     ll leftSpace = vec[curr].first - vec[curr - 1].first;
//     ll rightSpace = vec[curr + 1].first - vec[curr].first;
//     // cout << "curr: " << curr << " leftSpace: " << leftSpace << " rightSpace: " << rightSpace << endl;
//     //make the tree fall left if possible and calculate ans
//     if(dp[curr][whatWillYouDo] != -1){
//         return dp[curr][whatWillYouDo];
//     }
//     if(leftSpace > vec[curr].second){
//         ans1 = 1 + findAns(vec, curr + 1, n, dp, 1);
//     }
//     //make the tree fall right if possible and calculate ans
//     if(rightSpace > vec[curr].second){
//         ans2 = 1 + findAns(vec, curr + 1, n, dp, 2);
//     }
//     //leave the tree as it as and calculate ans
//     ans3 = findAns(vec, curr + 1, n, dp, 0);
//     dp[curr][whatWillYouDo] = max(ans1, max(ans2, ans3));
//     return dp[curr][whatWillYouDo];
// }

int main()
{
    fast;
    ll n; cin >> n;
    vector<pair<ll, ll>> vec;
    for(ll i = 1; i <= n; i++){
        ll x, h;
        cin >> x >> h;
        vec.pb({x, h});
    }

    if(n == 1){
        cout << 1 << endl;
        return 0;
    }

    // long long ** dp = new long long*[n + 2];
    // for(ll i = 0; i <= n + 1; i++){
    //     dp[i] = new long long[3];
    //     for(ll j = 0; j < 3; j++){
    //         dp[i][j] = -1;
    //     }
    // }
    // ll ans = -1;
    // for(int i = 0; i < 2; i++){
    //     ans = max(ans, findAns(vec, 1, n - 1, dp, i));
    // }
    
    // cout << ans + 2 << endl;
    ll ans = 2; 
    for(ll i = 1; i < n - 1; i++){
        // cout << "aage se substract: " << vec[i + 1].first - vec[i].first << endl;
        if(vec[i].first - vec[i - 1].first > vec[i].second){
            // cout << "i: " << i << " falling left " << endl;
            ans += 1;
        }
        else if(vec[i + 1].first - vec[i].first > vec[i].second){
            // cout << "i: " << i << " falling right " << endl;
            ans += 1;
            vec[i].first += vec[i].second;
        }
    }

    cout << ans << endl;

    return 0;
}