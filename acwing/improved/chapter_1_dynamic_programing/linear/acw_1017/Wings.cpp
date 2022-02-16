#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 110;
int dw[N], ds[N],a[N];
int n;

int main(){
	int t ;
	cin>>t;
	while(t--){
		memset(dw,0,sizeof dw);
		memset(ds,0,sizeof ds);

		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		a[0] = 0;	
		for(int i=1;i<=n;i++){
			for(int j = 0; j < i; j++)
				if(a[i] > a[j]){
					dw[i] = max(dw[i],dw[j]+1);
				}
		}
		a[n+1] = 0;
		for(int i=n;i>0;i--){
			for(int j = n+1; j > i; j--){
				if(a[i] > a[j])
					ds[i] = max(ds[i],ds[j]+1);
			}
		}
		int ans = 0;
		for(int i=1;i<=n;i++){
			ans = max({ans,dw[i],ds[i]});
		}
		printf("%d\n",ans);

	}
	return 0;
}
