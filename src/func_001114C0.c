extern void D_002AD390(void *);
extern void func_0021E4F0(void *);
extern void *D_0044D7C0;
extern void *D_0044DCD8;

void func_001114C0(void *arg0, int arg1) {
    void *obj;
    void *vt;
    int tmp;

    *(void **)((char *)arg0 + 8) = &D_0044D7C0;
    obj = *(void **)((char *)arg0 + 0x64);
    if (obj != 0) {
        vt = *(void **)((char *)obj + 0x18);
        ((void (*)(void *, int))(*(void **)((char *)vt + 0xC)))(
            (char *)obj + *(short *)((char *)vt + 8), 3);
    }
    tmp = *(int *)((char *)arg0 + 0x5C);
    if (tmp != 0) {
        func_0021E4F0((void *)tmp);
    }
    tmp = *(int *)((char *)arg0 + 0x60);
    if (tmp != 0) {
        func_0021E4F0((void *)tmp);
    }
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
