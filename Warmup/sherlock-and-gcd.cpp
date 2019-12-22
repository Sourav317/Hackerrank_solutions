
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


///by helix32
int gcd(int a, int b)
{
    while (a%b!=0)
    {
        int tmp = b;
        b = a%b;
        a = tmp;
    }
    return b;
}
int main() {
    int tt;
    scanf("%d",&tt);
    while (tt--)
    {
        int n;
        scanf("%d",&n);
        int arr[100];
        for (int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        int arrgcd=arr[0];
        for (int i=1;i<n;i++)
            arrgcd = gcd(arrgcd,arr[i]);
        if (arrgcd==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
