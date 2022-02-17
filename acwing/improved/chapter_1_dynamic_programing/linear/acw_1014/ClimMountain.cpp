#include <iostream>
#include <algorithm>

using namespace std;
const int N = 1100;
// f[N][2] f[i][0] 表示上升最长, f[i][1] 表示下降最长
int n,f[N][2],a[N];

/*
 *
 *  1. 按照顺序来枚举
 *  2. 不能有两个相同的景点
 *  3. 一旦开始下降就不能上升
 * 
 * 
 */

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1; i<=n;i++){
		f[i][0]=f[i][1] = 1;
		for(int j= 1 ; j < i;j ++){
			// 先上升
			if(a[i] > a[j]) f[i][0] = max(f[i][0],f[j][0]+1);
			// 再下降 下降的长度 会在 上升的基础上取最大值
			if(a[i] < a[j]) f[i][1] = max(f[i][1],max(f[j][0],f[j][1])+1);
		}
	}
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans = max({ans,f[i][0],f[i][1]});
	}

	printf("%d\n",ans);
	return 0;
}
