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

bool isSubsequence(string str2, string str){
    //check if str2 is subsequence of str
    if(str2.length() == 0){
        return true;
    }
    if(str.length() == 0){
        return false;
    }
    if(str2[0] == str[0]){
        return isSubsequence(str2.substr(1), str.substr(1));
    }
    return isSubsequence(str2, str.substr(1));
}
int main()
{
    fast;
    string str, str2;
    cin >> str >> str2;
    unordered_map<char, ll> umap, umap2;
    ll len1 = str.length(); ll len2 = str2.length();
    for(ll i = 0; i < len1; i++){
        umap[str[i]]++;
    }
    for(ll i = 0; i < len2; i++){
        umap[str2[i]]--;
    }
    if(len1 == len2){
        for(auto x: umap){
            if(x.second != 0){
                cout << "need tree" << endl;
                return 0;
            }
        }
        cout << "array" << endl;
    }   
    else{
        if(str.find(str2) != -1){
            cout << "automaton" << endl;
        }
        else{
            for(auto x: umap){
                if(x.second < 0){
                    cout << "need tree" << endl;
                    return 0;
                }
            }
            if(isSubsequence(str2, str)){
                cout << "automaton" << endl;
            }
            else{
                cout << "both" << endl;
            }
        }
    }


    return 0;
}