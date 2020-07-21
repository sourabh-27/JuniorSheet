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
    ll n, k;
    cin >> n >> k;
    long long arr[n + 2];
    ll negativeCount = 0, positiveCount = 0, zeroCount = 0;
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] < 0){
            negativeCount++;
        }
        else if(arr[i] > 0){
            positiveCount++;
        }
        else{
            zeroCount++;
        }
    }

    if(k <= negativeCount){
        for(ll i = 0; i < n && k > 0; i++, k--){
            arr[i] = arr[i] * -1;
        }
    }
    else{
        for(ll i = 0; i < n && negativeCount > 0; i++, negativeCount--, k--){
            arr[i] = arr[i] * -1;
        }
    }

    if(k > 0 && k % 2 != 0){
        sort(arr, arr + n);
        arr[0] = arr[0] * -1;
    }

    ll sum = 0;
    for(ll i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    cout << sum << endl;


    return 0;
}