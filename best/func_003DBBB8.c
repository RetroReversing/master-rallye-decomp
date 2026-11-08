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
    u32 low = (u32)arg1 & 0xFFFF0000;
    return ((s64)low) | ((s64)var2 << 32);
}

extern s32 func_003D7D68(s32 *);

void func_003DE2F0(void *arg0) {
    *(s64 *)((u8 *)arg0 + 0x40) = -1LL;
    *(s32 *)arg0 |= 0x240C;
    func_003D7D68((s32 *)arg0);
    *(s32 *)((u8 *)arg0 + 0x38) = -1;
}

extern s32 func_003D8820(void *, s32);
extern void func_003DE6B8(void *, s32);

void func_003DE400(void *arg0) {
    if (*(s32 *)((u8 *)arg0 + 0x38) >= 0) {
        s32 *p = (s32 *)arg0;
        void **vtab = *(void ***)((u8 *)arg0 + 0x50);
        if ((p[0] & 0x40) == 0) {
            ((void (*)(void *))vtab[0x21])(arg0);
        }
        func_003D8820(arg0, 0);
        return;
    }
    s32 start = *(s32 *)((u8 *)arg0 + 0x10);
    s32 end = *(s32 *)((u8 *)arg0 + 0x14);
    func_003DE6B8(arg0, end - start);
    if ((*(s32 *)arg0 & 0x40) == 0) {
        void **vtab = *(void ***)((u8 *)arg0 + 0x50);
        ((void (*)(void *))vtab[0x21])(arg0);
    }
    func_003D8820(arg0, 0);
}

extern s32 *func_003F73E0(void);

void *func_003DE5D0(void *arg0, s32 arg1) {
    if (*(s32 *)((u8 *)arg0 + 0x38) >= 0) {
        return NULL;
    }
    *(s32 *)((u8 *)arg0 + 0x38) = arg1;
    *(s64 *)((u8 *)arg0 + 0x40) = -1LL;
    *(s32 *)arg0 = (*(s32 *)arg0 & ~0xC) | 0x40;
    void **vtab = *(void ***)((u8 *)arg0 + 0x50);
    if (((s32 (*)(void *, s32, s32, s32))vtab[0x11])(arg0, 0, 1, 3) != -1) {
        return arg0;
    }
    if (*func_003F73E0() == 0x1D) {
        return arg0;
    }
    return NULL;
}
