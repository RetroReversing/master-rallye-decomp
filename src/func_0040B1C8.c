extern void SetSyscall_9(s32 num, s32 addr);
extern void Copy_5(void *dst, void *src, s32 len);
extern void FlushCache_2(s32 mode);
extern s32 GetEntryAddress_7(s32 num);
extern s32 func_0040B160(void);
extern s32 D_00441988[];
extern u8 D_004411E0[];

void func_0040B1C8(void) {
    s32 i;
    s32 *base;
    s32 *q;
    s32 num;
    s32 addr;

    if (func_0040B160() != 0) {
        base = D_00441988;
        SetSyscall_9(base[0], base[1]);
        Copy_5((void *)0x80074000, D_004411E0, 0x7A8);
        FlushCache_2(0);
        FlushCache_2(2);
        SetSyscall_9(base[2], base[3]);
        i = 2;
        q = base + 4;
        do {
            num = q[0];
            i++;
            addr = GetEntryAddress_7(num);
            SetSyscall_9(q[0], addr);
            q += 2;
        } while ((u32)i < 3);
    }
}
