extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern void *D_0044DCD8;
extern void *D_0047CC38;
extern void *D_00494BD8;

void *func_0029D088(void *arg0) {
    *(u32 *)((char *)arg0 + 4) = 0;
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    {
        void *v = D_00494BD8;
        void *vt = &D_0047CC38;
        *(s32 *)((char *)arg0 + 0) = -1;
        *(void **)((char *)arg0 + 4) = v;
        *(void **)((char *)arg0 + 8) = vt;
    }
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    return arg0;
}

extern char D_0047BF68[];
extern char D_0047BF78[];
extern char D_0047BF90[];
extern char D_0047BFF0[];
extern char D_0047C000[];
extern char D_0047C008[];
extern char D_0047C018[];

void func_001E2460(void *, void *);
void func_001E2510(void *, const char *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001E28F8(void *, const char *, void *);

void func_0029CC68(void *arg0, int arg1, void *arg2) {
    int sp[4];
    func_001E2460(sp, arg2);
    func_001E28F8(sp, D_0047BF68, (void *)((char *)arg0 + 0xC));
    func_001E28F8(sp, D_0047BF78, (void *)((char *)arg0 + 0x10));
    func_001E25B0(sp, D_0047BFF0, (void *)((char *)arg0 + 0x28));
    func_001E2510(sp, D_0047C000, (void *)((char *)arg0 + 0x2C));
    func_001E25B0(sp, D_0047C008, (void *)((char *)arg0 + 0x3C));
    func_001E2510(sp, D_0047C018, (void *)((char *)arg0 + 0x40));
    func_001E28F8(sp, D_0047BF90, (void *)((char *)arg0 + 0x14));
}

extern void *D_0044DCD8;
extern void *D_0047C7F8;
extern void *D_00494BD0;

void *func_0029CA88(void *arg0) {
    *(u32 *)((char *)arg0 + 4) = 0;
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    {
        void *v = D_00494BD0;
        void *vt = &D_0047C7F8;
        *(s32 *)((char *)arg0 + 0) = -1;
        *(void **)((char *)arg0 + 4) = v;
        *(void **)((char *)arg0 + 8) = vt;
    }
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    *(s32 *)((char *)arg0 + 0x30) = 0;
    *(s32 *)((char *)arg0 + 0x34) = 0;
    *(s32 *)((char *)arg0 + 0x38) = 0;
    *(s32 *)((char *)arg0 + 0x3C) = 0;
    *(s32 *)((char *)arg0 + 0x40) = 0;
    *(s32 *)((char *)arg0 + 0x44) = 0;
    *(s32 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    return arg0;
}
