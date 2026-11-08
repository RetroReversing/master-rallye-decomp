/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_002BC1E8(void *, s32);                 /* extern */
M2C_UNK func_002BC240(void *, s32, s32);            /* extern */

s32 func_002BC380(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4) {
    s32 temp_17;
    s32 temp_20;
    s32 var_21;
    void **temp_5;
    void **temp_6;
    void **temp_9_2;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_9;

    var_21 = 0;
    temp_5 = M2C_FIELD(arg0, void ***, 4);
    if (temp_5 != NULL) {
        temp_3 = *temp_5;
        temp_20 = M2C_FIELD(temp_3, s32 (**)(void *, void **), 0x24)(temp_5 + M2C_FIELD(temp_3, s16 *, 0x20), temp_5);
        func_002BC240(arg0, arg1, arg4);
        temp_17 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_17 != 0) {
            temp_9 = M2C_FIELD(arg0, void **, 8);
            temp_3_2 = M2C_FIELD(temp_9, void **, 8);
            var_21 = M2C_FIELD(temp_3_2, s32 (**)(void *, s32, s32, s32, s32, void *), 0x3C)(temp_9 + M2C_FIELD(temp_3_2, s16 *, 0x38), M2C_FIELD(arg0, s32 *, 0x20), temp_20, temp_17, arg4, temp_9);
            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(arg0, s32 *, 0x18) + temp_17);
            func_002BC1E8(arg0, arg4);
            if (var_21 != 0) {
                temp_9_2 = M2C_FIELD(arg0, void ***, 4);
                temp_3_3 = *temp_9_2;
                var_21 = M2C_FIELD(temp_3_3, s32 (**)(void *, s32, s32, s32, s32 *, void **), 0x1C)(temp_9_2 + M2C_FIELD(temp_3_3, s16 *, 0x18), temp_20, temp_17, arg2, arg3, temp_9_2);
                M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + *arg3);
            }
        }
        temp_6 = M2C_FIELD(arg0, void ***, 4);
        temp_2 = *temp_6;
        M2C_FIELD(temp_2, M2C_UNK (**)(void *, s32, void **), 0x2C)(temp_6 + M2C_FIELD(temp_2, s16 *, 0x28), temp_20, temp_6);
    } else {
        *arg3 = 0;
    }
    return var_21;
}
