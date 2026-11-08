#include "context.h"

f32 func_00207450(void *arg0, void *arg1) {
    f32 *cur = *(f32 **)arg0;
    s32 n = (*(f32 **)((u8 *)arg0 + 4) - cur);
    f32 sum = 0.0f;
    f32 *b = *(f32 **)arg1;

    if (n > 0) {
        f32 *a = cur;
        do {
            sum += (*a++) * (*b++);
            n--;
        } while (n != 0);
    }
    return sum;
}
