void func_002924A0(void *);
void *func_002932A8(int);
int func_00293668(void);
void func_002A5790(void *, void *, void *);

void *func_002921B8(void *arg0) {
    int i;
    int *p;
    void *tmp;
    void **end;
    void **cap;
    void *sp_arg;

    p = (int *)arg0;
    for (i = 3; i != -1; i--) {
        p[0] = 0;
        p[1] = 0;
        p += 2;
    }

    ((int *)arg0)[8] = 0;
    ((int *)arg0)[11] = 0;
    ((int *)arg0)[12] = 0;
    ((int *)arg0)[9] = 0;

    func_002924A0(arg0);

    tmp = func_002932A8(func_00293668());
    sp_arg = arg0;
    end = *(void ***)((char *)tmp + 4);
    cap = *(void ***)((char *)tmp + 8);
    if (end != cap) {
        if (end != 0) {
            *end = arg0;
        }
        *(void ***)((char *)tmp + 4) = *(void ***)((char *)tmp + 4) + 1;
    } else {
        func_002A5790(tmp, end, &sp_arg);
    }

    return arg0;
}

extern void func_001E2460(void *, s32);
extern void func_001E2470(void *, const char *, void *);
extern void func_001E2A48(void *, const char *, void *);
extern void func_001E2C78(void *, const char *, s32);
extern char D_0047ADC0[];
extern char D_0047B218[];
extern char D_0047B228[];
extern char D_0047B238[];
extern char D_0047B248[];

void func_002913F8(void *arg0, s32 arg1, s32 arg2) {
    s32 ctx[4];
    func_001E2460(ctx, arg2);
    func_001E2A48(ctx, D_0047B218, (char *)arg0 + 0x1C);
    func_001E2A48(ctx, D_0047B228, (char *)arg0 + 0x34);
    func_001E2A48(ctx, D_0047B238, (char *)arg0 + 0x28);
    func_001E2470(ctx, D_0047B248, (char *)arg0 + 0x18);
    func_001E2C78(ctx, D_0047ADC0, *(s32 *)((char *)arg0 + 0xC));
}

extern s32 func_0028F600(s32);
extern s32 func_0028F658(void *, s32, void *);

void func_0028F2E0(void *arg0, void *arg1) {
    void *p;

    *(void **)((char *)arg0 + 0x1C) = arg1;
    p = *(void **)((char *)arg1 + 0x4C);
    if (p != 0) {
        s32 v = *(s32 *)((char *)p + 8);
        if (*(s32 *)((char *)arg0 + 0x14) == 0) {
            func_0028F600(v - 0x28);
        } else {
            func_0028F658(arg0, v - 0x28, (char *)arg0 + 0x18);
        }
        *(s32 *)((char *)arg0 + 0xC) = 1;
    }
}

extern void func_001D4040(void *, const char *);
extern char D_0047B640[];
extern s32 D_0047CD78[];

void *func_0028F240(void *arg0) {
    s32 k[4];
    func_001D4040(k, D_0047B640);
    ((s32 *)arg0)[1] = k[0];
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[2] = (s32)D_0047CD78;
    ((s32 *)arg0)[5] = 1;
    *(f32 *)((s32 *)arg0 + 4) = 0.99f;
    ((s32 *)arg0)[6] = 0;
    ((s32 *)arg0)[3] = 0;
    return arg0;
}
