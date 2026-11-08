extern char D_0047AD68[];
extern char D_0047AE38[];
extern char D_0047AE20[];
extern void *D_0047D4B8;
extern void *D_0047D4F8;

void func_001D4040(void *, const char *);
void func_001D54D8(void *);
void func_001D56B0(void *, int);

void *func_00282510(void *arg0) {
    int k[4];
    func_001D4040(k, D_0047AE38);
    *(int *)((char *)arg0 + 0x28) = 0;
    *(int *)((char *)arg0 + 0xC) = 0;
    *(int *)((char *)arg0 + 0x20) = 0;
    *(int *)((char *)arg0 + 0x24) = 0;
    *(int *)((char *)arg0 + 0x4) = k[0];
    *(int *)((char *)arg0 + 0) = -1;
    *(void **)((char *)arg0 + 0x8) = &D_0047D4B8;
    *(f32 *)((char *)arg0 + 0x10) = 100.0f;
    *(f32 *)((char *)arg0 + 0x14) = 90.0f;
    *(f32 *)((char *)arg0 + 0x18) = 10.0f;
    *(f32 *)((char *)arg0 + 0x1C) = 0.5f;
    func_001D4040((char *)arg0 + 0x28, D_0047AD68);
    return arg0;
}

void func_002824C8(void *arg0, void *arg1) {
    void *p = (char *)arg0 + 0x2C;
    *(f32 *)p = *(f32 *)arg1;
    *(f32 *)(p + 4) = *(f32 *)((char *)arg1 + 4);
    *(f32 *)(p + 8) = *(f32 *)((char *)arg1 + 8);
    *(int *)((char *)arg0 + 0x44) = 1;
    func_001D56B0((char *)arg0 + 0x14, 1);
}

void func_00282480(void *arg0, void *arg1) {
    void *p = (char *)arg0 + 0x38;
    *(f32 *)p = *(f32 *)arg1;
    *(f32 *)(p + 4) = *(f32 *)((char *)arg1 + 4);
    *(f32 *)(p + 8) = *(f32 *)((char *)arg1 + 8);
    *(int *)((char *)arg0 + 0x44) = 1;
    func_001D56B0((char *)arg0 + 0x14, 1);
}

void *func_00281CD8(void *arg0) {
    int k[4];
    void *p2;
    void *p3;
    func_001D4040(k, D_0047AE20);
    *(int *)((char *)arg0 + 0x4) = k[0];
    *(int *)((char *)arg0 + 0) = -1;
    *(void **)((char *)arg0 + 0x8) = &D_0047D4F8;
    func_001D4040((char *)arg0 + 0xC, D_0047AD68);
    *(int *)((char *)arg0 + 0x10) = 0;
    func_001D54D8((char *)arg0 + 0x14);
    p2 = (char *)arg0 + 0x2C;
    p3 = (char *)arg0 + 0x38;
    *(f32 *)((char *)arg0 + 0x28) = 60.0f;
    *(int *)p2 = 0;
    *(f32 *)(p2 + 8) = 1.0f;
    *(int *)(p2 + 4) = 0;
    *(int *)p3 = 0;
    *(int *)(p3 + 4) = 0;
    *(int *)(p3 + 8) = 0;
    *(int *)((char *)arg0 + 0x44) = 1;
    return arg0;
}
