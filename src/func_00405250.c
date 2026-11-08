extern s32 D_0049E558[];
extern s32 *D_0049E564;
extern s32 *D_0049E56C;

s32 func_00405238(s32 arg0, s32 arg1) {
    s32 temp = D_0049E558[5];
    D_0049E558[5] = arg0;
    D_0049E558[6] = arg1;
    return temp;
}

s32 func_00405250(s32 arg0, s32 arg1) {
    s32 temp = D_0049E558[3];
    D_0049E558[3] = arg0;
    D_0049E558[4] = arg1;
    return temp;
}

void func_00405268(s32 arg0, s32 arg1, s32 arg2) {
    s32 *base;
    s32 off;
    if (arg0 < 0) {
        off = arg0 * 8;
        base = D_0049E564;
    } else {
        base = D_0049E56C;
    }
    *(s32 *)((u8 *)base + off) = arg1;
    *(s32 *)((u8 *)base + off + 4) = arg2;
}

void func_00405298(s32 arg0) {
    s32 *base;
    s32 off;
    if (arg0 < 0) {
        off = arg0 * 8;
        base = D_0049E564;
    } else {
        base = D_0049E56C;
    }
    *(s32 *)((u8 *)base + off) = 0;
}
