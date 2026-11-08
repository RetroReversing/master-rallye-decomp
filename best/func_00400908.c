s64 func_00400570(s64 arg0, s64 arg1) {
    s32 a0 = (s32)((u64)arg0 >> 32);
    s64 res;

    a0 &= 0x7FF00000;
    a0 += (s32)0xFCC00000;
    if (a0 > 0) {
        res = (s64)a0 << 32;
        return res;
    }
    {
        s32 neg = -a0;
        s32 s = neg >> 20;
        if (s < 0x14) {
            res = (s64)(0x00080000 >> s) << 32;
            return res;
        }
        {
            s32 s2 = s - 0x14;
            if (s2 < 0x1F) {
                s64 bit = (s64)(1 << (0x1F - s2)) << 32;
                res = (arg1 & 0xFFFFFFFF00000000LL) | ((u64)bit >> 32);
                return res;
            }
            {
                s64 bit = (s64)1 << 32;
                res = (arg1 & 0xFFFFFFFF00000000LL) | ((u64)bit >> 32);
                return res;
            }
        }
    }
}

s64 func_00400608(void *arg0, s32 *arg1);
typedef struct S_40908 {
    s32 unk0, unk4, unk8, unkC, unk10;
} S_40908;
s64 func_002AC230(s64, s64);

s64 func_00400908(S_40908 *arg0, S_40908 *arg1) {
    s32 sp0, sp4;
    s64 r0, r1;
    s32 diff;

    r0 = func_00400608(arg0, &sp0);
    r1 = func_00400608(arg1, &sp4);
    diff = (sp0 - sp4) + ((arg0->unk10 - arg1->unk10) << 5);
    if (diff > 0) {
        s32 adj = diff << 20;
        s32 hi = (s32)(r0 >> 32) + adj;
        r0 = (r0 & 0x00000000FFFFFFFFLL) | ((s64)hi << 32);
    } else {
        s32 adj = diff << 20;
        s32 hi = (s32)(r1 >> 32) - adj;
        r1 = (r1 & 0x00000000FFFFFFFFLL) | ((s64)hi << 32);
    }
    return func_002AC230(r0, r1);
}

extern s64 D_0048C5F0[];
s64 func_002ABF88(s64, s64);

s64 func_004009C8(s32 arg0) {
    s64 val;

    val = (s64)0xFFC0 << 46;
    if (arg0 < 0x18) {
        return D_0048C5F0[arg0];
    }
    if (arg0 > 0) {
        do {
            arg0--;
            val = func_002ABF88(val, (s64)0x8048 << 47);
        } while (arg0 > 0);
    }
    return val;
}
