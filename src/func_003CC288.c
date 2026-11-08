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

s32 func_003CC4B8(s32 arg0) {
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
    *(s32*)pbcc0 = arg0;
    pd200 = D_0049D200;
    ret = func_00405E90(pbc40, 3, 1, pbcc0, 0x30, pd200, 4, 0, 0);
    if (ret == 0) {
        D_004361F0 = 3;
    } else {
        SignalSema_2(D_004361F4);
    }
    return ret;
}

s32 func_003CC348(s32);

s32 func_003CC480(void) {
    s32 temp_2;

    temp_2 = func_003CC348(0x40);
    if (temp_2 == 0) {
        D_004361F0 = 0xB;
    }
    return temp_2;
}

s32 func_003CC288(s32 arg0) {
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
    *(s32*)((u8*)pbcc0 + 4) = arg0;
    pd200 = D_0049D200;
    ret = func_00405E90(pbc40, 0x15, 0, pbcc0, 0x30, pd200, 4, 0, 0);
    if (ret != 0) {
        SignalSema_2(D_004361F4);
        return ret;
    }
    SignalSema_2(D_004361F4);
    return *(s32*)pd200;
}
