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

long double distance(ll i, ll j, ll ii, ll jj){
    return sqrtf((i - ii) * (i - ii) + (j - jj) * (j - jj));
}
int main()
{
    fast;
    ll n, m, x;
    cin >> n >> m >> x;
    char arr[31][31];
    unordered_map<char, bool> umap, normal;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> arr[i][j];
            normal[arr[i][j]] = true;
        }
    }

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(arr[i][j] == 'S'){
                // cout << "YO" << endl;
                for(ll ii = 0; ii < n; ii++){
                    for(ll jj = 0; jj < m; jj++){
                        if(distance(i, j, ii, jj) <= x){
                            // cout << "char: " << arr[ii][jj] << endl;
                            umap[arr[ii][jj]] = true;
                        }
                        // cout << "ii: " << ii << " jj: " << jj << endl;
                    }
                }
            }
        }
    }

    ll q; cin >> q;
    string str; cin >> str;
    ll count = 0;
    for(ll i = 0; i < q; i++){
        // cout << "str[i]: " << str[i] << " normal: " << normal[str[i]] << " umap: " << umap[tolower(str[i])] << endl;
        if(normal.find(str[i]) != normal.end() && str[i] >= 'a' && str[i] <= 'z'){
            continue;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z' && umap[tolower(str[i])] != 0){
            continue;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z' && normal[tolower(str[i])] != 0){
            count += 1;
        }
        else{
            cout << -1 << endl;
            return 0;
        }
    }
    if(umap['S'] == 0 && count > 0){
        cout << -1 << endl;
        return 0;
    }
    cout << count << endl;

    return 0;
}