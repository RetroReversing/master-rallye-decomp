extern s32 D_004411BC;
extern u8 D_004A1300[];
extern s32 D_004A1380;
extern s32 D_004A1340;
extern s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_00409CD0(s32 arg0) {
    if (D_004411BC < 0) {
        return 0;
    }
    D_004A1380 = arg0;
    if (func_00405E90(D_004A1300, 1, 0, &D_004A1380, 4, &D_004A1340, 4, 0, 0) < 0) {
        return 0;
    }
    return D_004A1340;
}
