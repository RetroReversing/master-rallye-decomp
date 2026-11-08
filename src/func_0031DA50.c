extern void func_003F94D0(void *, s32);
extern void *D_002AD408(u32);
extern void func_00327D08(void *, u32, void *);
extern s32 D_004854F0;
extern s32 D_0042DB64;
extern u16 D_0042DA1C;
extern s32 D_0042DA18;

void func_003D1290(void *arg0, char *arg1) {
    func_003F94D0(arg0, (int)*arg1);
}

void **func_0031ECB0(void **arg0) {
    void *p;
    void *p2;

    p = D_002AD408(0x40);
    p2 = (char *)p + 0x20;
    *(s32 *)((char *)p + 0xC) = 2;
    *(void **)((char *)p + 0x4) = &D_004854F0;
    *(s32 *)((char *)p + 0x18) = 0x7FFFFFFF;
    *(s32 *)((char *)p + 0x0) = 0;
    *(s32 *)((char *)p + 0x8) = 0;
    *(s32 *)((char *)p + 0x10) = 0;
    *(s32 *)((char *)p + 0x14) = 0;
    *(s32 *)((char *)p + 0x20) = 0;
    *(s32 *)((char *)p + 0x2C) = 0;
    *(s32 *)((char *)p + 0x24) = 0;
    *(s32 *)((char *)p + 0x28) = 0;
    *(s32 *)((char *)p + 0x38) = 0;
    func_00327D08(p, 0x7FFFFFFF, p2);
    *arg0 = p;
    if (p != NULL) {
        *(s32 *)p = *(s32 *)p + 1;
    }
    return arg0;
}

void func_0031DA50(s32 arg0, s32 arg1) {
    D_0042DB64 = arg1;
}

void func_00316C38(s32 arg0) {
    s32 base;
    s32 i;
    s32 j;

    if (D_0042DA1C != 0) {
        base = D_0042DA18;
        while (D_0042DA18 - base < arg0) {
            for (i = 100; i >= 0; i--) {
                for (j = 0x30; j >= 0; j--) {
                }
            }
        }
    }
}
