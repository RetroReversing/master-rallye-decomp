extern s32 func_0040AF58(void);
extern void func_0040AFA0(s32);

void func_00403370(void) {
    s32 t;
    t = func_0040AF58();
    *(volatile u32 *)0x1000F000 = 4;
    if (t != 0) {
        func_0040AFA0(4);
    }
    while (!(*(volatile u32 *)0x1000F000 & 4)) {
    }
    t = func_0040AF58();
    *(volatile u32 *)0x1000F000 = 4;
    if (t != 0) {
        func_0040AFA0(4);
        return;
    }
}
