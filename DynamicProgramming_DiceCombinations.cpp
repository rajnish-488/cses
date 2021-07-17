/*
 
#include <bits/stdc++.h>
using namespace std;
long long int c=0;
long int m= 1e9 + 7;
//long int dp[100002]={0};
vector<long long int> dp(1000007,0);
long long int solve(long long int n){
	if(n==0){return 1;}
	else{
		if(dp[n]!=0){return dp[n];}
		for(int i=1;i<=6;i++){
			if((n-i)>=0){
				dp[n]+=(solve(n-i)%m);
				dp[n]%=m;
			}
		}
		
	}
	return dp[n];
}
 
// taking the value till 32570 only
 
int main(){
	long long int n;
	cin>>n;
	cout<<solve(n);
 
	return 0;
}
 
*/
// the ploblem with the code may be that the function may be goint out of bound 
// so need to use the iterative tecnique to solve the same; 
 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m=1e9+7;
	cin>>n;
	vector<int> dp(n+2,0);
	dp[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=6 && i-j>=0;j++){
			dp[i]+=dp[i-j];
			dp[i]%=m;
		}
	}
	cout<<dp[n];
	return 0;
}
