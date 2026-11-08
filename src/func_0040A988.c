extern u8 D_004A14C8[];
extern u8 D_004A16C0[];
extern s32 func_003FAD88(void *, void *, s32);
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 func_00409F48(void);
extern s32 func_0040A048(void);

s32 func_0040A988(void *arg0, void *arg1, void *arg2, s32 arg3) {
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
    func_003FAD88(D_004A14C8 + 0xFC, arg1, 0xFC);
    ((u8 *)p)[0x1FF] = 0;
    if (func_00405E90(D_004A16C0, arg3, 0, p, 0x200, p, 0x10, 0, 0) < 0) {
        var = 0xFFFEFFFF;
        return var;
    }
    if (*(s32 *)p == 0) {
        return 0xFFFEFFFD;
    }
    *(s32 *)arg2 = *(s32 *)p;
    *(s32 *)((u8 *)arg2 + 4) = *(s32 *)((u8 *)p + 4);
    return 0;
}
