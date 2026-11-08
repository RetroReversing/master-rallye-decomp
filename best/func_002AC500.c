s32 func_001C6780(s32, s32);
s32 *func_001C67A0(s32, s32, s32);

s32 func_002AB1B8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 temp_17;
    
    temp_2 = *(s32 *)arg0;
    temp_lo = arg1 / temp_2;
    temp_lo_2 = arg2 / temp_2;
    temp_17 = func_001C6780(arg1 - temp_2 * temp_lo, arg2 - temp_2 * temp_lo_2);
    return *func_001C67A0(*(s32 *)(arg0 + 0x8), temp_lo, temp_lo_2) + temp_17;
}

void func_002ABF20(s64 arg0, s64 arg1) {
    s32 sp[32];
    s64 sp60, sp68;
    sp60 = arg0;
    sp68 = arg1;
    func_002ABBE8(&sp60, sp);
    func_002ABBE8(&sp68, sp + 8);
    *(s32 *)(sp + 12) = *(s32 *)(sp + 12) ^ 1;
    func_002ABAB8(func_002ABC88(sp, sp + 8, sp + 16));
}

void func_002AC4B0(s64 arg0, s64 arg1) {
    s32 sp[32];
    s64 sp40, sp48;
    sp40 = arg0;
    sp48 = arg1;
    func_002ABBE8(&sp40, sp);
    func_002ABBE8(&sp48, sp + 8);
    func_002AC398(sp, sp + 8);
}

s64 func_002AC500(u64 arg0) {
    s32 sp[12];
    u64 sp10;
    u32 var_4;
    u64 temp_3;
    u64 var_5;
    u64 var_6;
    
    sp[0] = 3;
    sp[1] = 0;
    if (arg0 != 0) {
        sp[0] = 0x3C;
        sp[1] = (u32)(arg0 >> 31);
        if (arg0 >> 31) {
            if (arg0 == 0x80000000ULL) {
                func_002ABAB8(sp);
                return 0xC1E0000000000000ULL;
            }
            sp10 = -(s64)arg0;
            var_5 = sp10;
            var_4 = sp[0];
            if ((u64)(-1ULL >> 4) < var_5) {
                var_6 = -1ULL >> 4;
                do {
                    temp_3 = var_5 * 2;
                    var_4--;
                    var_5 = temp_3;
                } while (var_6 >= temp_3);
                sp[0] = var_4;
                sp10 = temp_3;
            }
            func_002ABAB8(sp);
            return 0;
        } else {
            sp10 = arg0;
            var_5 = sp10;
            var_4 = sp[0];
            if ((u64)(-1ULL >> 4) < var_5) {
                var_6 = -1ULL >> 4;
                do {
                    temp_3 = var_5 * 2;
                    var_4--;
                    var_5 = temp_3;
                } while (var_6 >= temp_3);
                sp[0] = var_4;
                sp10 = temp_3;
            }
            func_002ABAB8(sp);
            return 0;
        }
    } else {
        sp[0] = 2;
    }
    func_002ABAB8(sp);
    return 0;
}
