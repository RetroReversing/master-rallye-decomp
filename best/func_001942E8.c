extern void func_001D22C0(void *a0, void *a1, s32 a2);
extern void func_001D2900(void *a0, s32 a1);
extern void func_001D2CD8(void *a0, char *a1);
extern void func_001D4040(void *a0, s32 a1);
extern void func_001E3EC0(s32 a0, void *a1, void *a2);

extern char D_00471770[];
extern char D_004717B8[];
extern char D_004717D0[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

typedef struct {
    u8 pad0[0xC];
    s32 unkC;
} S940B0;

void func_001940B0(S940B0 *arg0, void *arg1) {
    u8 tmp[16];
    s32 v;
    void *p;

    p = &arg0->unkC;
    func_001D2CD8(p, D_00471770);
    func_001D22C0(arg1, arg0, 10);
    func_001D2900(p, (s32)arg0);
    v = func_001E4280();
    func_001D4040(tmp, arg0->unkC);
    func_001E3650(v, tmp);
}

void func_00194258(void *arg0, s32 arg1, void *arg2) {
    u8 tmp[16];
    s32 v;

    if (arg1 == 0) {
        v = func_001E4280();
        func_001D4040(tmp, (s32)D_004717B8);
        func_001E3EC0(v, tmp, arg2);
    } else {
        v = func_001E4280();
        func_001D4040(tmp, (s32)D_004717D0);
        func_001E3EC0(v, tmp, arg2);
    }
}

void func_001942E8(void *arg0, s32 arg1) {
    u8 tmp[16];
    s32 v;
    char *s;

    if (arg1 != 0) {
        v = func_001E4280();
        s = D_004717D0;
    } else {
        v = func_001E4280();
        s = D_004717B8;
    }
    func_001D4040(tmp, (s32)s);
    func_001E3650(v, tmp);
}
