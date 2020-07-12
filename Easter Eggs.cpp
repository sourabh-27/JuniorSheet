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
    char temp[5] = {'R', 'O', 'Y', 'G'};
    char arr[8] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
    ll n;
    cin >> n;
    ll newN = ((n / 7) * 7 - 7) / 7;
    ll left = n % 7;
    cout << "ROYG";
    ll i = 0;
    while(left--){
        cout << temp[i];
        i++;
        if(i == 4){
            i = 0;
        }
    }
    cout << "BIV";
    for(ll x = 0; x < newN; x++){
        cout << "ROYGBIV";
    }
    cout << endl;


    return 0;
}