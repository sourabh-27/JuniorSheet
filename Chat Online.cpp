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

struct littleX{
    ll start, end;
};

struct littleY{
    ll start, end;
};

bool isInRange(littleX * arr, ll p, littleY * arr2, ll q, ll term){
    for(ll i = 0; i < q; i++){
        ll start2 = arr2[i].start + term; 
        ll end2 = arr2[i].end + term;
        for(ll j = 0; j < p; j++){
            ll start1 = arr[j].start; ll end1 = arr[j].end;
            // cout << "start1: " << start1 << " end1: " << end1 << " start2: " << start2 << " end2: " << end2 << endl;
            if((end1 < start2) || (start1 > end2)){
                continue;
            }else{
                return true;
            }
        }
    }
    return false;
}

int main()
{
    fast;
    ll p, q, l, r;
    cin >> p >> q >> l >> r;
    littleX arr[p + 1];
    for(ll i = 0; i < p; i++){
        cin >> arr[i].start >> arr[i].end;
    }

    littleY arr2[q + 1];
    for(ll i = 0; i < q; i++){
        cin >> arr2[i].start >> arr2[i].end;
    }

    ll ans = 0;
    for(ll i = l; i <= r; i++){
        if(isInRange(arr, p, arr2, q, i)){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}