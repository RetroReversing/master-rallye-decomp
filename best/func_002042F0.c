void func_00200250(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(f32 *)((s8 *)arg0 + 0x1C) = 1.0f;
    *(s32 *)((s8 *)arg0 + 8) = 1;
}

void func_002042F0(void *arg0, s32 arg1, s32 arg2) {
    s32 var_7;
    s32 temp_2;
    s32 temp_4;
    s32 temp_5;
    s32 temp_10;
    s32 temp_11;
    s32 temp_13;
    f32 temp_f1;
    f32 *temp_2_2;
    f32 *temp_3;

    if (arg1 != arg2) {
        var_7 = 0;
        if (arg2 >= 0) {
            temp_11 = (s32) (((*(s32 *)((s8 *)arg0 + 4)) - (*(s32 *)((s8 *)arg0 + 0))) / 3);
            temp_13 = arg2 * 4;
            if (temp_11 > 0) {
                temp_10 = arg2 * 12;
                do {
                    temp_4 = *(s32 *)((s8 *)arg0 + 0);
                    temp_5 = var_7 * 4;
                    var_7 = var_7 + 1;
                    temp_3 = (f32 *)((s8 *)temp_4 + arg1 * 12 + temp_5);
                    temp_f1 = *temp_3;
                    *temp_3 = *(f32 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0)) + temp_10 + temp_5);
                    *(f32 *)((s8 *)(*(s32 *)((s8 *)arg0 + 0)) + temp_10 + temp_5) = temp_f1;
                } while (var_7 < temp_11);
            }
            temp_2 = *(s32 *)((s8 *)arg0 + 0xC);
            temp_2_2 = (f32 *)((s8 *)temp_2 + arg1 * 4);
            temp_f1 = *temp_2_2;
            *temp_2_2 = *(f32 *)((s8 *)temp_2 + arg2 * 4);
            *(f32 *)((s8 *)temp_2 + arg2 * 4) = temp_f1;
        }
    }
}

void func_00204140(void);
void func_002043B0(void *, s32);
s32 func_00204270(void *, s32);
void func_002042F0(void *, s32, s32);
void func_00156C38(void *, s32);
void func_002029B8(void *, s32);

void func_002044C8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_3;
    s32 var_18;
    s32 var_5;

    func_00204140();
    var_18 = 0;
    func_002029B8(arg0, arg1);
    func_00156C38((s8 *)arg0 + 0xC, arg2);
    temp_3 = (s32) (((*(s32 *)((s8 *)arg0 + 4)) - (*(s32 *)((s8 *)arg0 + 0))) / 3) - 1;
    if (temp_3 > 0) {
        var_5 = 0;
        do {
            func_002042F0(arg0, var_18, func_00204270(arg0, var_5));
            func_002043B0(arg0, var_18);
            var_18 = var_18 + 1;
            var_5 = var_18;
        } while (var_18 < temp_3);
    }
}

void func_003F3E80(f32 *, f32);

void func_00204588(f32 *arg1) {
    f32 *var_5;
    f32 temp_f0;
    f32 var_f12;
    s32 var_2;

    var_5 = arg1;
    var_f12 = 0.0f;
    var_2 = (s32) (((*(s32 *)((s8 *)arg1 + 4)) - (*(s32 *)((s8 *)arg1 + 0))) / 4);
    if (var_2 > 0) {
        var_5 = (f32 *)((s8 *)arg1);
        do {
            temp_f0 = *var_5;
            var_2 = var_2 - 1;
            var_5 = var_5 + 1;
            var_f12 = var_f12 + (temp_f0 * temp_f0);
        } while (var_2 != 0);
    }
    if (var_f12 == var_f12) {
        func_003F3E80((f32 *)((s8 *)arg1), var_f12);
    }
}
