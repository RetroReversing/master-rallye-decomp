#include "context.h"

extern f32 func_003F3E80(f32);

f32 func_001CF4C0(f32 *arg0) {
    f32 x = arg0[0];
    f32 y = arg0[1];
    f32 z = arg0[2];
    f32 sum = x * x + y * y + z * z;

    /* c1 0xC0004 is sqrt.s; bc1t taken when sqrt is valid */
    if (sum == sum) {
        /* try to let compiler emit sqrt? but need sqrt.s instruction */
    }
    return func_003F3E80(sum);
}
