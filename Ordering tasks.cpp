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

void dfs(vector<ll> graph[], ll sV, bool * &visited, stack<ll> &st){
    // cout << "I am visiting sV: " << sV << endl;
    for(ll i = 0; i < graph[sV].size(); i++){
        if(!visited[graph[sV][i]]){
            visited[graph[sV][i]] = true;
            dfs(graph, graph[sV][i], visited, st);
            // cout << "pushed in : " << graph[sV][i] << endl;
            st.push(graph[sV][i]);
        }
    }
    return;
}

int main()
{
    fast;
    while(true){
        ll m, n;
        cin >> n >> m;
        if(m == 0 && n == 0){
            return 0;
        }
        vector<ll> graph[n + 2];
        for(ll i = 0; i < m; i++){
            ll a, b;
            cin >> a >> b;
            graph[a].push_back(b);
        }
        stack<ll> st;
        bool * visited = new bool[n + 2];

        for(ll i = 1; i <= n; i++){
            // cout << "i: " << i << endl;
            if(!visited[i]){
                // cout << "caliing dfs for vertex i: " << i << endl;
                visited[i] = true;
                dfs(graph, i, visited, st);
                // cout << "pushed i: " << i << endl;
                st.push(i);
            }
        }

        // cout << "st.size(): " << st.size() << endl;
        while(!st.empty()){
            ll front = st.top();
            st.pop();
            cout << front << " ";
        }
        cout << endl;
        // cout << "Completed" << endl;
    }


    return 0;
}