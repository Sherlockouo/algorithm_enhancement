#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

const int N = 10010;
int a[N];

int main(){

	int n,m,c;
	cin>>n>>m>>c;
	vector<vector<bool>> v(n,vector<bool>(m+1));
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		for(int j = 0; j < k; j++){
			int t;
			cin>>t;
			v[i][t] = 1;
		}
	}
	int r = m-1;
	set<int> ans;
	int on = n;
	n *= 2;
	for(int i = 0; i < n - m ; i++){
		vector<int> count(m+1);
		for(int j = i; j <=r; j++){

			for(int k = 0; k < v[j%on].size(); k ++){
				count[k]+=v[j%on][k];
			}	
		}
		cout << i << endl;
		int t = 0;
		for(auto x : count){
			if(x > 1){
				ans.insert(x);
			}
		}
		r++;	
	}
	printf("%d\n",ans.size());
	return 0;
}
