extern void func_002B85A8(void *, s32, s32, s32, s32);

void func_002B8E38(void *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    func_002B85A8(arg0, arg1, arg2, arg3, 0);
}

extern void *D_002AD408(s32);
extern void *func_002B8438(void *);
extern s32 func_002B62E0(void);
extern s32 func_002B61D0(s32, s32, s32);
extern void func_002B8C08(void *, s32);

void *func_002B8C38(s32 arg0)
{
    void *p = func_002B8438(D_002AD408(0x38));
    s32 v = 0;

    if (arg0 != 0) {
        v = func_002B61D0(func_002B62E0(), arg0, 1);
    }
    func_002B8C08(p, v);
    return p;
}

extern u8 D_00428868[];
extern void func_002B82E8(s32, s32);
extern s32 func_002B83F0(void);
extern void func_002BC1B8(void *);

void func_002B8768(u8 *arg0)
{
    u8 *q = *(u8 **)(arg0 + 0xC);
    u8 *v = *(u8 **)(q + 8);

    ((void (*)(void *, s32, void *, void *))*(void **)(v + 0x44))(
        q + *(s16 *)(v + 0x40), *(s32 *)(arg0 + 0x14), D_00428868, q);
    *(s32 *)(arg0 + 0x18) = 0;
    *(s32 *)(arg0 + 0x14) = -1;
    if (*(s32 *)(arg0 + 0x24) != 0) {
        func_002B82E8(func_002B83F0(), *(s32 *)(arg0 + 0x24));
        *(s32 *)(arg0 + 0x24) = 0;
    }
    {
        u8 *p = *(u8 **)(arg0 + 0x10);
        *(s32 *)(arg0 + 0x28) = 0;
        *(s32 *)(arg0 + 0x2C) = 0;
        *(s32 *)(arg0 + 0x30) = 0;
        *(s32 *)(arg0 + 0x34) = 0;
        if (p != NULL) {
            func_002BC1B8(p);
        }
    }
}

int func_002B8568(u8 *p)
{
    u8 *q = *(u8 **)(p + 0xC);
    u8 *v = *(u8 **)(q + 8);

    return ((int (*)(void *))*(void **)(v + 0x2C))(q + *(s16 *)(v + 0x28));
}
