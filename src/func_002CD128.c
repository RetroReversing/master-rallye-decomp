extern void *D_002AD408(int);
extern s32 *D_00429300;

void *func_002CD128(void) {
    if (!D_00429300) {
        void *p = D_002AD408(8);
        D_00429300 = p;
        ((s32 *)p)[1] = 0;
        ((s32 *)p)[0] = 0;
    }
    return D_00429300;
}
