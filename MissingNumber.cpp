#include <bits/stdc++.h>
using namespace std;
 
void solve(int n){
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
 
	sort(v.begin(),v.end());
	int k=1;
	for(int i=0;i<n;i++){
		if(v[i]!=k){cout<<k;break;}
		k++;
	}
	if(v[n-1]!=n+1){cout<<n+1;}
}
 
int main(){
	int n;
	cin>>n;
	solve(n-1);
	return 0;
}
