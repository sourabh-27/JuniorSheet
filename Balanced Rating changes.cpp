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
    long long arr[n + 2];
    ll flag = 0;
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            arr[i] = arr[i] / 2;
        }
        else if(flag == 0){
            flag = 1;
            arr[i] = floor((long double)arr[i] / 2);
        }
        else{
            flag = 0;
            arr[i] = ceil((long double)arr[i] / 2);
        }
    }

    for(ll i =0 ; i < n; i++){
        cout << arr[i] << endl;
    }


    return 0;
}