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

int fx[]={1, -1, 1, -1, 2, 2, -2, -2};
int fy[]={2, 2, -2, -2, 1, -1, 1, -1};
bool visited[10][10];
int cost[10][10];
string str1, str2;

void bfs(ll x, ll y, ll a, ll b){
    queue<pair<ll, ll>> que;
    memset(visited, 0, sizeof(visited));
    que.push({x, y});
    visited[x][y] = true;
    cost[x][y] = 0;
    while(!que.empty()){
        pair<ll, ll> p = que.front();
        que.pop();
        if(p.first == a && p.second == b){
            cout<<"To get from "<<str1<<" to "<<str2<<" takes "<<cost[p.first][p.second]<<" knight moves." << endl;
            return;
        }

        for(int i = 0; i < 8; i++){
            int moveHorizontal = p.first + fx[i];
            int moveVertical = p.second + fy[i];
            if(moveHorizontal > 0 && moveHorizontal <= 8 && moveVertical > 0 && moveVertical <= 8 && !visited[moveHorizontal][moveVertical]){
                visited[moveHorizontal][moveVertical] = true;
                cost[moveHorizontal][moveVertical] = 1 + cost[p.first][p.second];
                que.push({moveHorizontal, moveVertical});
            }
        }

    }
}

int main()
{
    fast;
    while(cin >> str1 >> str2){
        ll from = str1[0] - 96; ll to = str2[0] - 96;
        ll from1 = str1[1] - '0'; ll to1 = str2[1] - '0';
        bfs(from, from1, to, to1);
    }


    return 0;
}