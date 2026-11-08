/* func_002A1950 - ee-gcc-2.95.2 -O2 -G0 range */
extern void *D_002AD408(int size);
extern void func_001DF2B0(void *a0, int a1, int a2);
extern int func_00222D40(void *a0, void *a1);
extern void *D_0044DD18;
extern int D_00494C18;

void *func_002A1950(void) {
    void *obj;
    void *sub;
    int sp[4]; /* 0x10 bytes at sp+0x10 area in 0x40 frame? */
    int tmp;

    obj = D_002AD408(0x24);
    *(void **)((char *)obj + 0x10) = D_0044DD18;
    sub = (char *)obj + 0x14;
    *(int *)((char *)obj + 0x08) = 0;
    *(int *)((char *)obj + 0x0C) = 0;
    *(int *)((char *)obj + 0x04) = 0;
    *(int *)((char *)obj + 0x00) = 0;
    *(int *)((char *)obj + 0x14) = 0;
    *(int *)((char *)obj + 0x1C) = 0;
    *(int *)((char *)obj + 0x18) = 0;
    *(int *)((char *)obj + 0x20) = D_00494C18;
    tmp = func_00222D40(&sp[0], sub);
    func_001DF2B0(obj, tmp, 0);
    return obj;
}

/* func_002A10A0 - project default compiler */
extern void *D_002AD408(int size);
extern void func_001D3310(void *a0);
extern void func_001D3378(void *a0, void *a1, int a2, int a3);
extern void func_001E3150(int a0, void *a1);
extern int func_001E4280(void);
extern void func_002A14A0(void *a0, int a1);
extern void *D_0047C6F8;

void func_002A10A0(void *arg0, void *arg1, int arg2, int arg3) {
    int sp[4];
    void *obj;
    int val;

    *(int *)((char *)arg0 + 0xC) = arg2;
    sp[0] = 0;
    func_002A14A0(sp, 0);
    func_001E3150(func_001E4280(), arg1);
    obj = D_002AD408(0x20);
    func_001D3310(obj);
    val = *(int *)((char *)arg0 + 0xC);
    *(int *)((char *)obj + 0x1C) = val;
    *(void **)((char *)obj + 0x14) = D_0047C6F8;
    *(int *)((char *)obj + 0x18) = *(int *)arg1;
    func_001D3378(obj, sp, 1, arg3);
}
