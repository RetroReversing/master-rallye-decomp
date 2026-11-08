void func_00260748(void *arg0, void *arg1, s32 *arg2, f32 *arg3) {
    f32 v;
    v = (*(f32 *)((u8 *)arg1 + 0) - *(f32 *)((u8 *)arg0 + 0x4)) / *(f32 *)((u8 *)arg0 + 0xC);
    *arg2 = (s32)v + 1;
    v = (*(f32 *)((u8 *)arg1 + 0x8) - *(f32 *)((u8 *)arg0 + 0x8)) / *(f32 *)((u8 *)arg0 + 0xC);
    *arg3 = v;
}

void *func_00260880(void *arg0, void *arg1, s32 *arg2, s32 *arg3) {
    f32 c = *(f32 *)((u8 *)arg1 + 0xC);
    f32 f4 = *(f32 *)((u8 *)arg1 + 0x8) + ((f32)*arg3 * c);
    f32 f0 = *(f32 *)((u8 *)arg1 + 0x4) + ((f32)*arg2 * c);
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(f32 *)((u8 *)arg0 + 8) = f4;
    *(f32 *)((u8 *)arg0 + 0) = f0;
    return arg0;
}

extern void func_003FA388(s32, const char *);
extern char D_00479B80[];

extern s32 func_002602B0(void);
extern void *D_002AD408(s32);
extern void *func_002444E0(void *);
extern void func_00260288(void *, s32, void *, void *);

void func_00260288_callee(void *arg0, void *arg1) {
    func_003FA388(*(s32 *)((u8 *)arg1 + 0x14), D_00479B80);
}

s32 func_00260218(void *arg0) {
    s32 sp4[2];
    s32 ret = func_002602B0();
    if (ret == 0) {
        *(void **)arg0 = 0;
    } else {
        *(void **)arg0 = func_002444E0(D_002AD408(0x74));
        func_00260288(arg0, ret, &sp4[0], &sp4[1]);
    }
    return 1;
}
