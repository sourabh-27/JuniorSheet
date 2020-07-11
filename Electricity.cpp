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

struct date{
    int d, m, y, consume;
};

bool isLeapYear(int year){
    if(year % 400 == 0){
        return true;
    }
    else if(year % 100 == 0){
        return false;
    }
    else if(year % 4 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    fast;
    while(true){
        ll n;
        cin >> n;
        int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if(n == 0){break;}
        date arr[n + 1];
        for(ll i = 0; i < n; i++){
            cin >> arr[i].d >> arr[i].m >> arr[i].y >> arr[i].consume;
        }
        ll count = 0;
        ll ans = 0;
        for(ll i = 1; i < n; i++){
            if((arr[i].y == arr[i - 1].y + 1) && (arr[i - 1].m == 12 && arr[i].m == 1) && (arr[i - 1].d == 31 && arr[i].d == 1)){
                count++;
                ans = ans + (arr[i].consume - arr[i - 1].consume);
            }
            else if((arr[i].y == arr[i - 1].y) && isLeapYear(arr[i].y)){
                if(arr[i - 1].m == 2 && arr[i].m == 3 && arr[i - 1].d == 29 && arr[i].d == 1){
                    count++;
                    ans = ans + (arr[i].consume - arr[i - 1].consume);
                }
                else if((arr[i].m == arr[i - 1].m + 1) && (arr[i - 1].d == days[arr[i - 1].m - 1] && arr[i].d == 1)){
                    if(arr[i - 1].m != 2){
                        count++;
                        ans = ans + (arr[i].consume - arr[i - 1].consume);
                    }
                }
                else if((arr[i].m == arr[i - 1].m) && (arr[i].d == arr[i - 1].d + 1)){
                    count++;
                    ans = ans + (arr[i].consume - arr[i - 1].consume);
                }
            }
            else if(arr[i].y == arr[i - 1].y){
                if((arr[i].m == arr[i - 1].m + 1) && (arr[i - 1].d == days[arr[i - 1].m - 1] && arr[i].d == 1)){
                    count++;
                    ans = ans + (arr[i].consume - arr[i - 1].consume);
                }
                else if((arr[i].m == arr[i - 1].m) && (arr[i].d == arr[i - 1].d + 1)){
                    count++;
                    ans = ans + (arr[i].consume - arr[i - 1].consume);
                }
            }

        }
        cout << count << " " << ans << endl;
        
    }


    return 0;
}