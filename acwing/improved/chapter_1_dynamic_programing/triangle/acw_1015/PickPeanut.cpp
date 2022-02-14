#include <iostream>
#include <algorithm>

using namespace std;

const int N = 110;
int t,r,c,g[N][N],dp[N][N];

int main(){
	scanf("%d",&t);
	while(t--){
		// 读入行数，列数
		scanf("%d%d",&r,&c);
		// 读入地图
		for(int i = 1; i <= r; i++){
			for(int j = 1; j <= c; j++){
				scanf("%d",&g[i][j]);
			}
		}
		for(int i = 1; i <= r; i++){
			for(int j = 1; j <= c; j++){
				dp[i][j] = max(dp[i-1][j],dp[i][j-1])+g[i][j];
			}
		}
		printf("%d\n",dp[r][c]);
	}
	return 0;
}
