#include <bits/stdc++.h>
using namespace std;
double n, x, y, a, b;
int main() {
    scanf("%lf%lf%lf", &n, &a, &b);
    x = b / a;
    for(int i = 1; i < n; i ++) {
        scanf("%lf%lf", &a, &b);
        y = b / a;
        if(y - x > 0.05) printf("better\n");
        else if(x - y > 0.05) printf("worse\n");
        else printf("same\n");
    } 
    return 0;
}
