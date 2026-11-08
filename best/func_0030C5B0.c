extern s32 *func_00397330(s32);
extern s32 *func_00397368(s32);
extern void func_003973C8(s32, s32);
extern void func_001C6938(s32, s32);

extern char *func_003FA8A4(char *, char *);
extern s32 func_003FA9B8(char *);

extern void func_003F9698(char *, ...);

extern s32 D_0042D660;
extern s32 D_0042D664;
extern char D_004A3BC0[];
extern char D_00484A20[];

void func_00397428(s32 arg0, s32 arg1) {
    s32 p;

    p = arg1;
    while (p != 0) {
        func_001C6938(arg0, *func_00397330(p));
        {
            s32 next = *func_00397368(p);
            func_003973C8(arg0, p);
            p = next;
        }
    }
}

void func_0030C5B0(char *arg0) {
    char *base;
    s32 len;

    base = &D_004A3BC0[D_0042D660 * 2];
    func_003FA8A4(base, arg0);
    len = func_003FA9B8(arg0);
    base[len] = 0;
    D_0042D660 += (len + 2 + ((u32)(len + 2) >> 31)) >> 1;
}

void func_0030C570(u32 arg0) {
    s16 *base;
    s32 idx;

    base = (s16 *)D_004A3BC0;
    idx = D_0042D660;
    base[idx] = (s16)(arg0 >> 16);
    base[idx + 1] = (s16)arg0;
    D_0042D660 = idx + 2;
}

void func_0030C508(s16 arg0) {
    if ((u32)D_0042D660 >= 0x400U) {
        func_003F9698(D_00484A20);
    }
    ((s16 *)D_004A3BC0)[D_0042D660] = arg0;
    D_0042D660++;
}
