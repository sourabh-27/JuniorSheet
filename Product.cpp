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

string convertToString(char * str){
    ll len = strlen(str);
    string ans = "";
    for(ll i = 0; i < len; i++){
        ans = ans + str[i];
    }
    return ans;
}

int main()
{
    fast;
    char st1[260], st2[260];
    while(gets(st1)){
        gets(st2);
        string str1 = convertToString(st1);
        string str2 = convertToString(st2);
        vector<ll> vec[300];
        for(ll i = 0; i < 300; i++){
            for(ll j = 0; j < i; j++){
                vec[i].push_back(0);
            }
        }
        ll numberOfZeroes = 0;
        for(ll i = str2.length() - 1; i >= 0; i--){
            ll num1 = str2[i] - 48;
            ll carry = 0;
            for(ll j = str1.length() - 1; j >= 0; j--){
                ll num2 = str1[j] - 48;
                ll prod = num1 * num2;
                // cout << "num1: " << num1 << " num2: " << num2 << endl;
                prod += carry;
                if(prod >= 10){
                    ll lastDigit = prod % 10;
                    carry = prod / 10;
                    vec[str2.length() - i - 1].push_back(lastDigit);
                }
                else{
                    vec[str2.length() - i - 1].push_back(prod);
                    carry = 0;
                }
                // cout << "prod: " << prod << " carry: " << carry << endl;
            }
            if(carry != 0){
                vec[str2.length() - i - 1].push_back(carry);
            }
        }

        for(ll i = 0; i < str2.length(); i++){
            for(ll j = 0; j < vec[i].size(); j++){
                cout << vec[i][j] << " ";
            }
            cout << endl;
        }
        string ans = "";
        ll carry = 0;
        for(ll i = 0; i < vec[str2.length() - 1].size(); i++){
            ll sum = 0;
            for(ll j = 0; j < str2.length(); j++){
                if(i >= vec[j].size()){
                    continue;
                }
                sum = sum + vec[j][i];
            }
            // cout << "i: " << i << " sum: " << sum << endl;
            sum = sum + carry;
            if(sum >= 10){
                ll lastDigit = sum % 10;
                ans = ans + (char)(lastDigit + 48);
                carry = sum / 10;
                // cout << "i: " << i << " ans: " << ans << " carry: " << carry << endl;
            }
            else{
                carry = 0;
                ans = ans + (char)(sum + 48);
                // cout << "i: " << i << " ans: " << ans << endl;
            }
        }
        ans = ans + (char)(carry + 48);
        reverse(all(ans));
        ll flag = 0;
        for(ll i = 0; i < ans.length(); i++){
            if(ans[i] != '0'){
                flag = i;
                break;
            }
        }
        for(ll i = flag; i < ans.length(); i++){
            cout << ans[i];
        }
        cout << endl;
    }


    return 0;
}