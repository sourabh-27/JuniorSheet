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
    string str;
    cin >> str;
    if(str.length() < 26){
        cout << -1 << endl;
        return 0;
    }

    ll i = 0; 
    while(i <= str.length() - 26){
        int arr[27] = {0};
        ll count = 0; ll flag = 0;
        for(ll j = i; j < i + 26; j++){
            if(str[j] == '?'){
                count++;
            }
            else{
                arr[str[j] - 'A']++;
                if(arr[str[j] - 'A'] > 1){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0){
            for(ll j = 0; j < i; j++){
                if(str[j] == '?'){
                    cout << 'A';
                }
                else{
                    cout << str[j];
                }
            }
            ll k = 0;
            for(ll j = i; j < i + 26; j++){
                if(str[j] == '?'){
                    for(ll x = k; k < 26; x++){
                        if(arr[x] == 0){
                            cout << (char)(x + 'A');
                            k = x + 1;
                            break;
                        }
                    }
                }
                else{
                    cout << str[j];
                }
            }
            for(ll j = i + 26; j < str.length(); j++){
                if(str[j] == '?'){
                    cout << 'A';
                }
                else{
                    cout << str[j];
                }
            }
            cout << endl;
            return 0;
        }
        i++;
    }

    cout << -1 << endl;


    return 0;
}