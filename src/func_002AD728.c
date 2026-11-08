extern s32 D_00494CA8;
extern void func_002AD678(void);

void func_002AD728(void) {
    if (D_00494CA8 == 0) {
        D_00494CA8 = 1;
        func_002AD678();
    }
}
