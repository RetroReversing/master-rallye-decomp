extern s32 D_00428D98;
extern void func_002BE960(void *, int);

void func_002BEAA0(void *arg0) {
    int v = D_00428D98;
    if (v != 0) {
        func_002BE960(arg0, v);
        D_00428D98 = 0;
    }
}
