#include "context.h"

extern char D_00478578[];
extern f32 func_00207170(void *, s32);
extern void func_001C64B0(void *, void *, void *);
extern f32 func_003F3E80(f32);

void *func_00206E70(s32 *p) {
    s32 tmp[4];
    s32 *a;
    p[0] = 0;
    p[4] = (s32)D_00478578;
    a = p + 1;
    p[1] = 0;
    a[1] = 0;
    a[2] = 0;
    (void)tmp;
    return p;
}

void func_00207328(void *arg0, void *arg1) {
    f32 sp;
    s32 i;
    s32 count = *(s32 *)arg0;
    u8 *arr = (u8 *)arg0 + 0x18;

    if (count <= 0) return;
    i = 0;
    do {
        f32 v = 1.0f / func_00207170(arg1, i);
        f32 *cur = *(f32 **)(arr + 4);
        f32 *cap = *(f32 **)(arr + 8);
        sp = v;
        if (cur != cap) {
            if (cur != 0) {
                *cur = v;
            }
            *(f32 **)(arr + 4) = cur + 1;
        } else {
            func_001C64B0(arr, cur, &sp);
        }
        i++;
    } while (i < count);
}

f32 func_002073E0(void *arg0) {
    f32 *cur = *(f32 **)arg0;
    f32 *end = *(f32 **)((u8 *)arg0 + 4);
    s32 n = (end - cur);
    f32 sum = 0.0f;

    if (n > 0) {
        do {
            f32 v = *cur;
            cur++;
            n--;
            sum += v * v;
        } while (n != 0);
    }
    if (!(sum == sum)) {
        return sum;
    }
    return func_003F3E80(sum);
}

f32 func_00207450(void *arg0, void *arg1) {
    f32 *cur = *(f32 **)arg0;
    f32 *end = *(f32 **)((u8 *)arg0 + 4);
    s32 n = (end - cur);
    f32 sum = 0.0f;
    f32 *b = *(f32 **)arg1;

    if (n > 0) {
        do {
            f32 v0 = *cur++;
            f32 v1 = *b++;
            n--;
            sum += v0 * v1;
        } while (n != 0);
    }
    return sum;
}
