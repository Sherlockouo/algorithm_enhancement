#include <iostream>
#include <algorithm>

using namespace std;

const int N = 110, INF = 1e9;
int g[N][N], dp[N][N];

int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin>>g[i][j];
		}
	}

	for(int i = 1; i <= n; i++){
		dp[i][1] = INF;
		dp[i][1] = min(dp[i][1],dp[i-1][1]+g[i][1]);
	}
	
	for(int i = 1; i <= n; i++){
		dp[1][i] = INF;
		dp[1][i] = min(dp[1][i],dp[1][i-1]+g[1][i]);
	}

	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= n; j++){
			dp[i][j] = INF;
			dp[i][j] = min({dp[i][j],dp[i-1][j]+g[i][j],dp[i][j-1]+g[i][j]});
		}
	}
	cout<<dp[n][n]<<endl;

	return 0;
}
