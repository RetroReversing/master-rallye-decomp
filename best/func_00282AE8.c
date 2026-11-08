extern char D_0047ADC0[];
extern char D_0047AEA0[];
extern char D_0047AEB0[];
extern char D_0047AEB8[];
extern char D_0047AEC0[];
extern char D_0047AEC8[];
extern char D_0047AED8[];
extern char D_0044DCD8[];
extern char D_0047AF28[];
extern char D_0047AF40[];
extern char D_004767A8[];

void func_001E2460(void *, void *);
void func_001E2470(void *, const char *, void *);
void func_001E2510(void *, const char *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001E28F8(void *, const char *, void *);
s32 func_001E4280(void);
s32 func_001E3650(s32, s32);
void func_00283720(void *);
void func_00289958(void *, s32, void *, void *);
void D_002AD390(void);

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

void func_002831C0(void *arg0, int flags) {
    ((void **)arg0)[2] = (void *)D_0044DCD8;
    ((void **)arg0)[7] = (void *)D_0044DCD8;
    if (flags & 1) {
        D_002AD390();
    }
}

void func_002832C8(void *arg0, int arg1, void *arg2) {
    int sp[4];
    func_001E2460(sp, arg2);
    func_001E28F8(sp, D_0047AF28, (void *)((char *)arg0 + 0xC));
    func_001E2510(sp, D_0047AF40, (void *)((char *)arg0 + 0x54));
    func_001E25B0(sp, D_0047ADC0, (void *)((char *)arg0 + 0x58));
    *(f32 *)((char *)arg0 + 0x54) = *(f32 *)((char *)arg0 + 0x54) / 30.0f;
}

void func_00283678(void *arg0, int arg1) {
    if (func_001E3650(func_001E4280(), (int)arg0 + 0x74) > 0) {
        return;
    }
    if (*(void **)((char *)arg0 + 0x10) != 0) {
        func_00283720(arg0);
    }
    *(f32 *)((char *)arg0 + 0x2C) = *(f32 *)((char *)arg0 + 0x5C);
    *(f32 *)((char *)arg0 + 0x30) = *(f32 *)((char *)arg0 + 0x60);
    *(f32 *)((char *)arg0 + 0x34) = *(f32 *)((char *)arg0 + 0x64);
    *(f32 *)((char *)arg0 + 0x38) = *(f32 *)((char *)arg0 + 0x68);
    *(f32 *)((char *)arg0 + 0x3C) = *(f32 *)((char *)arg0 + 0x6C);
    *(f32 *)((char *)arg0 + 0x40) = *(f32 *)((char *)arg0 + 0x70);
    func_00289958((void *)((char *)arg0 + 0x14), arg1, (void *)((char *)arg0 + 0x38), (void *)((char *)arg0 + 0x68));
}
