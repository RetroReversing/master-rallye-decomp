extern void func_002BF070(void*, u32);
extern void func_002BF098(void*, u32);
extern u8 D_00428CE0[];
extern u8 D_00480830[];
extern u32 D_00496948[];

void func_002BDCA0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            u32 *p = (u32*)D_00496948;
            p[0] = 0;
            p[1] = 0x186A0;
            p[2] = 0x258;
            p[4] = 0;
            p[5] = 0;
            p[6] = 0;
            p[3] = 0;
            func_002BF070(D_00428CE0, 0x186A0);
            *(void**)(D_00428CE0 + 0xC) = D_00480830;
            return;
        }
        func_002BF098(D_00428CE0, 2);
    }
}

void func_002BDEC8(void *arg0) {
    *(s32*)((u8*)arg0 + 0x10) = 0;
}

s32 func_002BDF58(s32 *arg0, s32 arg1) {
    s32 *p = arg0;
    s32 ret = 0;
    s32 val = p[1];
    while (val != 0) {
        if (p[0] == arg1) {
            ret = val;
            break;
        }
        p += 2;
        val = p[1];
    }
    return ret;
}

s32 func_002BDF90(s32 *arg0, s32 arg1) {
    s32 *p = arg0;
    s32 ret = 0;
    s32 val = p[0];
    while (val != 0) {
        if (p[1] == arg1) {
            ret = val;
            break;
        }
        p += 2;
        val = p[0];
    }
    return ret;
}
