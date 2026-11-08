extern s32 D_0043C3B0[];
void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    D_0043C3B0[3] = arg0;
    D_0043C3B0[1] = arg1;
    D_0043C3B0[2] = arg2;
}

extern s32 func_003FA760(s32, void *);
extern s32 D_0048C568;
extern s32 D_0048C578;
void *func_003FF528(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 != 0) {
        if (func_003FA760(arg2, &D_0048C578) == 0) {
            ((s32 *)arg0)[0x34/4] = arg2;
            ((s32 *)arg0)[0x30/4] = arg1;
            return &D_0048C578;
        }
        if (func_003FA760(arg2, &D_0048C568) == 0) {
            ((s32 *)arg0)[0x34/4] = arg2;
            ((s32 *)arg0)[0x30/4] = arg1;
            return &D_0048C578;
        }
    }
    return &D_0048C578;
}

extern s32 D_004404DC;
void *func_003FF5C0(s32 arg0, s32 arg1) {
    return func_003FF528(D_004404DC, arg0, arg1);
}

extern s32 D_004404E0;
extern s32 D_00440910[];
void func_003FF678(void) {
    s32 var_6 = 1;
    s32 var_7 = ((s32 *)((char *)D_004404E0 + 8))[1] & 0xFFFFFFFC;
    s32 var_8 = var_7 >= 0x10U;
    s32 var_2 = 8;
    for (;;) {
        void *tmp = (char *)D_004404E0 + var_2;
        void *v3 = *(void **)((char *)tmp + 0xC);
        var_6 += 1;
        if (v3 != tmp) {
            do {
                s32 t2 = *(s32 *)((char *)v3 + 4);
                var_8 += 1;
                v3 = *(void **)((char *)v3 + 0xC);
                var_7 += t2 & 0xFFFFFFFC;
            } while (v3 != tmp);
        }
        var_2 = var_6 * 8;
        if (var_6 >= 0x80) break;
    }
    ((s32 *)D_00440910)[1] = var_8;
    ((s32 *)D_00440910)[0x1C/4] = (s32)(((s32 *)D_00440910)[0] - var_7);
    ((u32 *)D_00440910)[0x20/4] = var_7;
    ((s32 *)D_00440910)[0x24/4] = (s32)(((s32 *)((char *)D_004404E0 + 8))[4] & 0xFFFFFFFC);
}
