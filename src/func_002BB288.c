/* func_002BA300 - match: keep idx in same reg, reload not needed, sll before lw */
void func_002BA300(char *arg0, s32 *arg1, u32 arg2, s32 arg3) {
    s32 idx;
    arg3 = (arg3 << 24) >> 24;
    idx = *arg1;
    if (arg2 > (u32)idx) {
        arg0[idx] = (s8)arg3;
    }
    *arg1 = idx + 1;
}

/* func_002B9C30 */
extern s32 func_0040C4D0(void);
extern s32 func_0040C758(s32);
extern s32 func_002ABF20(s32, s32);
extern s64 func_002AC4B0(s32, s64);

s32 func_002B9C30(s32 arg0) {
    s32 tmp;
    s64 res;
    s32 ret;

    tmp = func_0040C4D0();
    res = func_002AC4B0(func_002ABF20(arg0, func_0040C758(tmp)), (s64)0xFF80 << 46);
    ret = tmp + 1;
    if ((s32)res < 0) {
        ret = tmp;
    }
    return ret;
}

/* func_002BB288 - want: end in $a1, val=-1 in $a0 as lui/ori, p in $v1 */
extern void func_003F94D0(void *, s32, u32);

void *func_002BB288(void *arg0) {
    char *p;
    char *end;
    u32 val;

    func_003F94D0(arg0, 0, 0x300);
    end = (char *)arg0 + 0x300;
    p = (char *)arg0;
    if (p < end) {
        val = 0xFFFFFFFFu;
        do {
            *(s32 *)(p + 4) = (s32)val;
            p += 0xC;
        } while (p < end);
    }
    return arg0;
}

/* func_002BB398 - try without unaligned helper, accept mismatch for release */
extern u32 func_002B1FC0(u32);
extern void func_002B8A78(void *, u32);
extern void *func_002B8938(void *, void *, u32);
extern void *func_003F96F8(void);
extern void func_003F9698(const char *);
extern char D_0047FF48[];

typedef struct __attribute__((packed)) {
    u32 a;
    u32 b;
    u8 pad[12];
    u8 f14;
    u8 f15;
} F398Arg1;

void *func_002BB398(void *arg0, F398Arg1 *arg1) {
    void *ret;
    char *base;
    u32 b;
    u32 a;

    b = *(u32 *)((char *)arg1 + 4);
    func_002B1FC0(b);
    ret = func_003F96F8();
    base = (char *)arg0 + 0x28;
    a = *(u32 *)((char *)arg1 + 0);
    func_002B8A78(base, a);
    b = *(u32 *)((char *)arg1 + 4);
    func_002B8938(base, ret, b);

    {
        u16 key = (u16)(((u16)arg1->f15 << 8) | (u16)arg1->f14);
        if (*(u16 *)((char *)arg0 + 0x64) != key) {
            func_003F9698(D_0047FF48);
            return 0;
        }
    }
    return ret;
}
