#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <unordered_map>
#include <set>
#include <map>
#include <cmath>
#include <bitset>

#define x first
#define y second 

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> PII;

int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}

int main(){
    ULL x,y = 1,k;
    cin>>x>>k;
    bitset<64> xbs(x),kbs(k);

    for(int i = 0,j = 0; i < xbs.size(); i ++){
        if(!xbs.test(i)){
            xbs.set(i,kbs[j++]);
        }
    }

    y = xbs.to_ullong();

    y ^= x;
    cout << y <<endl;

    return 0;
}