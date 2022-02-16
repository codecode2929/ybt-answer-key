#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n)
    {
        case 1:
        case 3:
        case 5: cout << "NO"; break;
        default:cout << "YES";
    }
    return 0;
}
