extern void SetVSyncFlag_2(void *, s64 *);
extern s32 func_0040AF58(void);
extern void func_0040AFA0(s32);

s64 func_00403400(void) {
    s32 sp0 = 0;
    s64 sp8;
    s32 t;
    SetVSyncFlag_2(&sp0, &sp8);
    t = func_0040AF58();
    *(volatile u32 *)0x1000F000 = 4;
    if (t != 0) {
        func_0040AFA0(4);
    }
    while (1) {
        if (*(volatile u32 *)0x1000F000 & 4) break;
        if (sp0 == 0) continue;
        break;
    }
    t = func_0040AF58();
    *(volatile u32 *)0x1000F000 = 4;
    if (t != 0) {
        func_0040AFA0(4);
    }
    return sp8;
}
