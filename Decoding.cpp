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
    string str;
    cin >> str;
    deque<char> deq;
    ll flag = 0;
    if(n % 2 == 0){
        flag = 1;
    }
    for(ll i = 0; i < n ; i++){
        if(flag == 0){
            if(i % 2 == 0){
                // cout << "str[i]: " << str[i] << endl;
                deq.push_back(str[i]);
            }
            else{
                deq.push_front(str[i]);
            }
        }
        else{
            if(i % 2 == 0){
                deq.push_front(str[i]);
            }
            else{
                deq.push_back(str[i]);
            }
        }
    }

    while(!deq.empty()){
        char front = deq.front();
        deq.pop_front();
        cout << front;
    }
    cout << endl;


    return 0;
}