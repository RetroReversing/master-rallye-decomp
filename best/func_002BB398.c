extern void *func_002B1FC0(u32);
extern void *func_002B8938(void *, void *, u32);
extern void func_002B8A78(void *, u32);
extern void func_003F9698(char *);
extern void *func_003F96F8(void);
extern char D_0047FF48[];

typedef struct __attribute__((packed)) { u32 a; u32 b; u8 pad[0xC]; u8 f14; u8 f15; } F398Arg1;

void *func_002BB398(void *arg0, F398Arg1 *arg1) {
    void *base28 = (u8 *)arg0 + 0x28;
    void *ret;

    (void)func_002B1FC0(arg1->b);
    ret = func_003F96F8();
    func_002B8A78(base28, arg1->a);
    (void)func_002B8938(base28, ret, arg1->b);
    {
        u16 key = (u16)(((u16)arg1->f15 << 8) | (u16)arg1->f14);
        if (*(u16 *)((u8 *)arg0 + 0x64) != key) {
            func_003F9698(D_0047FF48);
            return (void *)0;
        }
    }
    return ret;
}

typedef struct __attribute__((packed)) { u32 a; u32 b; } F2F0Arg1;

void *func_002BB2F0(void *arg0, F2F0Arg1 *arg1, s32 arg2, void *arg3, s32 arg4) {
    void *ret = 0;
    void *base28 = (u8 *)arg0 + 0x28;
    s32 len;

    func_002B8A78(base28, arg1->a + (u32)arg2);
    len = (s32)(arg1->b - (u32)arg2);
    if (arg4 < len) len = arg4;
    if (len > 0) {
        ret = func_002B8938(base28, arg3, (u32)arg4);
    }
    if ((len ^ arg4) == 0) return ret;
    return 0;
}

extern void func_003F94D0(void *, s32, s32);

void *func_002BB288(void *arg0) {
    s32 *p;
    s32 *end;
    s32 val = -1;
    func_003F94D0(arg0, 0, 0x300);
    p = (s32 *)arg0;
    end = (s32 *)((u8 *)arg0 + 0x300);
    if ((u32)p < (u32)end) {
        do {
            *(s32 *)((u8 *)p + 4) = val;
            p = (s32 *)((u8 *)p + 0xC);
        } while ((u32)p < (u32)end);
    }
    return arg0;
}
