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
    string str, str2;
    cin >> str >> str2;
    ll left = 0; ll right = 0; ll flag = 0;
    string st1 = ""; string st2 = "";
    for(ll i = 0; i < str.length(); i++){
        if(str[i] == ' '){
            continue;
        }
        if(str[i] == '|'){
            flag = 1;
        }
        if(flag == 0){
            left++;
            st1 += str[i];
        }
        else{
            right++;
            st2 += str[i];
        }
    }
    right = right - 1;
    ll diff = abs(right - left);
    st2 = st2.substr(1);
    // cout << "st1: " << st1 << " st2: " << st2 << endl;
    // cout << "st2.length(): " << st2.length() << endl;
    // cout << "diff: " << diff << endl;
    // cout << "str2.length() - diff: " << (str2.length() - diff) << endl;
    if((str2.length() - diff) % 2 != 0 || str2.length() - diff < 0){
        cout << "Impossible" << endl;
    }
    else{
        ll idx = 0;
        if(st1.length() < st2.length()){
            while(st1.length() != st2.length()){
                st1 = st1 + str2[idx];
                idx++;
            }
        }
        else{
            while(st1.length() != st2.length()){
                st2 = st2 + str2[idx];
                idx++;
            }
        }
        for( ; idx < str2.length(); idx++){
            if(idx % 2 == 0){
                st1 += str2[idx];
            }
            else{
                st2 += str2[idx];
            }
        }
        // cout << "st2: " << st2 << endl;
        cout << st1 << "|" << st2 << endl;
    }


    return 0;
}