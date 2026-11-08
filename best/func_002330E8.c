typedef int s32;
typedef float f32;

extern f32 D_004265E4;
f32 func_003F3E80(f32);

static inline f32 mysqrt(f32 x) {
    f32 r;
    /* PS2 sqrt.s is c1 0xC0044 in target; try rsqrt+recip pattern unlikely. */
    r = x;
    return r;
}

s32 func_002330E8(void *arg0, void *arg1) {
    f32 *a = (f32 *)arg0;
    f32 *b = (f32 *)arg1;
    f32 dx = a[0] - b[0];
    f32 dy = a[1] - b[1];
    f32 dz = a[2] - b[2];
    f32 f12 = dx*dx + dy*dy + dz*dz;
    f32 f1 = mysqrt(f12);
    if (f1 != f1) {
        f1 = func_003F3E80(f12);
    }
    if (f1 < D_004265E4) return 1;
    return 0;
}
