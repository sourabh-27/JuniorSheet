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

vector<string> possibilities;
unordered_map<string, bool> umap;
char arr[4][4];
char arr2[4][4];
ll count2 = 0;

void fill(){
    string ans = "";
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 3; j++){
            ans = ans + arr[i][j];
        }
    }
    possibilities.push_back(ans);
    // cout << "ans: " << ans << endl;
    count2++;
    umap[ans] = true;
    return;
}

bool alreadyPresent(){
    string ans = "";
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 3; j++){
            ans = ans + arr[i][j];
        }
    }
    if(umap[ans] == true){
        return true;
    }
    return false;
}

bool winAny(){
    //check equality in rows
    for(ll i = 0; i < 3; i++){
        ll count = 0;
        for(ll j = 0; j < 2; j++){
            if(arr[i][j] == arr[i][j + 1] && arr[i][j] != '.'){
                count++;
            }
        }
        if(count >= 2){
            return true;
        }
    }
    //check equality in column
    for(ll i = 0; i < 3; i++){
        ll count = 0;
        for(ll j = 0; j < 2; j++){
            if(arr[j][i] == arr[j + 1][i] && arr[j][i] != '.'){
                count++;
            }
        }
        if(count >= 2){
            return true;
        }
    }
    //check diagonals
    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != '.'){
        return true;
    }
    if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != '.'){
        return true;
    }
    return false;
}

bool winAny2(){
    //check equality in rows
    for(ll i = 0; i < 3; i++){
        ll count = 0;
        for(ll j = 0; j < 2; j++){
            if(arr2[i][j] == arr2[i][j + 1] && arr2[i][j] != '.'){
                count++;
            }
        }
        if(count >= 2){
            return true;
        }
    }
    //check equality in column
    for(ll i = 0; i < 3; i++){
        ll count = 0;
        for(ll j = 0; j < 2; j++){
            if(arr2[j][i] == arr2[j + 1][i] && arr2[j][i] != '.'){
                count++;
            }
        }
        if(count >= 2){
            return true;
        }
    }
    //check diagonals
    // cout << "YO1" << endl;
    if(arr2[0][0] == arr2[1][1] && arr2[1][1] == arr2[2][2] && arr2[0][0] != '.'){
        return true;
    }
    // cout << "YO2" << endl;
    if(arr2[0][2] == arr2[1][1] && arr2[1][1] == arr2[2][0] && arr2[0][2] != '.'){
        return true;
    }
    return false;
}


void generate(char curr, ll filledNo){
    if(alreadyPresent()){
        return;
    }
    fill();
    if(filledNo >= 9){
        return;
    }
    if(winAny()){
        return;
    }
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 3; j++){
            if(arr[i][j] == '.'){
                if(curr == 'x'){
                    arr[i][j] = 'x';
                    generate('o', filledNo + 1);
                    arr[i][j] = '.';
                }
                else if(curr == 'o'){
                    arr[i][j] = 'o';
                    generate('x', filledNo + 1);
                    arr[i][j] = '.';
                }
            }
        }
    }
}

bool isThisFinalState(string str){
    arr2[0][0] = str[0]; arr2[0][1] = str[1]; arr2[0][2] = str[2];
    arr2[1][0] = str[3]; arr2[1][1] = str[4]; arr2[1][2] = str[5];
    arr2[2][0] = str[6]; arr2[2][1] = str[7]; arr2[2][2] = str[8];
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if(winAny2()){
        return true;
    }
    // cout << "YO" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr2[i][j] == '.'){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    fast;
    string str;
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 3; j++){
            arr[i][j] = '.';
        }
    }
    generate('x', 0);
    // cout << "count2: " << count2 << endl;
    while(cin >> str){
        for(ll i = 0; i < 9; i++){
            str[i] = tolower(str[i]);
        }
        if(str == "end"){
            break;
        }
        // cout << "string : " << str << " umap.size: " << umap.size() << endl;
        if(umap[str] == true && isThisFinalState(str)){
            cout << "valid" << endl;
        }
        else{
            cout << "invalid" << endl;
        }
    }


    return 0;
}