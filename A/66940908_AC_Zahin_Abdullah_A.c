#include <stdio.h>

int main()
{ 
    int h1, m1, h2, m2;
    scanf("%d:%d", &h1, &m1);  // current time
    scanf("%d:%d", &h2, &m2);  // sleep duration

    int total = (h1*60 + m1) - (h2*60 + m2);
    if (total < 0) total += 1440;

    printf("%02d:%02d\n", total/60, total%60);
return 0;
}