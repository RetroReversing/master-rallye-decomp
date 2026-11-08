void func_003E3650(void *arg0) {
}

void func_003E3CA8(void *arg0, void *arg1) {
}

void func_003E4BC8(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_4 = *arg0;
    s32 temp_9 = 0x10 << arg1;
    s32 var_4 = arg4 ? (temp_4 >> 1) : temp_4;
    if (arg2 > 0) {
        var_4 = var_4 + 1 + (((arg2 - 1) << arg1) + arg3);
        if (var_4 < temp_9) {
            if (arg4) {
                *arg0 = var_4 * 2;
            } else {
                *arg0 = var_4;
            }
            return;
        }
        var_4 -= temp_9 * 2;
    } else if (arg2 < 0) {
        var_4 = (var_4 - 1) - ((~arg2 << arg1) + arg3);
        if (var_4 >= -temp_9) {
            if (arg4) {
                var_4 = var_4 * 2;
            }
            *arg0 = var_4;
            return;
        }
        var_4 += temp_9 * 2;
    }
    if (arg4) {
        var_4 = var_4 * 2;
    }
    *arg0 = var_4;
}

extern u32 D_0043AF40[];
void func_003E4F40(void *arg0, u32 arg1) {
    *(volatile u32*)0x10002000 = arg1;
    *(s32*)((u8*)arg0 + 0x818) = D_0043AF40[arg1 >> 28];
}
