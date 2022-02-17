#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a%4==0)
    {
        if(a%100==0)
        {
            if(a%400) cout<<"y"<<endl;
            else cout<<"n"<<endl;
        }
        else cout<<"y"<<endl;
    }
    else cout<<"n"<<endl;
    return 0;
}
