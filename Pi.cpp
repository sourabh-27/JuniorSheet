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
    while(cin >> n){
        if(n == 0){
            return 0;
        }
        long long arr[n + 1];
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }

        ll count = 0;
        for(ll i = 0; i < n; i++){
            for(ll j = i + 1; j < n; j++){
                if(__gcd(arr[i], arr[j]) == 1){
                    count++;
                }
            }
        }
        if(count == 0){
            cout << "No estimate for this data set." << endl;
        }
        else{
            long double ans = sqrtf((6 / (long double)(count)) * ((long double)(n /(long double)2) * (long double)(n - 1)));
            cout << fixed << setprecision(6) << ans << endl;
        }
    }


    return 0;
}