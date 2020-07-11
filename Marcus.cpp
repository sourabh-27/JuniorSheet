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
char word[100], graph[100][100];
string path[4] = {"left", "forth", "right"};
char toFind[7] = {'I', 'E', 'H', 'O', 'V', 'A', '#'};
int x[4] = {-1, 0, 1}, y[4] = {0, -1, 0};

void printPath(ll startRow, ll startCol, ll curr){
    if(graph[startRow][startCol] == '#'){
        cout << endl;
        return;
    }
    for(ll i = 0; i < 3; i++){
        if(startCol + x[i] < n && startCol + x[i] >= 0 && startRow + y[i] >= 0){
            if(graph[startRow + y[i]][startCol + x[i]] == toFind[curr]){
                cout << path[i];
                if(curr < 6) cout << " ";
                printPath(startRow + y[i], startCol + x[i], curr + 1);
            }
        }
    }
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while(t--){
        cin >> m >> n;
        for(ll i = 0; i < m; i++){
            gets(word);
            strcpy(graph[i], word);
        }
        ll startRow, startCol;

        for(ll i = 0; i < m; i++){
            for(ll j = 0; j < n; j++){
                if(graph[i][j] == '@'){
                    startRow = i; startCol = j;
                    break;
                }
            }
        }

        printPath(startRow, startCol, 0);



    }


    return 0;
}