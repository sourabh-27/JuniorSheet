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

void printAns(double X, double Y){
    cout << fixed << setprecision(3) << X << " " << Y << endl;
}

int main()
{
    fast;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
        if(x1 == x3 && y1 == y3){
            printAns(x2 + x4 - x1, y2 + y4- y1);
        }
        else if(x2 == x4 && y2 == y4){
            printAns(x1 + x3 - x2, y1 + y3 - y2);
        }
        else if(x1 == x4 && y1 == y4){
            printAns(x2 + x3 - x1, y2 + y3 - y1);
        }
        else{
            printAns(x1 + x4 - x2, y1 + y4 - y2);
        }
    }


    return 0;
}