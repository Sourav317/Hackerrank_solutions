#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// LONG LONG!
int main() {
    int n,x;
    long long sum;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&x);
        sum += x;
    }
    printf("%lld\n",sum);
    return 0;
}
