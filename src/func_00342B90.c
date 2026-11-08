extern void func_003402F0(void);
extern void func_003302B8(void);
extern void func_00359610(s32);
extern void func_00345B50(s32, s32);
extern void func_00347160(s32);
extern s32 D_0042DD2C;
extern void func_003CB2D0(void *, void *, void *);
extern void func_003F94D0(void *, s32);

void func_0032FE20(void *arg0) {
    void *v;
    void *vt;

    func_003402F0();
    v = *(void **)((char *)arg0 + 0x30);
    vt = *(void **)((char *)v + 0x148);
    ((void (*)(void *, void *)) *(void **)((char *)vt + 0x34))(
        (char *)v + (int)*(s16 *)((char *)vt + 0x30), v);
}

void func_0032FF28(void *arg0) {
    void *v;
    void *vt;
    s32 tmp;

    func_003302B8();
    tmp = *(s32 *)((char *)arg0 + 0x404);
    if (D_0042DD2C != 0)
        func_00359610(tmp);
    func_00345B50(*(s32 *)((char *)arg0 + 0x464), tmp);
    func_00347160(*(s32 *)((char *)arg0 + 0x464));
    v = *(void **)((char *)arg0 + 0x30);
    vt = *(void **)((char *)v + 0x148);
    ((void (*)(void *, void *)) *(void **)((char *)vt + 0x24))(
        (char *)v + (int)*(s16 *)((char *)vt + 0x20), v);
}

void func_00342B90(void *arg0, void *arg1, void *arg2) {
    func_003CB2D0(arg2, arg1, arg0);
}

void func_003D1290(void *arg0, char *arg1) {
    func_003F94D0(arg0, (int)*arg1);
}
