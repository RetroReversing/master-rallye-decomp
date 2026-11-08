extern void func_003973A0(void *arg0);
extern void func_003A5C10(void *arg0, void *arg1);

void func_003973C8(void *arg0, void *arg1) {
    func_003973A0((u8 *)arg1 + 0x10);
    func_003A5C10(arg0, arg1);
}

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

    if (arg2 < count) {
        *(s32 *)((u8 *)arg1 + 0x0C) = *(s32 *)(base + arg2 * 4);
        return 0;
    }

    func_003F9698(D_00484D18);
    func_003F9698(D_00484D38, *(u32 *)((u8 *)arg1 + 0x08));
    func_003F9698(D_00484D58, arg2);
    return -1;
}

extern void func_0030C350(s32);
extern void func_0030C3C0(void);
extern void func_0030C508(s32);
extern void func_0030C570(s32);
extern s32 D_0042D5F4;
extern char D_00484C18[];
extern char D_00484C40[];
extern char D_00484C68[];

void func_0030DDD0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 >= D_0042D5F4) {
        func_003F9698(D_00484C18);
        func_003F9698(D_00484C40, arg0, D_0042D5F4 - 1);
        func_003F9698(D_00484C68);
        return;
    }
    func_0030C350(0x2B);
    func_0030C508(arg0);
    func_0030C508(arg1);
    func_0030C570(arg2);
    func_0030C3C0();
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

    if (arg2 < count) {
        u8 *p = src + arg2 * 0x10;
        *(s32 *)((u8 *)arg1 + 0x10) = *(s32 *)(p + 0x00);
        *(s32 *)((u8 *)arg1 + 0x0C) = *(s32 *)(p + 0x04);
        *(s32 *)((u8 *)arg1 + 0x14) = *(s32 *)(p + 0x08);
        *(s32 *)((u8 *)arg1 + 0x18) = *(s32 *)(p + 0x0C);
        return 0;
    }

    func_003F9698(D_00484BF8);
    func_003F9698(D_00484BC8, *(u32 *)((u8 *)arg1 + 0x08));
    return -1;
}
