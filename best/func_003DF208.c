s64 func_003DBBB8(s64 arg0, s32 arg1) {
    s32 hi = (s32)(arg0 >> 32);
    s32 t = (hi & 0x7FF00000) + 0xFCC00000;
    if (t > 0) {
        return (s64)t << 32;
    }
    s32 nt = -t;
    s32 e = nt >> 20;
    if (e < 0x14) {
        s32 m = 0x80000 >> e;
        return (s64)m << 32;
    }
    s32 e2 = e - 0x14;
    s32 var2 = 1;
    if (e2 < 0x1F) {
        var2 = 1 << (0x1F - e2);
    }
    return ((s64)(arg1 & 0xFFFF0000)) | ((s64)var2 << 32);
}

extern s32 func_003D8690(void);

void *func_003DE668(void *arg0) {
    if (func_003D8690() == 0) {
        return (void *)0;
    }
    s32 val = *(s32 *)((u8 *)arg0 + 0x1C);
    *(s32 *)((u8 *)arg0 + 0x4) = val;
    *(s32 *)((u8 *)arg0 + 0xC) = val;
    *(s32 *)((u8 *)arg0 + 0x10) = val;
    *(s32 *)((u8 *)arg0 + 0x14) = val;
    *(s32 *)((u8 *)arg0 + 0x18) = val;
    *(s32 *)((u8 *)arg0 + 0x8) = val;
    return arg0;
}

extern s32 func_003DE6B8(s32, s32);
extern s32 *func_003F73E0(void);

s32 func_003DEA80(void *arg0) {
    s32 res = 0;
    s32 start = *(s32 *)((u8 *)arg0 + 0x10);
    s32 end = *(s32 *)((u8 *)arg0 + 0x14);
    if (start < end) {
        if (func_003DE6B8(start, end - start) != 0) {
            return -1;
        }
    }
    s32 diff = *(s32 *)((u8 *)arg0 + 0x4) - *(s32 *)((u8 *)arg0 + 0x8);
    if (diff != 0) {
        void **vtab = *(void ***)((u8 *)arg0 + 0x50);
        if (((s32 (*)(void *, s64, s32))vtab[0x1F])(arg0, (s64)diff << 32, 1) != -1) {
            *(s32 *)((u8 *)arg0 + 0x8) = *(s32 *)((u8 *)arg0 + 0x4);
        } else {
            if (*func_003F73E0() == 0x1D) {
                res = 0;
            } else {
                res = -1;
            }
        }
    }
    if (res != -1) {
        *(s64 *)((u8 *)arg0 + 0x40) = -1LL;
    }
    return res;
}

extern s32 func_003DA918(void *, s32);
extern void *D_004898C8;

void func_003DF208(void *arg0, s32 arg1) {
    *(void **)((u8 *)arg0 + 0x50) = &D_004898C8;
    s32 start = *(s32 *)((u8 *)arg0 + 0x10);
    s32 end = *(s32 *)((u8 *)arg0 + 0x14);
    func_003DE6B8(start, end - start);
    func_003DA918(arg0, arg1);
}
