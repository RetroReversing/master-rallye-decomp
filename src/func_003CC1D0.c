void func_003D7B00(void *arg0, s32 arg1) {
    if (!*(s32*)((u8*)arg0 + 0)) {
        arg1 |= 4;
    }
    *(u8*)((u8*)arg0 + 0x1A) = arg1;
}

s32 PollSema_2(s32);
void SignalSema_2(s32);
s32 func_00405E90(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern s32 D_004361F0;
extern s32 D_004361F4;
extern u8 D_0049BC40[];
extern u8 D_0049BCC0[];
extern u8 D_0049D200[];

s32 func_003CC1D0(s32 arg0) {
    s32 ret;
    void *pbc40;
    void *pbcc0;
    void *pd200;

    if (PollSema_2(D_004361F4) < 0) {
        return -0xC8;
    }
    pbc40 = D_0049BC40;
    if (*(s32*)((u8*)pbc40 + 0x24) == 0) {
        SignalSema_2(D_004361F4);
        return -0x64;
    }
    pbcc0 = D_0049BCC0;
    *(s32*)((u8*)pbcc0 + 0x14) = arg0;
    pd200 = D_0049D200;
    ret = func_00405E90(pbc40, 0x14, 1, pbcc0, 0x30, pd200, 4, 0, 0);
    if (ret == 0) {
        D_004361F0 = 0x14;
    } else {
        SignalSema_2(D_004361F4);
    }
    return ret;
}

void func_003CB550(void *, void *);
void func_003CBA48(s32 arg0, void *arg1, void *arg2, void *arg3) {
    func_003CB550((void*)((u8*)arg0 + 0x10), arg1);
    func_003CB550((void*)((u8*)arg0 + 0x20), arg2);
    func_003CB550((void*)((u8*)arg0 + 0x30), arg3);
}
