#include<iostream> 
#include<cstdio> 
using namespace std; 
int main() 
{ 
    float x,a,y,b;
    cin>>x>>a>>y>>b;
    float su=(y*b-x*a)/(b-a);
	printf("%.2f",su);
}
