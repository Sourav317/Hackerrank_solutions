
#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Algorithm: Compute pairwise difference, and sum up.
    int tt; char str[10001];
    scanf("%d",&tt);
    while (tt--)
    {
        scanf("%s",str);
        int l = strlen(str), sum=0;
        for (int i=0;i<l/2;i++)
            sum += abs(str[i]-str[l-1-i]);
        printf("%d\n",sum);
    }
    return 0;
}
