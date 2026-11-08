extern char D_0047AD68[];
extern char D_0047AE38[];
extern char D_0047AE20[];
extern void *D_0047D4B8;
extern void *D_0047D4F8;
extern void *D_0044DD18;
extern char D_0047AE00[];
extern char D_0047ADC0[];
extern void *D_002AD408(int);
extern char D_0047ADD0[];
extern char D_0047ADF0[];
extern void *D_0047D538;

void func_001D4040(void *, const char *);
void func_001D54D8(void *);
void func_001D56B0(void *, int);
void func_001E2460(void *, void *);
void func_001E2C78(void *, const char *, int);
void func_001E2E38(void *, const char *, void *);

void *func_0027F500(void *arg0) {
    void *p;
    int sp[4];
    p = D_002AD408(0x24);
    *(int *)((char *)p + 8) = 0;
    *(void **)((char *)p + 0x10) = &D_0044DD18;
    *(int *)((char *)p + 0xC) = 0;
    *(int *)((char *)p + 4) = 0;
    *(int *)((char *)p + 0) = 0;
    *(int *)((char *)p + 0x14) = 0;
    *(int *)((char *)p + 0x18) = 0;
    *(int *)((char *)p + 0x1C) = 0;
    *(int *)((char *)p + 0x20) = 0;
    func_001E2460(sp, p);
    func_001E2E38(sp, D_0047AE00, (char *)arg0 + 0x10);
    func_001E2C78(sp, D_0047ADC0, *(int *)((char *)arg0 + 0xC));
    return p;
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

void *func_0027F478(void *arg0) {
    int k[4];
    void *p1;
    p1 = (char *)arg0 + 0x14;
    func_001D4040(k, D_0047ADD0);
    *(int *)((char *)arg0 + 0x4) = k[0];
    *(int *)((char *)arg0 + 0x10) = 0;
    *(int *)((char *)arg0 + 0x14) = 0;
    *(int *)((char *)arg0 + 0) = -1;
    *(void **)((char *)arg0 + 0x8) = &D_0047D538;
    func_001D4040((char *)arg0 + 0x10, D_0047ADF0);
    func_001D4040(p1, D_0047AD68);
    *(int *)((char *)arg0 + 0xC) = 0;
    return arg0;
}

f32 func_0027F440(void *arg0) {
    f32 *p = (f32 *)((char *)arg0 + 0x30);
    int i = 0x3B;
    f32 v;
    do {
        v = *p;
        i--;
        p++;
    } while (i >= 0);
    return v / 60.0f;
}
