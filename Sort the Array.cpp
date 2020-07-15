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

bool isSorted(long long * arr, ll n, ll left, ll right, long long * arr2){
    ll val = right;
    for(ll i = 0; i < n; i++){
        if(i >= left && i <= right){
            if(arr[i] != arr2[val]){
                return false;
            }
            val--;
        }
        else{
            if(arr[i] != arr2[i]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    fast;
    ll n;
    cin >> n;
    long long arr[n + 1], arr2[n + 1];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
        arr2[i] = arr[i];
    }

    sort(arr2, arr2 + n);
    ll left = -1; ll right = -1;
    for(ll i = 0; i < n; i++){
        if(arr[i] != arr2[i]){
            if(left == -1){
                left = i;
            }
            right = i;
        }
    }
    if(left == -1 && right == -1){
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    bool ans = isSorted(arr, n, left, right, arr2);
    if(ans){
        cout << "yes" << endl;
        cout << left+1 << " " << right+1 << endl;
    }
    else{
        cout << "no" << endl;
    }



    return 0;
}