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

ll n;
char graph[102][102]; char word[104];
int x[5] = {-1, 1, 0, 0}, y[5] = {0, 0, 1, -1};

void dfs(ll i, ll j){
    if(i >= n || i < 0 || j >= n || j < 0 || graph[i][j] == '.'){
        return;
    }
    graph[i][j] = '.';
    for(ll idx = 0; idx < 4; idx++){
        dfs(i + x[idx], j + y[idx]);
    }
}

int main()
{
    fast;
    ll t;
    cin >> t;
    for(ll x = 1; x <= t; x++){
        cin >> n;
        for(ll i = 0; i < n; i++){
            gets(word);
            strcpy(graph[i], word);
        }
        
        ll count = 0;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if(graph[i][j] == 'x'){
                    count++;
                    dfs(i, j);
                }
            }
        }
        cout << "Case " << x << ": " << count << endl;
    }


    return 0;
}