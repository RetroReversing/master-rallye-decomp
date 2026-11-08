typedef signed int s32;
extern void *D_002AD408(int);
extern void *D_00426420;

void *func_001FC310(void) {
    void *p = D_00426420;
    if (p == 0) {
        void *n = D_002AD408(0xC);
        D_00426420 = n;
        *(s32 *)((char *)n + 0) = 0;
        *(void **)((char *)n + 4) = n;
        *(void **)((char *)n + 8) = n;
        return D_00426420;
    }
    return p;
}
