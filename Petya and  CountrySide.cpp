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
    ll n;
    cin >> n;
    long long arr[n + 1];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll maxi = 1;
    for(ll i = 0; i < n; i++){
        ll curr = 1; ll last = arr[i];
        for(ll j = i - 1; j >= 0; j--){
            if(arr[j] <= last){
                curr++;
                last = arr[j];
                continue;
            }
            else{
                break;
            }
        }
        last = arr[i];
        for(ll j = i + 1; j < n; j++){
            if(arr[j] <= last){
                curr++;
                last = arr[j];
                continue;
            }
            else{
                break;
            }
        }
        maxi = max(maxi, curr);
    }

    cout << maxi << endl;


    return 0;
}