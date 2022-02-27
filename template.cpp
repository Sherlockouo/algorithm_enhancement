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

const int N = 1e5 + 10;

// 求n以内的素数
int primes[N],cnt;
bool st[N];
void init(int n){
    for(int i = 2; i <= n; i++){
        if(!st[i]){
            primes[cnt++] = i;
            for(int j = i * 2; j <= n; j++){
                st[j]  = true;
            }
        }
    }
}

// 求a,b 的最小公约数
int gcd(int a, int b){
    return b ? gcd(b,a%b) : a;
}

// 构造一组x,y 使得 ax + by = gcd(a,b) 成立
int exgcd(int a, int b, int &x, int &y){
    if(!b){
        x = 1, y = 0;
        return a;
    }

    int d = exgcd(b,a%b,y,x);
    
    y -= a/b*x;

    return d;
}

int main(){
    ios::sync_with_stdio(false);
    
    return 0;
}