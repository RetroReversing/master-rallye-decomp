extern void *D_002AD408(u32);
extern void func_00327D08(void *, u32, void *);
extern u8 D_004854F0[];

void **func_0031ECB0(void **arg0) {
    void *p;
    u32 max;

    p = D_002AD408(0x40);
    max = 0x7FFFFFFF;
    *(s32 *)((char *)p + 0xC) = 2;
    *(void **)((char *)p + 0x4) = &D_004854F0;
    *(s32 *)((char *)p + 0x18) = max;
    *(s32 *)((char *)p + 0x0) = 0;
    *(s32 *)((char *)p + 0x8) = 0;
    *(s32 *)((char *)p + 0x10) = 0;
    *(s32 *)((char *)p + 0x14) = 0;
    *(s32 *)((char *)p + 0x20) = 0;
    *(s32 *)((char *)p + 0x2C) = 0;
    *(s32 *)((char *)p + 0x24) = 0;
    *(s32 *)((char *)p + 0x28) = 0;
    *(s32 *)((char *)p + 0x38) = 0;
    func_00327D08(p, max, (char *)p + 0x20);
    *arg0 = p;
    if (p != NULL) {
        *(s32 *)p = *(s32 *)p + 1;
    }
    return arg0;
}
