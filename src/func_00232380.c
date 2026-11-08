extern f32 D_004265E4;

s32 func_00232380(void *arg0, void *arg1) {
    f32 *p = (f32 *)arg0;
    f32 *n = (f32 *)arg1;
    f32 eps = D_004265E4;
    f32 d = (p[0] * n[0] + p[1] * n[1] + p[2] * n[2]) - p[3];
    if (eps < d) return 1;
    if (d < -eps) return -1;
    return 0;
}
