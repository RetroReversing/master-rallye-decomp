extern u8 D_004A14C8[];
extern u8 D_004A16C0[];
extern s32 func_003FAD88(void *, void *, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 func_00409F48(void);
extern s32 func_0040A048(void);

s32 func_0040A5B0(void *arg0) {
    s32 var;
    void *p;

    var = 0xFFFF0000;
    if (func_00409F48() < 0) {
        return var;
    }
    if (func_0040A048() != 0) {
        return 0xFFFEFFFC;
    }
    func_003FAD88(D_004A14C8, arg0, 0xFC);
    p = D_004A14C8 - 8;
    ((u8 *)p)[0x103] = 0;
    if (func_00405E90(D_004A16C0, 9, 0, p, 0x200, p, 4, 0, 0) < 0) {
        var = 0xFFFEFFFF;
        return var;
    }
    return *(s32 *)p;
}

/* ---- */

extern s32 D_004A14C0;

s32 func_0040A650(s32 arg0) {
    s32 var;

    var = 0xFFFF0000;
    if (func_00409F48() < 0) {
        return var;
    }
    if (func_0040A048() != 0) {
        return 0xFFFEFFFC;
    }
    D_004A14C0 = arg0;
    if (func_00405E90(D_004A16C0, 0xA, 0, &D_004A14C0, 4, &D_004A14C0, 4, 0, 0) < 0) {
        return 0xFFFEFFFF;
    }
    return D_004A14C0;
}

/* ---- */

extern s32 func_0040A110(s32, s32, s32, void *);

s32 func_0040A6E0(s32 a0, s32 a1, s32 a2) {
    s32 sp;
    return func_0040A110(a0, a1, a2, &sp);
}

/* ---- */

extern char D_0048CC38[];
extern s32 func_0040A988(void *, char *, void *, s32);

s32 func_0040AAB0(void *arg0, void *arg1) {
    return func_0040A988(arg0, D_0048CC38, arg1, 1);
}
