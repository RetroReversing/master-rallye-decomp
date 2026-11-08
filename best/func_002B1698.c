extern s32 func_003FA760(s32, s32);
extern void func_003F95A0(void *);
extern s32 D_00427D7C;
extern s32 D_00427D84;
extern char D_10000[];
extern char D_4D9978[];
extern s32 D_1FF0000;

s32 func_002AFF80(s32 *arg0, s32 *arg1) {
    s32 result;

    result = 0;
    if (arg1 == arg0) goto ret1;
    if (func_003FA760(*arg0, *arg1) != 0) {
        return result;
    }
ret1:
    result = 1;
    return result;
}

void func_002B1488(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    s32 sp[0x20];

    func_003F95A0(sp);
    *arg0 = sp[0];
    *arg1 = sp[7];
    {
        char *v = D_10000;
        if ((u32)v > 0x800000U) {
            v = (char *)0x100000;
        }
        *arg2 = ((s32)(0x02000000 - (s32)D_4D9978) - (s32)v) - 0x400;
    }
    *arg3 = D_00427D7C;
}

void func_002B15F8(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 sp[0x1C];

    func_003F95A0(sp);
    *arg0 = D_00427D84;
    {
        char *v = D_10000;
        if ((u32)(v - 1) > 0x7FFFFFU) {
            v = (char *)0x100000;
        }
        *arg1 = ((s32)(0x02000000 - (s32)D_4D9978) - (s32)v) - 0x400;
    }
    *arg2 = D_00427D7C;
}

void func_002B1698(s32 arg0) {
    volatile s32 *p;

    p = &D_1FF0000;
    while (p != (volatile s32 *)0) {
        *p = arg0;
        p++;
        break; /* placeholder */
    }
}
