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
    ll upperLimit;
    if(n % 2 == 0){
        upperLimit = n * (n / 2);
    }
    else{
        upperLimit = (n / 2 + 1) * (n / 2 + 1) + (n / 2) * (n / 2);
    }
    if(k > upperLimit){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(i % 2 == 0){
                    if(j % 2 == 0 && k > 0){
                        cout << 'L';
                        k--;
                    }
                    else{
                        cout << 'S';
                    }
                }
                else{
                    if(j % 2 != 0 && k > 0){
                        cout << 'L';
                        k--;
                    }
                    else{
                        cout << 'S';
                    }
                }
            }
            cout << endl;
        }
    }


    return 0;
}