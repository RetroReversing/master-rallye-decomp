extern u8 D_20000010[];
extern u8 D_20000050[];

void func_003CC648(void *arg0) {
    u32 *p = (u32 *)((u32)arg0 | 0x20000000);
    u32 cnt1 = p[0];
    if (cnt1) {
        u8 *dst = (u8 *)p[2];
        u32 i = 0;
        if ((s32)cnt1 > 0) {
            u32 base = (u32)(u8 *)D_20000010;
            do {
                dst[i] = *(u8 *)(base + i);
                i = i + 1;
            } while (i < cnt1);
        }
    }
    u32 cnt2 = p[1];
    if (cnt2) {
        u8 *dst = (u8 *)p[3];
        u32 i = 0;
        if ((s32)cnt2 > 0) {
            u32 base = (u32)(u8 *)D_20000050;
            do {
                dst[i] = *(u8 *)(base + i);
                i = i + 1;
            } while (i < cnt2);
        }
    }
}
