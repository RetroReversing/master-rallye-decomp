extern s32 D_004A14C0;
extern s32 D_004A16C0;
extern s32 func_00409F48(void);
extern s32 func_0040A048(void);
extern s32 func_00405E90(s32 *, s32, s32, s32 *, s32, s32 *, s32, s32, s32);

s32 func_0040A520(s32 arg0) {
    if (func_00409F48() >= 0) {
        if (func_0040A048() != 0) {
            return (s32)0xFFFEFFFC;
        }
        D_004A14C0 = arg0;
        if (func_00405E90(&D_004A16C0, 8, 0, &D_004A14C0, 4, &D_004A14C0, 4, 0, 0) >= 0) {
            return D_004A14C0;
        }
        return (s32)0xFFFEFFFF;
    }
    return (s32)0xFFFEFFFF;
}
