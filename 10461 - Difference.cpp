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

vector<ll> graph[1001];
stack<ll> st;

void dfs(ll sV, bool * visited){
    visited[sV] = true;
    for(ll i = 0; i < graph[sV].size(); i++){
        if(!visited[graph[sV][i]]){
            dfs(graph[sV][i], visited);
        }
    }
    st.push(sV);
}

int main()
{
    fast;
    ll v, e;
    cin >> v >> e;
    long long * arr = new long long [v + 2];
    for(ll i = 1; i <= v; i++){
        cin >> arr[i];
    }

    for(ll i = 0; i < e; i++){
        ll x, y; cin >> x >> y;
        graph[y].push_back(x);
    }

    bool * visited = new bool[v + 2];
    memset(visited, false, sizeof(visited));

    ll q;
    cin >> q;
    while(q--){
        ll sV;
        cin >> sV;
        // if(!visited[1]){
        //     // st.push(i);
        dfs(sV, visited);
        // }
        // for(ll i = 1; i <= v; i++){
        // }

        // cout << "YO" << endl;
        ll valDfs = 0;
        while(!st.empty()){
            ll front = st.top();
            cout << "front: " << front << endl;
            st.pop();
            valDfs += arr[front];
        }
        valDfs -= arr[sV];
        ll normalNeighbours = 0;
        for(ll i = 0; i < graph[sV].size(); i++){
            normalNeighbours += arr[graph[sV][i]];
        }
        cout << "valDfs: " << valDfs << " nomalNeighbours: " << normalNeighbours << endl;
    }


    return 0;
}