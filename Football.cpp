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
    unordered_map<string, ll> umap;
    for(ll i = 0; i < n; i++){
        string str;
        cin >> str;
        umap[str]++;
    }
    string str = ""; ll maxi = INT_MIN;
    for(auto x: umap){
        if(x.second > maxi){
            str = x.first;
            maxi = x.second;
        }
    }
    cout << str << endl;


    return 0;
}