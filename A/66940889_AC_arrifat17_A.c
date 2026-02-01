#include <stdio.h>

int main() {
    int sh, sm, th, tm;
    scanf("%d:%d", &sh, &sm);
    scanf("%d:%d", &th, &tm);

    int now_m = sh * 60 + sm;
    int sleep_m = th * 60 + tm;

    int bed_m = now_m - sleep_m;

    if (bed_m < 0) {
        bed_m += 1440;
    }

    printf("%02d:%02d\n", bed_m / 60, bed_m % 60);

    return 0;
}