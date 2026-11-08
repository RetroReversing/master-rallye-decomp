s32 PollSema_2(int sema);
void SignalSema_2(int sema);
s32 func_00405E90(void *a, int b, int c, void *d, int e, void *f, int g, int h, int i);
void func_003D13B0(const char *str, void *obj);
void func_003D16A8(const char *str, s32 x);
void func_003F931C(void *dst, const void *src, u32 len);
void func_003CDDB0(void **arg0, u32 arg1, u32 arg2, u32 arg3, s8 arg4);

extern const char D_00488D20[];
extern const char D_00488D10[];
extern int D_004361F0;
extern int D_004361F4;
extern u8 D_0049BC40[];
extern void *D_0049BCC0;
extern u8 D_0049D200[];

s32 func_003CE488(void **arg0, s8 arg1, u32 arg2) {
    u8 *base;
    s32 len;
    s8 c;
    u32 i;
    
    base = (u8 *)*arg0;
    len = *(s32 *)(base - 0x10);
    c = (s8)(arg1 << 24) >> 24;
    if (arg2 >= (u32)len) {
        return -1;
    }
    i = arg2;
    while (i < (u32)len) {
        if (base[i] != (u8)c) {
            i++;
            continue;
        }
        return (s32)i;
    }
    return -1;
}

s32 func_003CE358(void **arg0, void *arg1, u32 arg2, u32 arg3) {
    u8 *base;
    s32 len;
    u32 n;
    
    base = (u8 *)*arg0;
    len = *(s32 *)(base - 0x10);
    if ((u32)len < arg3) {
        func_003D13B0(D_00488D20, base);
    }
    n = len - (s32)arg3;
    if (arg2 < n) {
        n = arg2;
    }
    func_003F931C(arg1, base + arg3, n);
    return (s32)n;
}

void func_003CE2B8(void **arg0, u32 arg1, s8 arg2) {
    u8 *base;
    s32 len;
    s32 c;
    
    base = (u8 *)*arg0;
    c = (s32)(arg2 << 24) >> 24;
    if ((s32)arg1 > 0xFFFFFFFE) {
        func_003D16A8(D_00488D10, c);
    }
    len = *(s32 *)(base - 0x10);
    if ((u32)len < arg1) {
        func_003CDDB0(arg0, len, 0, arg1 - len, c);
        return;
    }
    func_003CDDB0(arg0, arg1, 0xFFFFFFFFU, 0, 0);
}

s32 func_003CD1C8(s32 arg0) {
    s32 ret;
    
    if (PollSema_2(D_004361F4) < 0) {
        return -0xC8;
    }
    if (*(s32 *)(D_0049BC40 + 0x24) == 0) {
        SignalSema_2(D_004361F4);
        return -0x64;
    }
    D_0049BCC0 = (void *)arg0;
    ret = func_00405E90(D_0049BC40, 10, 1, &D_0049BCC0, 0x30, D_0049D200, 4, 0, 0);
    if (ret == 0) {
        D_004361F0 = 10;
    } else {
        SignalSema_2(D_004361F4);
    }
    return ret;
}
