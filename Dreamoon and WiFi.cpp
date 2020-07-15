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

ll fact(ll num){
    if(num == 0){
        return 1;
    }
    return num * fact(num - 1);
}

ll C(ll n, ll r){
    return (fact(n)/(fact(r) * fact(n - r)));
}

int main()
{
    fast;
    string str1, str2;
    cin >> str1 >> str2;
    ll destination = 0;
    for(ll i = 0; i < str1.length(); i++){
        if(str1[i] == '+'){
            destination++;
        }
        else{
            destination--;
        }
    }

    ll ourPosition = 0; ll guess = 0;
    for(ll i = 0; i < str2.length(); i++){
        if(str2[i] == '+'){
            ourPosition++;
        }
        else if(str2[i] == '-'){
            ourPosition--;
        }
        else if(str2[i] == '?'){
            guess++;
        }
    }
    // cout << "ourPostiion: " << ourPosition << "  destination: " << destination << endl;
    long double ans = 0;
    if(ourPosition == destination){
        if(guess % 2 == 0){
            ll num = fact(guess) / (fact(guess / 2) * fact(guess / 2));
            ll den = powl(2, guess);
            ans = num / (long double)(den);
        }
        cout << fixed << setprecision(12) << ans << endl;
    }
    else if(destination > ourPosition){
        ll diff = destination - ourPosition;
        ll makeZero = guess - diff;
        if(makeZero >= 0 && makeZero % 2 == 0){
            ll plus = diff + makeZero / 2; ll minus = makeZero / 2;
            ll num = fact(plus + minus) / (fact(plus) * fact(minus)); 
            ll den = powl(2, guess);
            ans = num / (long double)(den);
        }
        cout << fixed << setprecision(12) << ans << endl;
    }
    else if(ourPosition > destination){
        ll diff = ourPosition - destination;
        ll makeZero = guess - diff;
        if(makeZero >= 0 && makeZero % 2 == 0){
            ll minus = diff + makeZero / 2; ll plus = makeZero / 2;
            ll num = fact(plus + minus) / (fact(plus) * fact(minus)); 
            ll den = powl(2, guess);
            ans = num / (long double)(den);
        }
        cout << fixed << setprecision(12) << ans << endl;
    }


    return 0;
}