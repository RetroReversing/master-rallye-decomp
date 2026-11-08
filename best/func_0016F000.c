extern f32 func_003F3E80(f32);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((char *)arg0 + 0x30) * 2.5f;
}

f32 func_0016BAC0(void *arg0, void *arg1, void *arg2) {
    f32 y2 = *(f32 *)((char *)arg2 + 8);
    f32 dx = *(f32 *)((char *)arg1 + 0) - *(f32 *)((char *)arg2 + 0);
    f32 dy = *(f32 *)((char *)arg1 + 8) - y2;
    f32 dist2 = dx * dx + dy * dy;
    if (y2 != y2) {
        y2 = func_003F3E80(dist2);
    }
    return (*(f32 *)((char *)arg2 + 4) - *(f32 *)((char *)arg1 + 4)) / y2;
}

s32 func_0016F000(void *arg0, s32 arg1) {
    s32 *p = *(s32 **)((char *)arg0 + 8);
    s32 n = *(s32 **)((char *)arg0 + 0xC) - p;
    s32 i = 0;
    if (n <= 0) return 0;
    while (1) {
        i++;
        if (*p == arg1) return 1;
        if (i >= n) return 0;
        p++;
    }
}

s32 func_0016F040(void *arg0, s32 arg1) {
    s32 *p = *(s32 **)((char *)arg0 + 0x2C);
    s32 n = *(s32 **)((char *)arg0 + 0x30) - p;
    s32 i = 0;
    if (n <= 0) return 0;
    while (1) {
        i++;
        if (*p == arg1) return 1;
        if (i >= n) return 0;
        p++;
    }
}
