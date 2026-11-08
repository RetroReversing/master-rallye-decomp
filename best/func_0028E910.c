extern void func_001D4040(void *arg0, const char *arg1);
extern s32 *func_001E2460(s32 *arg0, s32 arg1);
extern char D_0047B5D0[];
extern char D_0047CDB8[];
extern char D_0047B528[];
extern char D_0047CE38[];
extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

void *func_0028E910(void *arg0) {
    s32 sp[4];
    func_001D4040(sp, D_0047B5D0);
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[1] = sp[0];
    ((s32 *)arg0)[2] = (s32)D_0047CDB8;
    ((s32 *)arg0)[4] = 1;
    ((s32 *)arg0)[6] = 0;
    ((s32 *)arg0)[3] = 0;
    ((s32 *)arg0)[5] = 0;
    return arg0;
}

void *func_0028CD80(void *arg0) {
    s32 sp[4];
    float ftmp;
    func_001D4040(sp, D_0047B528);
    sp[4] = 0;
    ((s32 *)arg0)[1] = sp[0];
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[2] = (s32)D_0047CE38;
    *(float *)((char *)arg0 + 0x10) = 320.0f;
    sp[6] = 0;
    ((s32 *)arg0)[3] = 0;
    sp[5] = 0;
    ftmp = (float)sp[4];
    *(float *)((char *)arg0 + 0x14) = ftmp;
    *(float *)((char *)arg0 + 0x18) = ftmp;
    *(float *)((char *)arg0 + 0x1C) = (float)sp[6];
    return arg0;
}

void func_0028C268(void *arg0, void *arg1, s32 arg2) {
    s32 sp[4];
    func_001E2460(sp, arg2);
}
