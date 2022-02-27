#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

void solve(string &s, int p, int l){
    string str = s.substr(p,l);
    reverse(str.begin(),str.end());
    s.insert(p+l,str);
}

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int p,l;
        cin>>p>>l;
        solve(s,p,l);
    }
    cout<<s<<endl;
    return 0;
}
