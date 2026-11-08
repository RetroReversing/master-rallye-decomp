extern void **func_002AD838(void);
extern void *func_002AE718(void);
extern void func_002B0008(void *, char *);
extern void func_002AFFE8(void *, char *, void *);
extern void D_002AD390(void);
extern char D_0047D9A8[];
extern char D_0047D9C0[];
extern char D_0047D9D0[];
extern char D_0048D500[];
extern u32 D_004A2A08[];

void func_002AEA08(void) {
    u32 *p = *func_002AD838();
    if (p == NULL)
        p = func_002AE718();
    p[5] = 0;
}

void func_002AED50(void *arg0, s32 arg1) {
    *(char **)arg0 = D_0047D9A8;
    if (arg1 & 1)
        D_002AD390();
}

void *func_002AED98(void) {
    if (*(s32 *)D_004A2A08 == 0) {
        func_002AEE30();
        func_002AFFE8(D_004A2A08, D_0047D9C0, D_0048D500);
    }
    return D_004A2A08;
}

void *func_002AEE30(void) {
    if (*(s32 *)D_0048D500 == 0)
        func_002B0008(D_0048D500, D_0047D9D0);
    return D_0048D500;
}
