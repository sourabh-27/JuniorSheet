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

ll m, n;
char c;
char arr[21][21]; 
bool visited[21][21];
ll x, y;
ll sum;
int X[5] = {0, 0, 1, -1}, Y[5] = {1, -1, 0, 0};

void findContienent(ll x, ll y){
    if(y < 0) y = n - 1;
    if(y >= n) y = 0;
    if(x < 0 || x >= m) return;
    if(visited[x][y] || arr[x][y] != c) return;
    visited[x][y] = true;
    sum++;
    for(int i = 0; i < 4; i++){
        findContienent(x + X[i], y + Y[i]);
    }
}

int main()
{
    fast;
    while(cin >> m >> n){
        memset(visited, 0, sizeof(visited));
        for(ll i = 0; i < m; i++){
            char string[21];
            cin >> string;
            strcpy(arr[i], string);
        }
        cin >> x >> y;
        c = arr[x][y];
        findContienent(x, y);

        ll ans = 0;
        for(ll i = 0; i < m; i++){
            for(ll j = 0; j < n; j++){
                sum = 0;
                findContienent(i, j);
                if(sum > ans){
                    ans = sum;
                }
            }
        }
        cout << ans << endl;
    }


    return 0;
}