extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern int func_003FA9B8(void *);

int func_003A4D88(void *arg0) {
    int *p = (int *)arg0;
    int v = *p;
    if (v != 0) {
        return func_003FA9B8((void *)v);
    }
    return 0;
}

extern int func_001CE2F8(void *);
extern int func_001D24B8(void *, int, int, void *);

int func_003A4C98(void *arg0, void *arg1) {
    int len = func_001CE2F8(arg0);
    return func_001D24B8(arg0, 0, len, arg1);
}

extern void D_002AD390(void *);

void func_003A4BF0(void *arg0, int arg1) {
    void **p = (void **)arg0;
    D_002AD390(*p);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
