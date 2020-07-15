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
    ll pages, cover, start, end;
    cin >> pages >> cover >> start >> end;
    ll diff = end - start;
    if(end > start){
        cout << (diff * 2) * cover + (diff - 1) * pages << endl;
    }
    else if(end == start){
        cout << pages << endl;
    }
    else{
        diff = start - end;
        cout << (diff * 2) * cover + pages * (diff + 1) << endl;
    }

    return 0;
}