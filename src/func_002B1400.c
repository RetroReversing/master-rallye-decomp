extern u8 D_0047DB18[];
extern char D_0047DDB0[];
extern char D_0047DDC8[];
extern char D_0047DDD0[];

void func_003F9698(const char *, const char *);

void *func_002B0358(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)arg0 = arg1;
    *(s32 *)((u8 *)arg0 + 8) = arg2;
    *(void **)((u8 *)arg0 + 4) = D_0047DB18;
    return arg0;
}

void func_002B13C8(const char *arg0) {
    func_003F9698(D_0047DDB0, arg0 ? arg0 : D_0047DDC8);
}

void func_002B1400(void *arg0, const char *arg1) {
    func_003F9698(D_0047DDB0, arg1 ? arg1 : D_0047DDC8);
}

s32 func_002B1430(const char *arg0) {
    func_003F9698(D_0047DDD0, arg0 ? arg0 : D_0047DDC8);
    return 0;
}
