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

char arr[6][6];

int charAt(int i, int j){
    if(arr[i][j] == '#'){
        return 1;
    }
    return 0;
}

int main()
{
    fast;
    for(int i = 0; i < 4; i++){
        char str[5]; cin >> str;
        strcpy(arr[i], str);   
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(charAt(i, j) + charAt(i + 1, j) + charAt(i, j + 1) + charAt(i + 1, j + 1) != 2){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;

    return 0;
}