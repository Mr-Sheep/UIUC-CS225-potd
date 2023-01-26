#include "epoch.h"
/* Your code here! */
time_t current = time(0);

int hours(time_t curr) {
    return curr / 3600;
}
int days(time_t curr) {
    return curr / 3600 / 24;
}
int years(time_t curr) {
    return curr / 3600 / 24 / 365;
}

