extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

extern s32 func_001E4280(void);
extern s32 *func_001E3700(s32, void *);
extern s32 func_001D4010(void *, ...);
extern s32 func_003FA760(s32, s32);
extern void func_0029FA10(void *, s32);

void func_0029F220(void *arg0) {
    s32 sp[1];
    s32 *p;
    s32 val;
    s32 v30;
    s32 cond;
    void *p50;

    if (*(s32 *)((u8 *)arg0 + 0x50) == 0) {
        return;
    }
    p50 = (u8 *)arg0 + 0x50;
    p = func_001E3700(func_001E4280(), p50);
    sp[0] = *p;
    val = func_001D4010(sp, sp[0]);
    v30 = *(s32 *)((u8 *)arg0 + 0x30);
    cond = 0;
    if (v30 != 0 && val != 0) {
        cond = (func_003FA760(val, v30) == 0);
    }
    if (cond == 0) {
        func_0029FA10(arg0, func_001D4010(sp));
    }
}

extern void func_0029EAD0(void *, void *);
extern void func_0029EB50(void *, f32);

typedef struct {
    f32 x, y, z, w;
} Vec4;

void func_0029EA78(void *arg0, Vec4 *arg1) {
    Vec4 sp;
    sp.x = arg1->x;
    sp.y = arg1->y;
    sp.z = arg1->z;
    func_0029EAD0(arg0, &sp);
    func_0029EB50(arg0, arg1->w);
}

extern void D_002AD390(s32);

void func_0029EA38(void *arg0) {
    s32 *p = (s32 *)arg0;
    s32 v44 = p[0x44 / 4];
    p[0x48 / 4] = 0;
    p[0x4C / 4] = 0;
    D_002AD390(v44);
    p[0x44 / 4] = 0;
    p[0x5C / 4] = 1;
    p[0x50 / 4] = 0;
}
