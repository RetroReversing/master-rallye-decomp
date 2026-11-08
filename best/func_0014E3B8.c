extern void *func_001D4040(void *, const char *);
extern unsigned int D_0044C6C0;
extern unsigned int D_0044C700;
extern const char D_0044C558[];
extern const char D_0044C500[];
extern const char D_0044C510[];

extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_0014E028(void *, s32);

extern s32 func_001E2460(void *, s32);
extern s32 func_001E25B0(void *, const char *, void *);
extern s32 func_001E28F8(void *, const char *, void *);

extern const char D_0044BC38[];
extern const char D_0044C520[];
extern const char D_0044C530[];

void *func_0014E3B8(void *arg0) {
    unsigned int sp0;
    unsigned int *a0 = (unsigned int *)arg0;
    func_001D4040(&sp0, D_0044C558);
    sp0 = *(unsigned int *)&sp0;
    a0[1] = sp0;
    a0[0] = -1;
    a0[2] = (unsigned int)&D_0044C6C0;
    a0[4] = 0;
    a0[5] = 0;
    a0[6] = 0;
    a0[7] = 0;
    a0[8] = 0;
    a0[9] = 0;
    a0[10] = 0;
    a0[11] = 0;
    a0[12] = 0;
    return arg0;
}

void func_0014E360(void *arg0) {
    s32 v0;
    s32 v1;
    v0 = func_001E4280();
    v1 = func_001E3650(v0, (s32)arg0 + 0x20);
    if (v1 != ((s32 *)arg0)[4]) {
        func_0014E028(arg0, v1);
        ((s32 *)arg0)[4] = v1;
    }
}

void func_0014DFC0(void *arg0, s32 arg2) {
    unsigned int sp[12];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0044BC38, (unsigned char *)arg0 + 0xC);
    func_001E28F8(sp, D_0044C520, (unsigned char *)arg0 + 0x24);
    func_001E25B0(sp, D_0044C530, (unsigned char *)arg0 + 0x28);
}

void *func_0014DE38(void *arg0) {
    void *sp0;
    func_001D4040(&sp0, D_0044C500);
    ((unsigned int *)arg0)[3] = 0;
    ((unsigned int *)arg0)[5] = 0;
    ((unsigned int *)arg0)[6] = 0;
    ((unsigned int *)arg0)[7] = 0;
    ((unsigned int *)arg0)[8] = 0;
    ((unsigned int *)arg0)[9] = 0;
    ((unsigned int *)arg0)[1] = (unsigned int)sp0;
    ((unsigned int *)arg0)[2] = (unsigned int)&D_0044C700;
    ((unsigned int *)arg0)[4] = -1;
    ((unsigned int *)arg0)[10] = 0x67;
    ((unsigned int *)arg0)[0] = -1;
    func_001D4040((unsigned char *)arg0 + 0x24, D_0044C510);
    return arg0;
}
