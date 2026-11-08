extern char D_0044A6D8[];
extern char D_00448AA0[];
extern char D_0044A4A8[];
extern char D_0044A268[];
extern char D_0044CFE8[];
extern void func_001D4040(void *, const char *);
extern void *func_001349C8(const char *);
extern void func_001348E0(s32);
extern s32 func_001E3650(s32, s32);
extern s32 func_0011DA70(s32, s32);
extern s32 D_002AD408(s32);
extern s32 func_00297500(void);
extern s32 func_002971B0(s32);
extern void func_00297398(s32, s32);
extern s32 func_00194C40(void);
extern s32 func_00194428(s32);
extern s32 func_001942E8(s32, s32);
extern void func_001E3EC0(s32, void *, s32);

void func_00134C00(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 fparg0) {
    ((s32 *)arg0)[0] = arg1;
    ((s32 *)arg0)[1] = arg2;
    ((s32 *)arg0)[2] = arg3;
    ((f32 *)arg0)[3] = fparg0;
    ((s32 *)arg0)[4] = arg4;
}

void *func_00134C18(void *arg0) {
    s32 k;
    func_001D4040(&k, D_0044A6D8);
    ((s32 *)arg0)[0] = -1;
    ((s32 *)arg0)[1] = k;
    ((s32 *)arg0)[2] = (s32)D_0044CFE8;
    ((s32 *)arg0)[9] = 0;
    ((s32 *)arg0)[10] = 0;
    ((s32 *)arg0)[11] = 0;
    ((s32 *)arg0)[3] = 0;
    return arg0;
}

void func_00134A18(s32 arg0) {
    if (*(s32 *)((unsigned)func_001349C8(D_00448AA0) + 0x30) != 0) {
        s32 handle = func_001E4280();
        s32 k;
        func_001D4040(&k, D_0044A4A8);
        if (func_001E3650(handle, (s32)&k) == 0)
            func_001348E0(arg0);
    }
}

void func_00136778(s32 arg0) {
    ((s32 *)arg0)[3] = func_0011DA70(D_002AD408(0x10), 0x19);
    if (func_002971B0(func_00297500()) == -1)
        func_00297398(func_00297500(), 1);
    if (func_00194428(func_00194C40()) != 0) {
        s32 k;
        s32 name = func_001E4280();
        func_001D4040(&k, D_0044A268);
        func_001E3EC0(name, &k, func_001942E8(func_00194C40(), 0));
    }
}
