#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
	string s;
	cin>>s;
	int ans=1,c=1;
	int n=s.length();
	for (int i = 1; i < n; i++)
	{
		if(s[i]==s[i-1]){
			c++;
			ans=max(ans,c);
		}else{
			c=1;
		}
	}
	cout<<ans;
	return 0;
}
