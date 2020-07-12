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
    ll elements = 2 * n + 1;
    long long arr[elements + 2];
    for(ll i = 1; i <= elements; i++){
        cin >> arr[i];
    }

    for(ll i = 1; i <= elements; i++){
        if(arr[i] > arr[i - 1] + 1 && arr[i] > arr[i + 1] + 1 && i % 2 == 0 && k > 0){
            k--;
            cout << arr[i] - 1 << " ";
        }
        else{
            cout << arr[i] << " ";
        }
    }
    cout << endl;


    return 0;
}