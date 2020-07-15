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

char arr[101][101];
int x[5] = {-1, 1, 0, 0}, y[5] = {0, 0, 1, -1};
bool isValid(ll i, ll j, ll n, ll m, char c){
    if(i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == '.' || arr[i][j] == c){
        return false;
    }
    return true;
}

int main()
{
    fast;
    ll n, m; char c;
    cin >> n >> m >> c;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    set<char> se;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            if(arr[i][j] == c){
                for(ll k = 0; k < 4; k++){
                    if(isValid(i + x[k], j + y[k], n, m,  c)){
                        se.insert(arr[i + x[k]][j+y[k]]);
                    }
                }
            }
        }
    }
    cout << se.size() << endl;


    return 0;
}