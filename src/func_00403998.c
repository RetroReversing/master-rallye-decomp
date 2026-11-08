/* identical to func_00403858 (matched), with its names changed by decompdecomp */
extern void _iEnableIntc_2(void);

void func_00403B50(void) {
    _iEnableIntc_2();
}

void func_00403BF0(void *arg0, void *arg1, u32 arg2) {
    u32 *dst;
    u32 *src;
    u32 count;
    u32 i;

    count = arg2 >> 2;
    if (count == 0) {
        return;
    }
    dst = (u32 *)arg0;
    src = (u32 *)arg1;
    i = 0;
    do {
        dst[i] = src[i];
        i++;
    } while (i < count);
}

extern s32 func_00403870(s32, s32);

void func_00403998(s32 arg0, s32 arg1) {
    arg0 &= 0xFFFFFFC0;
    arg1 &= 0xFFFFFFC0;
    func_00403870(arg0, arg1);
}

extern s32 D_00441110;
extern void *D_0049DC20;
extern u8 D_0049DC28[];

s32 iSignalSema_2(void *, void *, s32, s32);

u8 func_00403F58(u8 arg0) {
    u32 count;
    u8 *entry;

    if ((u32)arg0 >= 0x80U || D_00441110 == 0) {
        return 0xFF;
    }
    count = *(u32 *)(D_0049DC28 + 4) & 0x1FF;
    entry = D_0049DC28 + count * 2;
    *(u32 *)(D_0049DC28 + 4) = count + 1;
    entry[8] = 1;
    entry[9] = arg0;
    iSignalSema_2(D_0049DC20, entry, (s32)(count * 2), 1);
    return arg0;
}
