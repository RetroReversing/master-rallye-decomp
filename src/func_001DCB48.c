extern u32 D_00477228[];
extern void func_001DCDA8(void *);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

s32 func_001DC950(void *arg0) {
    s32 *base = *(s32 **)((u8 *)arg0 + 8);
    s32 field10 = *(s32 *)((u8 *)arg0 + 0x10);
    s32 temp13 = *(s32 *)((u8 *)arg0 + 0xC);
    s32 var_9 = 1;
    s32 var_7 = 0;
    if (field10 > 0) {
        do {
            s32 var_5 = 0;
            if (temp13 > 0 && var_9 != 0) {
                s32 ac1 = var_7 * temp13;
                do {
                    s32 offset = (ac1 + var_5) * 4;
                    var_5++;
                    u8 byte_val = *(u8 *)((u8 *)base + offset + 3);
                    if (byte_val < 0x10) {
                        var_9 = 0;
                    }
                    if (var_5 >= temp13) break;
                    if (var_9 == 0) break;
                } while (1);
            }
            var_7++;
        } while (var_7 < field10 && var_9 != 0);
    }
    return var_9;
}

s32 func_001DC9E0(void *arg0) {
    s32 *base = *(s32 **)((u8 *)arg0 + 8);
    s32 field10 = *(s32 *)((u8 *)arg0 + 0x10);
    s32 temp14 = *(s32 *)((u8 *)arg0 + 0xC);
    s32 var_9 = 1;
    s32 var_7 = 0;
    if (field10 > 0) {
        do {
            s32 var_5 = 0;
            if (temp14 > 0 && var_9 != 0) {
                s32 var_3 = var_7 * temp14;
                do {
                    s32 temp_2 = (var_3 + var_5) * 4;
                    var_5++;
                    u8 byte_val = *(u8 *)((u8 *)base + temp_2 + 3);
                    if (byte_val > 0xEF) {
                        var_9 = 0;
                    }
                    if (var_5 < temp14) {
                        if (var_9 != 0) {
                            var_3 = var_7 * temp14;
                            continue;
                        }
                    }
                    break;
                } while (1);
            }
            var_7++;
        } while (var_7 < field10 && var_9 != 0);
    }
    return var_9;
}

void *func_001DCB48(void *arg0) {
    *(s32 *)arg0 = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(u32 *)((u8 *)arg0 + 4) = (u32)&D_00477228;
    func_001DCDA8(arg0);
    return arg0;
}
