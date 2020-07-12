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

string removeTrailingZeroes(string str){
    ll len = str.length();
    string ans = ""; ll flag = 0;
    for(ll i = len - 1; i >= 0; i--){
        if(str[i] != '0'){
            flag = 1;
        }
        if(flag == 1){
            ans = ans + str[i];
        }
    }
    reverse(all(ans));
    return ans;
}

string addString(string str1, string str2){
    ll i = str1.length() - 1, j = str2.length() - 1;
    string ans = ""; ll carry = 0;
    while(i >= 0 && j >= 0){
        ll add = str1[i] - 48 + str2[j] - 48 + carry;
        carry = add / 10;
        // cout << "add: " << add << " carry: " << carry << endl;
        add = add % 10;
        char ch = add + 48;
        // cout << "i: " << i << " j: " << j << " ch: " << ch << endl;
        ans += ch;
        i--; j--;
    }
    // cout << "ans1: " << ans << endl;
    while(i >= 0){
        ll add = str1[i] - 48 + carry;
        ll carry = add / 10;
        add = add % 10;
        ans += (char)(add + 48);
        i--;
    }
    while(j >= 0){
        ll add = str2[j] - 48 + carry;
        ll carry = add / 10;
        add = add % 10;
        ans += (char)(add + 48);
        j--;
    }
    if(carry != 0){
        ans += to_string(carry);
    }
    reverse(all(ans));
    return ans;
}

int main()
{
    fast;
    ll n;
    cin >> n;
    while(n--){
        string str1, str2;
        cin >> str1 >> str2;
        str1 = removeTrailingZeroes(str1); str2 = removeTrailingZeroes(str2);
        reverse(all(str1)); reverse(all(str2));
        // cout << "str1: " << str1 << " str2: " << str2 << endl;
        string ans = "";
        if(str1.length() >= str2.length()){
            ans = addString(str1, str2);
        }
        else{
            ans = addString(str2, str1);
        }
        // cout << "ans: " << ans << endl;
        ans = removeTrailingZeroes(ans);
        reverse(all(ans));
        cout << ans << endl;
    }


    return 0;
}