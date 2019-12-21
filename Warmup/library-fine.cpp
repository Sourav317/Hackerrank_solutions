#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Simulation.
int main() {
    int mr,dr,yr,me,de,ye,fine;
    scanf("%d %d %d",&dr,&mr,&yr);
    scanf("%d %d %d",&de,&me,&ye);
    if (yr < ye || (yr == ye && mr < me) || (yr == ye && mr == me && dr <= de) )
        fine = 0;
    else if (yr > ye)
        fine = 10000;
    else if (yr == ye && mr > me)
        fine = (mr - me) * 500;
    else if (yr == ye && mr == me && dr > de)
        fine = (dr - de) * 15;
    printf("%d\n",fine);
    return 0;
}
