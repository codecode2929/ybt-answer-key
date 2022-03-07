#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,f1=1,f2=1,fn;
	cin>>n;
	if(n<=2) fn=1;
	for(int i=3;i<=n;i++){
		fn=f1+f2;
		f1=f2;
		f2=fn;
	}
	
	cout<<fn;
	return 0;
}

