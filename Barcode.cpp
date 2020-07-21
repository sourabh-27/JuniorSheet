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

ll findAns(long long * black, long long * white, ll n, ll x, ll y, ll curr, char c, ll pos, ll sum){
    if(n <= 0){
        // cout << "YAYY!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        cout << "Result: " << sum << " curr: " << curr << endl;
        if(curr < x || curr > y){
            return  INF;
        }
        return 0;
    }
    // cout << "I am at curr: " << curr << endl;
    ll ans1 = INF, ans2 = INF;
    if(curr < x){
        if(c == 'b'){
            // cout << "I am selecting black1 " << black[pos] << " sum: " << sum << endl;
            ans1 = black[pos] + findAns(black, white, n - 1, x, y, curr + 1, 'b', pos + 1, sum+black[pos]);
        }
        else{
            // cout << "I am selecting white1 " << white[pos] << " sum: " << sum << endl;
            ans2 = white[pos] + findAns(black, white, n - 1, x, y, curr + 1, 'w', pos + 1, sum+white[pos]);
        }
    }
    else if(curr >= x && curr < y){
        if(c == 'b'){
            // cout << "I am selecting black2 " << black[pos] << " sum: " << sum << endl;
            ans1 = black[pos] + findAns(black, white, n - 1, x, y, curr + 1, 'b', pos + 1,sum+black[pos]);
            // cout << "I am selecting white2 " << white[pos] << " sum: " << sum << endl;
            ans2 = white[pos] + findAns(black, white, n - 1, x, y, 1, 'w', pos + 1, sum+white[pos]);
        }
        else{
            // cout << "I am selecting black3 " << black[pos] << " sum: " << sum << endl;
            ans1 = black[pos] + findAns(black, white, n - 1, x, y, 1, 'b', pos + 1,sum+black[pos]);
            // cout << "I am selecting white3 " << white[pos] << " sum: " << sum << endl;
            ans2 = white[pos] + findAns(black, white, n - 1, x, y, curr + 1, 'w', pos + 1, sum+white[pos]);
        }
    }
    else if(curr >= y){
        if(c == 'b'){
            // cout << "I am selecting white4 " << white[pos] << " sum: " << sum << endl;
            ans1 = black[pos] + findAns(black, white, n - 1, x, y, 1, 'w', pos + 1,sum+black[pos]);
        }
        else{
            // cout << "I am selecting black4 " << black[pos] << " sum: " << sum << endl;
            ans2 = white[pos] + findAns(black, white, n - 1, x, y, 1, 'b', pos + 1,sum+white[pos]);
        }
    }
    ll last = min(ans1, ans2);
    // cout << "last: " << last << endl;
    return last;
}

int main()
{
    fast;
    ll n, m, x, y;
    cin >> n >> m >> x >> y;

    long long black[m + 3], white[m + 3];
    memset(black, 0, sizeof(black));
    memset(white, 0, sizeof(white));

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            char c; cin >> c;
            if(c == '#'){
                white[j]++;
            }
            else{
                black[j]++;
            }
        }
    }

    for(ll i = 0; i < m; i++){
        cout << black[i] << " ";
    }
    cout << endl;
    for(ll i = 0; i < m; i++){
        cout << white[i] << " ";
    }
    cout << endl;

    ll ans = findAns(black, white, m, x, y, 0, 'b', 0, 0);
    // ll ans2 = findAns(black, white, m, x, y, 0, 'w', 0, 0);
    cout << ans << endl;

    return 0;
}