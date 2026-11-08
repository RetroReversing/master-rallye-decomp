extern s32 iSignalSema_2(s32 sema, void *arg, s32 unk, s32 unk2);
extern u32 D_00441110;
extern u32 D_0049DC20;
extern u8 D_0049DC28[];

s32 func_00403F58(u8 arg0) {
    u32 a = arg0;
    if (a >= 0x80) {
        return -1;
    }
    if (D_00441110 == 0) {
        return -1;
    }
    u8 *base = D_0049DC28;
    s32 idx = (*(s32 *)(base + 4)) & 0x1FF;
    u8 *p = base + (idx * 2);
    *(s32 *)(base + 4) = idx + 1;
    p[8] = 1;
    p[9] = (u8)a;
    iSignalSema_2(D_0049DC20, p, idx * 2, 1);
    return (s32)a;
}
