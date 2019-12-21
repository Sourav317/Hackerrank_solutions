
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tt;
    scanf("%d",&tt);
    while (tt--)
    {
        int k;
        scanf("%d",&k);
        printf("%lld\n",(k/2)*(long long)(k-k/2));
    }

    return 0;
}
