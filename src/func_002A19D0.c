extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

/* func_002A19D0 - ee-gcc-2.95.2 -O2 -G0 range */
extern void func_001D3378(void *a0, void *a1, s32 a2, s32 a3);

void func_002A19D0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    ((s32 *)arg0)[7] = arg3;  /* 0x1C */
    ((s32 *)arg0)[8] = arg2;  /* 0x20 */
    func_001D3378(arg0, arg1, 0, 0);
}

/* func_002A1950 - ee-gcc-2.95.2 -O2 -G0 range */
extern void *D_002AD408(s32 size);
extern void func_001DF2B0(void *a0, s32 a1, s32 a2);
extern s32 func_00222D40(void *a0, void *a1);
extern u32 D_0044DD18[];
extern s32 D_00494C18;

void *func_002A1950(void) {
    void *obj;
    void *p;
    s32 tmp;

    obj = D_002AD408(0x24);
    ((u32 *)obj)[4] = (u32)D_0044DD18;  /* 0x10 */
    p = (void *)((u8 *)obj + 0x14);
    ((s32 *)obj)[2] = 0;   /* 0x8 */
    ((s32 *)obj)[3] = 0;   /* 0xC */
    ((s32 *)obj)[1] = 0;   /* 0x4 */
    ((s32 *)obj)[0] = 0;   /* 0x0 */
    ((s32 *)obj)[5] = 0;   /* 0x14 */
    ((s32 *)p)[2] = 0;     /* obj+0x1C */
    ((s32 *)p)[1] = 0;     /* obj+0x18 */
    ((s32 *)obj)[8] = D_00494C18;  /* 0x20 */
    tmp = func_00222D40((void *)((u8 *)obj + 0x40 - 0x30), p); /* sp+0x10 */
    func_001DF2B0(obj, tmp, 0);
    return obj;
}

/* func_002A10A0 - project default compiler */
extern void *D_002AD408(s32 size);
extern void func_001D3310(void *a0);
extern void func_001D3378(void *a0, void *a1, s32 a2, s32 a3);
extern void func_001E3150(s32 a0, void *a1);
extern s32 func_001E4280(void);
extern void func_002A14A0(void *a0, s32 a1);
extern u32 D_0047C6F8[];

void func_002A10A0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 sp[12];
    void *obj;

    ((s32 *)arg0)[3] = arg2;  /* 0xC */
    func_002A14A0(sp, 0);
    func_001E3150(func_001E4280(), arg1);
    obj = D_002AD408(0x20);
    func_001D3310(obj);
    ((s32 *)obj)[7] = ((s32 *)arg0)[3];  /* 0x1C */
    ((u32 *)obj)[5] = (u32)D_0047C6F8;   /* 0x14 */
    ((s32 *)obj)[6] = *(s32 *)arg1;        /* 0x18 */
    func_001D3378(obj, sp, 1, arg3);
}
