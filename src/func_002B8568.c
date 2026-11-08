int func_002B8568(char *p, int a)
{
    char *q = *(char **)(p + 12);
    char *v = *(char **)(q + 8);
    return ((int (*)(void *, int))*(void **)(v + 44))(q + *(s16 *)(v + 40), a);
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
    *(u32 *)(arg0 + 0x14) = 0xFFFFFFFFu;
    *(u32 *)(arg0 + 0x18) = 0;
    if (*(s32 *)(arg0 + 0x24) != 0) {
        func_002B82E8(func_002B83F0(), *(s32 *)(arg0 + 0x24));
        *(s32 *)(arg0 + 0x24) = 0;
    }
    {
        u8 *p = *(u8 **)(arg0 + 0x10);
        *(s32 *)(arg0 + 0x2C) = 0;
        *(s32 *)(arg0 + 0x30) = 0;
        *(s32 *)(arg0 + 0x34) = 0;
        *(s32 *)(arg0 + 0x28) = 0;
        if (p != NULL) {
            func_002BC1B8(p);
        }
    }
}
