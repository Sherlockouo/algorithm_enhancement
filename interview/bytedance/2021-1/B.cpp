#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <unordered_map>

using namespace std;

int main(){

	string s;
	int m;
	cin>>s>>m;
	unordered_map<char,int> m;
	for(int i = 0; i < s.size(); i ++){
		m[s[i]]++;	
	}


	return 0;
}
