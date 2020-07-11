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

ll space(ll num){
    string str = to_string(num);
    return 10 - str.length();
}

int main()
{
    fast;
    ll step, modi;
    while(cin >> step >> modi){
        ll sp1 = space(step); ll sp2 = space(modi);
        // cout << "sp1: " << sp1 << " sp2: " << sp2 << endl;
        for(ll i = 0; i < sp1; i++){
            cout << " ";
        }
        cout << step;
        for(ll i = 0; i < sp2; i++){
            cout << " ";
        }
        cout << modi;
        if(__gcd(step, modi) == 1){
            cout << "    Good Choice" << endl << endl;
        }
        else{
            cout << "    Bad Choice" << endl << endl;
        }
    }


    return 0;
}