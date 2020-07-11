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
    int arr[6][6];
    int ans;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                ans = abs(3 - j) + abs(3 - i);
            }
        }
    }
    cout << ans << endl;


    return 0;
}