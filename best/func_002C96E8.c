typedef struct {
    void *vtable;
    void *unk4;
    int unk8;
    int unkC;
} CControllerConfig;

extern int D_004290B0;
extern int D_004290B4;
extern int D_004290B8;
extern const char D_00482328[];
extern const char D_00482348[];
extern const char D_00482368[];
extern const char D_00482380[];
extern void *D_004823B0;
extern void *D_0049AEE0;
extern void *D_0049AEE8;
extern void *D_0049AEF0;

extern void func_002CAF60(void);
extern int func_001D4040(void *dst, const void *src);
extern int func_001E3650(int arg0, void *arg1);
extern void *func_001E3820(int arg0, void *arg1, void *arg2);
extern int func_001E4280(void);
extern int func_003FA310(void *dst, const char *fmt, int arg, ...);

CControllerConfig *func_002C96E8(CControllerConfig *arg0, int arg1) {
    char sp[0x180];
    void *sp100;
    int var;
    void *temp;
    int v0;

    func_002CAF60();
    arg0->unk4 = (void *)arg1;
    arg0->vtable = &D_004823B0;
    
    if (D_004290B0 == 0) {
        func_001D4040(&D_0049AEE0, D_00482328);
        D_004290B0 = 1;
    }
    if (D_004290B4 == 0) {
        func_001D4040(&D_0049AEE8, D_00482348);
        D_004290B4 = 1;
    }
    if (D_004290B8 == 0) {
        func_001D4040(&D_0049AEF0, D_00482368);
        D_004290B8 = 1;
    }
    
    v0 = func_001E4280();
    func_003FA310(sp, D_00482380, func_001E3650(v0, &D_0049AEE0));
    
    v0 = func_001E4280();
    func_001D4040(sp + 0x100, sp);
    sp100 = sp + 0x100;
    temp = func_001E3820(v0, sp100, &D_0049AEF0);
    if (temp == NULL) {
        var = 7;
    } else {
        var = *(int *)((char *)temp + 0x38);
    }
    arg0->unk8 = var;
    
    func_003FA310(sp, D_00482380, func_001E3650(func_001E4280(), &D_0049AEE8));
    v0 = func_001E4280();
    func_001D4040(sp + 0x100, sp);
    temp = func_001E3820(v0, sp + 0x100, &D_0049AEF0);
    if (temp == NULL) {
        var = 7;
    } else {
        var = *(int *)((char *)temp + 0x38);
    }
    arg0->unkC = var;
    
    return arg0;
}
