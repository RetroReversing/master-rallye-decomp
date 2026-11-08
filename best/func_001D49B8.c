extern s32 D_004262A0;
extern s32 D_002AD5A8(s32);
extern void func_001D4A60(s32);

s32 func_001D49B8(void *arg0, u8 *arg1, s32 arg2) {
    s32 i;
    u32 crc;
    u8 *p;

    if (D_004262A0 == 0) {
        s32 t = D_002AD5A8(0x400);
        D_004262A0 = t;
        func_001D4A60(t);
    }

    crc = 0xFFFFFFFF;
    i = arg2 - 1;
    p = arg1;
    if (i != -1) {
        u32 *tbl = (u32 *)D_004262A0;
        do {
            u8 b = *p;
            p++;
            i--;
            crc = (crc >> 8) ^ tbl[(crc & 0xFF) ^ b];
        } while (i != -1);
    }
    return (s32)~crc;
}
