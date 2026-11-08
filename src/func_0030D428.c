extern s32 func_003F9698(char *fmt, ...);
extern char D_00484D18[];
extern char D_00484D38[];
extern char D_00484D58[];

s32 func_0030E000(void *arg0, void *arg1, u32 arg2) {
    s32 *base = (s32 *)((u8 *)arg0 + 0x18);
    u32 count;
    s32 v;

    *(s32 *)((u8 *)arg1 + 0x00) = *(s32 *)((u8 *)arg0 + 0x00);
    *(s32 *)((u8 *)arg1 + 0x04) = *(s32 *)((u8 *)arg0 + 0x04);
    count = *(u32 *)((u8 *)arg0 + 0x08);
    *(u32 *)((u8 *)arg1 + 0x08) = count;
    *(s32 *)((u8 *)arg1 + 0x18) = *(s32 *)((u8 *)arg0 + 0x0C);
    *(s32 *)((u8 *)arg1 + 0x10) = *(s32 *)((u8 *)arg0 + 0x10);
    *(s32 *)((u8 *)arg1 + 0x14) = *(s32 *)((u8 *)arg0 + 0x14);

    if (arg2 < count) {
        v = base[arg2];
        *(s32 *)((u8 *)arg1 + 0x0C) = v;
        return 0;
    }

    func_003F9698(D_00484D18);
    func_003F9698(D_00484D38, *(u32 *)((u8 *)arg1 + 0x08));
    func_003F9698(D_00484D58, arg2);
    return -1;
}

extern s32 func_00406080(void *);
extern void func_0030CB08(s32, s32);
extern void func_0030C300(s32, void *, s32);
extern u8 D_004A2B78[];
extern s8 D_0042D5F8;
extern s16 D_004A33C0;
extern s32 D_0042D5A0;

s32 func_0030D4D0(s32 arg0) {
    s32 ret;

    if (func_00406080(D_004A2B78) != 0) {
        return -1;
    }
    if (D_0042D5F8 == 0) {
        func_0030CB08(-1, 0);
    }
    D_0042D5F8 = 0;
    func_0030C300(0, &D_004A33C0, arg0);
    ret = D_0042D5A0;
    D_0042D5A0 = 0;
    D_004A33C0 = 0;
    return ret;
}

extern void func_0030C350(s32);
extern void func_0030C508(u32);
extern void func_0030C3C0(void);

s32 func_0030D428(u32 arg0, u32 arg1, u32 arg2) {
    if (arg0 >= 0x30) {
        return -1;
    }
    if (arg1 >= 0x30) {
        return -2;
    }
    func_0030C350(0x11);
    func_0030C508(arg0);
    func_0030C508(arg1);
    func_0030C508(arg2);
    func_0030C3C0();
    return 0;
}

extern u8 D_0042D600[];

s32 func_0030D400(u32 arg0) {
    if (arg0 < 0x30) {
        return D_0042D600[arg0];
    }
    return -1;
}
