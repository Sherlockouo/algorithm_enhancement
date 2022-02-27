#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <unordered_map>
#include <set>
#include <map>
#include <cmath>


using namespace std;

int main(){
    int n,l,s;
    cin>>n>>s>>l;
    // 每个cd能存多少首歌
    /*
    song_num*s + song_num - 1 = l
    song_num = (l+1)/(s+1)
    */ 
    int count = (l+1)/(s+1);
    
    count = min(count,n);
    if(count % 13 ==0){
        count--;
    }
    int ans = n / count;
    int res = n % count;
    if(res){
        ans++;
        if(res % 13 == 0 && (count - res)==1){
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}