extern s32 func_003F9698(char *fmt, ...);
extern char D_00484D18[];
extern char D_00484D38[];
extern char D_00484D58[];

s32 func_0030E000(void *arg0, void *arg1, u32 arg2) {
    u8 *base = (u8 *)arg0 + 0x18;
    u32 count;

    *(s32 *)((u8 *)arg1 + 0x00) = *(s32 *)((u8 *)arg0 + 0x00);
    *(s32 *)((u8 *)arg1 + 0x04) = *(s32 *)((u8 *)arg0 + 0x04);
    count = *(u32 *)((u8 *)arg0 + 0x08);
    *(u32 *)((u8 *)arg1 + 0x08) = count;
    *(s32 *)((u8 *)arg1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x0C);
    *(s32 *)((u8 *)arg1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x10);
    *(s32 *)((u8 *)arg1 + 0x14) = *(s32 *)((u8 *)arg0 + 0x14);

    if (arg2 >= count) {
        func_003F9698(D_00484D18);
        func_003F9698(D_00484D38, *(u32 *)((u8 *)arg1 + 0x08));
        func_003F9698(D_00484D58, arg2);
        return -1;
    } else {
        *(s32 *)((u8 *)arg1 + 0x0C) = *(s32 *)(base + arg2 * 4);
        return 0;
    }
}

extern char D_00484BF8[];
extern char D_00484BC8[];

s32 func_0030DD30(void *arg0, void *arg1, u32 arg2) {
    u8 *src = (u8 *)arg0 + 0x0C;
    u32 count;

    *(s32 *)((u8 *)arg1 + 0x00) = *(s32 *)((u8 *)arg0 + 0x00);
    *(s32 *)((u8 *)arg1 + 0x04) = *(s32 *)((u8 *)arg0 + 0x04);
    count = *(u32 *)((u8 *)arg0 + 0x08);
    *(u32 *)((u8 *)arg1 + 0x08) = count;

    if (arg2 >= count) {
        func_003F9698(D_00484BF8);
        func_003F9698(D_00484BC8, *(u32 *)((u8 *)arg1 + 0x08));
        return -1;
    } else {
        u8 *p = src + arg2 * 0x10;
        *(s32 *)((u8 *)arg1 + 0x10) = *(s32 *)(p + 0x00);
        *(s32 *)((u8 *)arg1 + 0x0C) = *(s32 *)(p + 0x04);
        *(s32 *)((u8 *)arg1 + 0x14) = *(s32 *)(p + 0x08);
        *(s32 *)((u8 *)arg1 + 0x18) = *(s32 *)(p + 0x0C);
        return 0;
    }
}
