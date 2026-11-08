extern void func_00127A60(void);
extern int func_001E4280(void);
extern void func_001D2458(int *a0, const char *a1);
extern void **func_0017E620(void);
extern void func_001E3FE0(int a0, int *a1, int *a2);
extern void D_002AD390(int a0);
extern char D_004486D8[];

void func_0016D178(void *arg0, float *arg1) {
    volatile float c = 2.5f;
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * c;
}

void func_00128AA0(void *arg0) {
    int sp[4];
    int sp10[4];
    void **obj;
    int *vtable;
    char *(*vfn)(void *, int, int);
    int ret;
    char *str;

    func_00127A60();
    ((int *)arg0)[0x4C / 4] = 0;
    ((int *)arg0)[0x38 / 4] = 0;
    ret = func_001E4280();
    func_001D2458(sp, D_004486D8);
    obj = func_0017E620();
    vtable = (int *)*obj;
    vfn = (char *(*)(void *, int, int))vtable[0x2C / 4];
    str = vfn((void *)((char *)obj + ((short *)vtable)[0x28 / 2]), 0x2D2, 0);
    func_001D2458(sp10, str);
    func_001E3FE0(ret, sp, sp10);
    D_002AD390(sp10[0]);
    D_002AD390(sp[0]);
}

void func_00128A00(void *arg0) {
    int sp[4];
    int sp10[4];
    void **obj;
    int *vtable;
    char *(*vfn)(void *, int, int);
    int ret;
    char *str;

    func_00127A60();
    ((int *)arg0)[0x4C / 4] = 0;
    ((int *)arg0)[0x38 / 4] = 0;
    ret = func_001E4280();
    func_001D2458(sp, D_004486D8);
    obj = func_0017E620();
    vtable = (int *)*obj;
    vfn = (char *(*)(void *, int, int))vtable[0x2C / 4];
    str = vfn((void *)((char *)obj + ((short *)vtable)[0x28 / 2]), 0x2D5, 2);
    func_001D2458(sp10, str);
    func_001E3FE0(ret, sp, sp10);
    D_002AD390(sp10[0]);
    D_002AD390(sp[0]);
}

void func_00128960(void *arg0) {
    int sp[4];
    int sp10[4];
    void **obj;
    int *vtable;
    char *(*vfn)(void *, int, int);
    int ret;
    char *str;

    func_00127A60();
    ((int *)arg0)[0x4C / 4] = 0;
    ((int *)arg0)[0x38 / 4] = 0;
    ret = func_001E4280();
    func_001D2458(sp, D_004486D8);
    obj = func_0017E620();
    vtable = (int *)*obj;
    vfn = (char *(*)(void *, int, int))vtable[0x2C / 4];
    str = vfn((void *)((char *)obj + ((short *)vtable)[0x28 / 2]), 0x2D2, 4);
    func_001D2458(sp10, str);
    func_001E3FE0(ret, sp, sp10);
    D_002AD390(sp10[0]);
    D_002AD390(sp[0]);
}
