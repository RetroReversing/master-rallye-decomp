extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern s32 D_00428F00;
extern s32 D_00428F04;
extern s32 func_002BEDA0(s32);
extern void func_002BEEB8(s32);

s32 func_002C1AA0(void) {
    if (D_00428F00 != 0) {
        while (func_002BEDA0(D_00428F00) != 0) {
            func_002BEEB8(D_00428F00);
        }
        func_002BEEB8(D_00428F00);
    }
    return D_00428F04;
}

extern void *D_002AD408(s32);
extern void *func_002BEC58(void *, const char *, s32);
extern char D_004810B8[];

void *func_002C1A18(void *arg0) {
    D_00428F00 = (s32)func_002BEC58(D_002AD408(8), D_004810B8, 0);
    return arg0;
}

extern void func_003F94D0(void *, s32, s32);

void *func_002C17E0(void *arg0) {
    func_003F94D0((char *)arg0 + 4, 0, 0x88);
    *(s32 *)arg0 = 0;
    return arg0;
}
