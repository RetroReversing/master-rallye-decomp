extern u8 D_0044DCD8[];
extern void D_002AD390(void);

void func_0011CF30(u8 *arg0, s32 arg1) {
    *(void **)(arg0 + 8) = D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390();
    }
}

extern s32 func_00296710(void);
extern s32 func_00296530(s32, void *);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void *);

void func_0011CDD0(u8 *arg0, u8 *arg1) {
    if (func_00296530(func_00296710(), arg1) != 0) {
        u8 *p = *(u8 **)(arg1 + 0x4C);
        *(u64 *)(p + 0x78) = (*(u64 *)(p + 0x78) & ~1) | (func_001E3650(func_001E4280(), arg0 + 0xC) == *(s32 *)(arg0 + 0x10));
    }
}

extern void func_001E2460(u8 *, s32);
extern void func_001E28F8(u8 *, char *, u8 *, s32, s32);
extern void func_001E25B0(u8 *, char *, u8 *);
extern char D_00447300[];
extern char D_004471E8[];

void func_0011CCE0(u8 *arg0, s32 arg1, s32 arg2) {
    u8 temp[0x10];
    func_001E2460(temp, arg2);
    func_001E28F8(temp, D_00447300, arg0 + 0xC, 0, 0);
    func_001E25B0(temp, D_004471E8, arg0 + 0x10);
    func_0011CDD0(arg0, arg1);
}

extern void func_001D4040(u8 *, char *);
extern void func_0011D240(u8 *, s32);
extern void func_0011D390(u8 *, s32);
extern void func_0011D718(u8 *, s32);
extern char D_00445D80[];

void func_0011D1B0(u8 *arg0, s32 arg1) {
    s32 temp = func_001E4280();
    u8 buf[0x10];
    func_001D4040(buf, D_00445D80);
    if (func_001E3650(temp, buf) <= 0) {
        if (*(s32 *)(arg0 + 0x1C) != 0) {
            func_0011D240(arg0, arg1);
        } else {
            func_0011D390(arg0, arg1);
            func_0011D718(arg0, arg1);
        }
    }
}
