extern void *D_002AD408(s32);
extern void *func_001F27A0(void *);
extern s32 func_001F0B38(void *arg0, void *arg1);
extern void func_001F7398(void *);

s32 func_001D3920(void *arg0)
{
    s32 *v = *(s32 **)((u8 *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

void *func_001F0AB8(void *arg0, s32 arg1)
{
    void *obj;

    if ((u32)(arg1 - 2) >= 6U) {
        return NULL;
    }
    *(s32 *)((u8 *)arg0 + 4) = arg1;
    obj = func_001F27A0(D_002AD408(0x3C));
    if (func_001F0B38(arg0, obj) != 0) {
        return obj;
    }
    if (obj != NULL) {
        void *vt = *(void **)((u8 *)obj + 0x10);
        ((void (*)(void *, s32))*(s32 *)((u8 *)vt + 0xC))((u8 *)obj + *(s16 *)((u8 *)vt + 8), 3);
    }
    return NULL;
}

void *func_001F2108(void *arg0)
{
    s32 i;
    void *p;

    p = arg0;
    for (i = 2; i != -1; i--) {
        func_001F7398(p);
        p = (void *)((u8 *)p + 0x14);
    }
    *(s32 *)((u8 *)arg0 + 0x48) = 0;
    *(s32 *)((u8 *)arg0 + 0x54) = 0;
    p = (void *)((u8 *)arg0 + 0x44);
    for (i = 2; i >= 0; i--) {
        *(s32 *)p = 0;
        p = (void *)((u8 *)p - 4);
    }
    return arg0;
}

s32 func_001F2358(void *arg0)
{
    s32 i = 0;
    u8 *p = (u8 *)arg0;
    u8 *q = p + 0x3C;

    while (i < 3) {
        i++;
        if (*(s32 *)q != 0) {
            p += 0x14;
            if (*(s32 *)p != 0) {
                return 1;
            }
        } else {
            p += 0x14;
        }
        q += 4;
    }
    return 0;
}
