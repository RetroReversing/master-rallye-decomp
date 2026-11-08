/* func_00400570 - work in progress */
s64 func_00400570(s64 arg0, s64 arg1) {
    s32 a0;
    s32 v1;
    s64 res;

    a0 = (s32)((u64)arg0 >> 32);
    a0 = a0 & 0x7FF00000;
    a0 = a0 + (s32)0xFCC00000;
    if (a0 <= 0) {
        s32 neg = -a0;
        s32 s = neg >> 20;
        if (s < 20) {
            res = (s64)(0x00080000 >> s) << 32;
            return res;
        } else {
            s32 s2 = s - 20;
            if (s2 < 31) {
                s64 bit = (s64)(1 << (31 - s2)) << 32;
                res = (arg1 & 0xFFFFFFFF00000000LL) | ((u64)bit >> 32);
                return res;
            } else {
                s64 bit = (s64)1 << 32;
                res = (arg1 & 0xFFFFFFFF00000000LL) | ((u64)bit >> 32);
                return res;
            }
        }
    }
    res = (s64)a0 << 32;
    return res;
}

/* func_00400908 */
s64 func_00400608(void *arg0, s32 *arg1);

typedef struct S_40908 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} S_40908;

s64 func_002AC230(s64, s64);

s64 func_00400908(S_40908 *arg0, S_40908 *arg1) {
    s32 sp0;
    s32 sp4;
    s64 r0;
    s64 r1;
    s32 diff;

    r0 = func_00400608(arg0, &sp0);
    r1 = func_00400608(arg1, &sp4);
    diff = ((arg0->unk10 - arg1->unk10) << 5) + (sp0 - sp4);
    if (diff > 0) {
        s32 v = (s32)(r0 >> 32) + (diff << 20);
        r0 = (r0 & 0x00000000FFFFFFFFLL) | ((s64)v << 32);
    } else {
        s32 v = (s32)(r1 >> 32) - (diff << 20);
        r1 = (r1 & 0x00000000FFFFFFFFLL) | ((s64)v << 32);
    }
    return func_002AC230(r0, r1);
}

/* func_004009C8 */
extern s64 D_0048C5F0[];
s64 func_002ABF88(s64, s64);

s64 func_004009C8(s32 arg0) {
    s64 val;

    val = (s64)0xFFC0 << 46;
    if (arg0 < 0x18) {
        return D_0048C5F0[arg0];
    }
    if (arg0 <= 0) {
        return val;
    }
    do {
        arg0 = arg0 - 1;
        val = func_002ABF88(val, (s64)0x8048 << 47);
    } while (arg0 > 0);
    return val;
}
