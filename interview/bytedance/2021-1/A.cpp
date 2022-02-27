#include <iostream>
#include <algorithm>

using namespace std;
const int N = 300010;
int a[N];

int lowbit(int x){
	return x & -x;
}

void add(int x,int k){

}

int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin>>a[i];
	}
	
	int q;
	cin>>q;
	for(int i = 0; i < q; i++){
		int l ,r ,k;
		int cnt = 0;
		cin>>l>>r>>k;
		for(int j = l; j <= r; j++){
			if(a[j] == k){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}

	return 0;
}
