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

void findAns(unordered_map<char, ll> &umap, string s){
    char a = s[0];
    char b = s[2];
    if(s[1] == '>'){
        umap[a]++;
        umap[b]--;
    }
    else{
        umap[b]++;
        umap[a]--;
    }
}

int main()
{
    fast;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    unordered_map<char, ll> umap;
    findAns(umap, s1);
    findAns(umap, s2);
    findAns(umap, s3);
    // for(auto x: umap){
    //     cout << "first: " << x.first <<  " second: " << x.second << endl;
    // }
    map<ll, char> um;
    for(auto x: umap){
        um[x.second] = x.first;
    }
    if(um.size() < 3){
        cout << "Impossible" << endl;
    }
    else{
        for(auto x: um){
            cout << x.second;
        }
        cout << endl;
    }

    return 0;
}