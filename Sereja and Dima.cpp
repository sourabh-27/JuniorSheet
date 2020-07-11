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
    ll n;
    cin >> n;
    long long arr[n + 1];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    ll ser = 0, dim = 0;
    ll flag = 0;
    while(i <= j){
        if(arr[i] >= arr[j]){
            if(flag == 0){
                ser = ser + arr[i];
                flag = 1;
            }
            else if(flag == 1){
                dim = dim + arr[i];
                flag = 0;
            }
            i++;
        }
        else{
            if(flag == 0){
                ser = ser + arr[j];
                flag = 1;
            }
            else if(flag == 1){
                dim = dim + arr[j];
                flag = 0;
            }
            j--;
        }
    }
    cout << ser << " " << dim << endl;


    return 0;
}