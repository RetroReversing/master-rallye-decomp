void func_001C6710(void *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    u32 *p = (u32 *)((u8 *)arg0 + 4);
    u8 *dst = (u8 *)(*p + func_001C6700());
    *dst = *arg3;
}

s32 func_001C6780(s32, s32);
s32 *func_001C67A0(s32, s32, s32);
s32 *func_001C67D0(s32, s32, s32);

void func_001C6800(void *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    s32 div0 = *(s32 *)arg0;
    s32 q1 = arg1 / div0;
    s32 r1 = arg1 % div0;
    s32 q2 = arg2 / div0;
    s32 r2 = arg2 % div0;
    s32 idx = func_001C6780(r1, r2);
    s32 *tbl = func_001C67A0(*(s32 *)((u8 *)arg0 + 8), q1, q2);
    if (*tbl != 0) {
        s32 *tbl2 = func_001C67D0(*(s32 *)((u8 *)arg0 + 8), q1, q2);
        *(u8 *)(*tbl2 + idx) = *arg3;
    }
}

s32 func_001C6780(s32, s32);
s32 *func_001C67A0(s32, s32, s32);

s32 func_001C68B0(void *arg0, s32 arg1, s32 arg2) {
    s32 div0 = *(s32 *)arg0;
    s32 q1 = arg1 / div0;
    s32 r1 = arg1 % div0;
    s32 q2 = arg2 / div0;
    s32 r2 = arg2 % div0;
    s32 idx = func_001C6780(r1, r2);
    s32 *tbl = func_001C67A0(*(s32 *)((u8 *)arg0 + 8), q1, q2);
    return *tbl + idx;
}

s32 func_001C6D18(s32 arg0, s32 arg1, s32 arg2) {
    s32 var7 = arg0;
    s32 var8 = arg2;
    s32 var4;
    s32 var6;
    if (var7 == arg1) {
        return var8;
    }
    var7 += 0x24;
    var4 = arg0 + 0x24;
    var6 = arg2 + 0x24;
    do {
        if (var8 == 0) {
            var4 += 0x38;
        } else {
            *(f32 *)(var6 - 0x24) = *(f32 *)(var4 - 0x24);
            *(f32 *)(var6 - 0x20) = *(f32 *)(var4 - 0x20);
            *(f32 *)(var6 - 0x1C) = *(f32 *)(var4 - 0x1C);
            *(f32 *)(var6 - 0x18) = *(f32 *)(var4 - 0x18);
            *(f32 *)(var6 - 0x14) = *(f32 *)(var4 - 0x14);
            *(f32 *)(var6 - 0x10) = *(f32 *)(var4 - 0x10);
            *(f32 *)(var6 - 0xC) = *(f32 *)(var4 - 0xC);
            *(f32 *)(var6 - 8) = *(f32 *)(var4 - 8);
            *(f32 *)(var6 - 4) = *(f32 *)(var4 - 4);
            *(f32 *)(var6 + 0) = *(f32 *)(var4 + 0);
            *(f32 *)(var6 + 4) = *(f32 *)(var4 + 4);
            *(f32 *)(var6 + 8) = *(f32 *)(var4 + 8);
            *(s32 *)(var6 + 0xC) = *(s32 *)(var4 + 0xC);
            *(s32 *)(var6 + 0x10) = *(s32 *)(var4 + 0x10);
            var4 += 0x38;
        }
        var7 += 0x38;
        var6 += 0x38;
        var8 += 0x38;
    } while (var7 != arg1);
    return var8;
}
