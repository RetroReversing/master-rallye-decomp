extern char D_0047ADC0[];
extern char D_0047AEA0[];
extern char D_0047AEB0[];
extern char D_0047AEB8[];
extern char D_0047AEC0[];
extern char D_0047AEC8[];
extern char D_0047AED8[];
extern char D_0047AD68[];
extern char D_0047AE48[];
extern char D_0047AE58[];
extern char D_0047AE68[];
extern char D_0047AE70[];
extern char D_0047AE78[];
extern char D_0047AE88[];
extern char D_0047AE90[];
extern void *D_0047D478;

void func_001E2460(void *, void *);
void func_001E2470(void *, const char *, void *);
void func_001E2510(void *, const char *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001D4040(void *, const char *);
s32 func_00201350(void);

void func_002826D0(void *arg0, int arg1, void *arg2) {
    int sp[4];
    func_001E2460(sp, arg2);
    func_001E2510(sp, D_0047AE58, (void *)((char *)arg0 + 0x10));
    func_001E2510(sp, D_0047AE68, (void *)((char *)arg0 + 0x14));
    func_001E2510(sp, D_0047AE70, (void *)((char *)arg0 + 0x18));
    func_001E2510(sp, D_0047AE78, (void *)((char *)arg0 + 0x1C));
    func_001E2470(sp, D_0047AE88, (void *)((char *)arg0 + 0x20));
    func_001E2470(sp, D_0047AE90, (void *)((char *)arg0 + 0x24));
    func_001E25B0(sp, D_0047ADC0, (void *)((char *)arg0 + 0xC));
}

void func_00282AE8(void *arg0, int arg1, void *arg2) {
    int sp[4];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0047AEA0, (void *)((char *)arg0 + 0xC));
    func_001E2510(sp, D_0047AEB0, (void *)((char *)arg0 + 0x14));
    func_001E2510(sp, D_0047AEB8, (void *)((char *)arg0 + 0x18));
    func_001E2510(sp, D_0047AEC0, (void *)((char *)arg0 + 0x1C));
    func_001E2470(sp, D_0047AEC8, (void *)((char *)arg0 + 0x20));
    func_001E2470(sp, D_0047AED8, (void *)((char *)arg0 + 0x24));
    func_001E25B0(sp, D_0047ADC0, (void *)((char *)arg0 + 0x10));
}

void *func_00282930(void *arg0) {
    int k[4];
    func_001D4040(k, D_0047AE48);
    *(int *)((char *)arg0 + 0xC) = 0;
    *(int *)((char *)arg0 + 0x10) = 0;
    *(int *)((char *)arg0 + 0x1C) = 0;
    *(int *)((char *)arg0 + 0x20) = 0;
    *(int *)((char *)arg0 + 0x24) = 0;
    *(int *)((char *)arg0 + 0x28) = 0;
    *(int *)((char *)arg0 + 0x4) = k[0];
    *(int *)((char *)arg0 + 0) = -1;
    *(void **)((char *)arg0 + 0x8) = &D_0047D478;
    *(f32 *)((char *)arg0 + 0x14) = 4.0f;
    *(f32 *)((char *)arg0 + 0x18) = 0.3f;
    func_001D4040((char *)arg0 + 0x2C, D_0047AD68);
    return arg0;
}

void func_00282788(void *arg0) {
    f32 *p;
    f32 val;
    p = ((f32 **)func_00201350())[*(int *)((char *)arg0 + 0xC)];
    if (*(int *)((char *)arg0 + 0x20) != 0) {
        val = *(f32 *)((char *)arg0 + 0x18);
    } else {
        val = *(f32 *)((char *)arg0 + 0x14);
    }
    *p = val;
}
