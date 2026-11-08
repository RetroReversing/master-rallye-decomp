extern void func_001DCDA8(void *);
extern u32 D_00477228[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001DCBE0(void *arg0) {
    s32 var_7;
    u32 temp_2;
    s32 temp_11;
    s32 temp_4;
    s32 var_8;
    s32 temp_2_2;
    s32 *var_7_2;
    s32 *var_5;
    s32 temp_2_3;

    var_7 = 0;
    temp_2 = *(u32 *)((u8 *)arg0 + 0x10);
    temp_11 = (s32)((u32)(temp_2 + (temp_2 >> 31)) >> 1);
    if (temp_11 > 0) {
        do {
            temp_4 = *(s32 *)((u8 *)arg0 + 0xC);
            var_8 = 0;
            temp_2_2 = var_7 * temp_4 * 4;
            var_7_2 = *(s32 **)((u8 *)arg0 + 8) + temp_2_2;
            var_5 = (*(s32 **)((u8 *)arg0 + 8) + ((temp_2 - 1) * temp_4 * 4)) - temp_2_2;
            if (temp_4 > 0) {
                do {
                    var_8 = var_8 + 1;
                    temp_2_3 = *var_7_2;
                    *var_7_2 = *var_5;
                    *var_5 = temp_2_3;
                    var_7_2 = var_7_2 + 1;
                    var_5 = var_5 + 1;
                } while (var_8 < temp_4);
            }
            var_7 = var_7 + 1;
        } while (var_7 < temp_11);
    }
}

void func_001DCC78(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 >= 0) {
        s32 temp_3 = *(s32 *)((u8 *)arg0 + 0xC);
        if (arg1 < temp_3 && arg2 >= 0 && arg2 < *(s32 *)((u8 *)arg0 + 0x10)) {
            *(s32 *)((u8 *)*(s32 **)((u8 *)arg0 + 8) + (((arg2 * temp_3) + arg1) * 4)) = arg3;
        }
    }
}

void func_001DCCC8(void *arg0, s32 arg1, void *arg2) {
    s32 var_7;
    s32 temp_4;
    void *var_3;
    void *var_6;

    var_6 = arg2;
    if (arg1 >= 0) {
        var_7 = 0;
        if (arg1 < *(s32 *)((u8 *)arg0 + 0x10)) {
            temp_4 = *(s32 *)((u8 *)arg0 + 0xC);
            var_3 = (u8 *)*(s32 **)((u8 *)arg0 + 8) + arg1 * temp_4 * 4;
            if (temp_4 > 0) {
                do {
                    var_7 = var_7 + 1;
                    *(u8 *)var_3 = *(u8 *)var_6;
                    var_3 = (u8 *)var_3 + 1;
                    var_6 = (u8 *)var_6 + 1;
                    *(u8 *)var_3 = *(u8 *)var_6;
                    var_3 = (u8 *)var_3 + 1;
                    var_6 = (u8 *)var_6 + 1;
                    *(u8 *)var_3 = *(u8 *)var_6;
                    var_3 = (u8 *)var_3 + 1;
                    var_6 = (u8 *)var_6 + 1;
                    *(u8 *)var_3 = (u8)0xFF;
                    var_3 = (u8 *)var_3 + 1;
                } while (var_7 < temp_4);
            }
        }
    }
}
