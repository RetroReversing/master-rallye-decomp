/* identical to func_00310710 (matched), with its names changed by decompdecomp */
extern u16 D_0042DA10;
extern u16 D_0042DA12;

void func_00310E28(void) {
    D_0042DA12 = D_0042DA10;
}

extern s32 D_0042D680;
extern void func_0030EA80(void);
extern void func_002C1A68(s32);

void func_00310DD8(void) {
    func_0030EA80();
    func_002C1A68(D_0042D680);
    D_0042D680 = (D_0042D680 + 1) & 1;
}

s32 **func_00326C78(s32 **p, s32 **end, s32 **out) {
    while (p != end) {
        if (out != NULL) {
            s32 *v = *p;
            *out = v;
            if (v != NULL)
                *v += 1;
        }
        p++;
        out++;
    }
    return out;
}

extern u16 D_0042DA1C;
extern s32 D_0042DA18;
extern s32 D_0042DADC;
extern s32 func_003C7B00(s32);
extern void func_002C1528(s32, s32, s32, s32);
extern void func_0030F310(void);

void func_0030F290(void) {
    if (D_0042DA1C == 0) {
        func_003C7B00(0);
        D_0042DA18 = (func_003C7B00(0) + 1) & 1;
        D_0042DA1C = 1;
        func_002C1528(D_0042DADC, 0, 1, 1);
        func_0030F310();
    }
}
