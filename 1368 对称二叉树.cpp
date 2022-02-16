#include<iostream>
using namespace std;
int main()
{
	string s;
	int i,j,k,n,m;bool t=1;
	cin>>s;n=s.size();
	if(n%2==0)
	{
		cout<<"No"<<endl;
		return 0;
	}
	for(i=1;i<n;i+=2)
		if((s[i]=='#'&&s[i+1]!='#')||(s[i+1]=='#'&&s[i]!='#'))t=0;
	if(t)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
