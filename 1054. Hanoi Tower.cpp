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

ll check;
ll findAns(long long * arr, ll n, ll from, ll to, ll aux){
    if(n == 0) return 0;
    // cout << "from: " << from << " to: " << to << " aux: " << aux << endl;
    if(arr[n - 1] == from){
        return findAns(arr, n - 1, from, aux, to);
    }
    else if(arr[n - 1] == to){
        return (powl(2, (n - 1)) + findAns(arr, n - 1, aux, to, from));
    }
    else{
        check = -1;
        return 0;
    }
}

int main()
{
    fast;
    ll n;
    cin >> n;
    check = 0;
    long long * arr = new long long[n + 1];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll ans = findAns(arr, n, 1, 2, 3);

    if(check == -1){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }


    return 0;
}