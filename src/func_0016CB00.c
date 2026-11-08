extern void func_001D4040(void *, const char *);
extern char D_0044F738[];
extern char D_0044EE08[];
extern char D_0044FA88[];

void *func_0016CB00(void *arg0) {
    func_001D4040(arg0, D_0044F738);
    func_001D4040((char *)arg0 + 4, D_0044EE08);
    func_001D4040((char *)arg0 + 8, D_0044FA88);
    func_001D4040((char *)arg0 + 12, D_0044FA88);
    *(volatile f32 *)((char *)arg0 + 0x24) = -0.2f;
    *(volatile f32 *)((char *)arg0 + 0x28) = 0.2f;
    *(volatile s32 *)((char *)arg0 + 0x10) = 0;
    *(volatile s32 *)((char *)arg0 + 0x14) = 0;
    *(volatile s32 *)((char *)arg0 + 0x18) = 0;
    *(volatile f32 *)((char *)arg0 + 0x1C) = -0.2f;
    *(volatile f32 *)((char *)arg0 + 0x20) = 0.2f;
    *(volatile s32 *)((char *)arg0 + 0x2C) = 0;
    *(volatile s32 *)((char *)arg0 + 0x30) = 0;
    return arg0;
}
