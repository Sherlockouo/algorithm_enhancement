#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <unordered_map>
#include <set>
#include <map>
#include <cmath>


using namespace std;

int ans = 0;

int count(const string str) {
    int cnt = 0;
    for(int i = 1; i <= str.size(); i ++){
        bool flag = 1;
        for(int j = 0; j < str.size(); j++){
            if(str[j] != str[(j+i)% str.size()]){
                flag = 0;
                break;
            }
        }
        cnt+=flag;
    }
    return cnt;
}

void dfs(vector<string> &strs, int idx,int k, string str,vector<bool> &vis){
    if(idx == strs.size()){
        if(count(str) == k) ans++;
        return;
    }

    for(int i = 0; i < strs.size(); i++){
        if(vis[i] == 1) continue;
        vis[i] = 1;
        dfs(strs,idx+1,k,str+strs[i],vis);
        vis[i] = 0;
    }

    return;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<string> strs;
    vector<bool> vis(n,0);
    for(int i = 0; i < n; i++){
        string s;
        cin>>s;
        strs.push_back(s);
    }

    dfs(strs,0,k,"",vis);

    cout<<ans<<endl;

    return 0;
}