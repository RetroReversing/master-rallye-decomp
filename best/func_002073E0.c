#include "context.h"

extern f32 func_003F3E80(f32);

f32 func_002073E0(void *arg0) {
    f32 *a = *(f32 **)arg0;
    f32 *e = *(f32 **)((u8 *)arg0 + 4);
    s32 n = (s32)(e - a);
    f32 sum = 0.0f;

    if (n > 0) {
        f32 *p = a;
        do {
            f32 v = *p++;
            n--;
            sum += v * v;
        } while (n != 0);
    }
    if (sum == sum) {
        return func_003F3E80(sum);
    }
    return sum;
}
