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

ll lowBinarySearch(ll start, ll end, long long * arr, ll target){
    ll ans = -1;
    while(end - start >= 0){
        ll mid = start + (end - start) / 2;

        if(arr[mid] < target){
            start = mid + 1;
            ans = mid;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

ll highBinarySearch(ll start, ll end, long long * arr, ll target){
    ll ans = -1;
    while(end - start >= 0){
        ll mid = start + (end - start) / 2;
        if(arr[mid] > target){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    fast;
    ll n;
    while(cin >> n){
        long long arr[n + 1];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }

        ll q;
        cin >> q;
        vector<pair<ll, ll>> ans;
        for(ll x = 0; x < q; x++){
            ll y;
            cin >> y;
            ll low = lowBinarySearch(0, n, arr, y);
            ll high = highBinarySearch(0, n, arr, y);
            pair<ll, ll> temp;
            // cout << "low: " << low << " high: " << high << endl;
            if(low == -1 || low < 0 || low >= n){
                temp.first = -1;
            }
            else{
                temp.first = arr[low];
            }
            if(high == -1 || high < 0 || high >= n){
                temp.second = -1;
            }
            else{
                temp.second = arr[high];
            }
            ans.push_back(temp);
        }
        for(ll i = 0; i < ans.size(); i++){
            if(ans[i].first == -1){
                cout << 'X' << " ";
            }
            else{
                cout << ans[i].first << " ";
            }
            if(ans[i].second == -1){
                cout << 'X' << endl;
            }
            else{
                cout << ans[i].second << endl;
            }
        }
    }


    return 0;
}