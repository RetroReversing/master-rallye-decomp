extern void func_00113F98(void *);
extern void func_00114048(void *);
extern void func_001140F8(void *);
extern void func_00114100(void *);
extern void func_00114108(void *);
extern void func_001141F0(void *);
extern void func_001D4040(void *, const char *);
extern s32 func_001E3EC0(s32, void *, s32);
extern s32 func_001E4280(void);
extern s32 func_002971F8(s32);
extern s32 func_00297500(void);
extern char D_00444908[];

void func_00114230(void *arg0) {
    s32 r = func_002971F8(func_00297500());
    switch (r) {
        case 7: func_00113F98(arg0); break;
        case 1: func_00114048(arg0); break;
        case 2: func_001140F8(arg0); break;
        case 3: func_00114100(arg0); break;
        case 4: func_00114108(arg0); break;
        case 5: func_001141F0(arg0); break;
    }
    {
        char buf[16];
        s32 x = func_001E4280();
        func_001D4040(buf, D_00444908);
        func_001E3EC0(x, buf, 0);
    }
}
