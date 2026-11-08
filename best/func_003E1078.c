/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

s32 func_003E1300(void *, s32, s32);                /* extern */
M2C_UNK func_003E14A8(void *);                      /* extern */
M2C_UNK func_003E16D0(void *, M2C_UNK *, s32);      /* extern */
u32 func_003E5670(void *);                          /* extern */
extern M2C_UNK D_00489A28;

s32 func_003E1078(void *arg0) {
    s32 temp_6;
    s32 var_18;
    s32 var_2;
    u32 var_19;
    void *temp_16;

    var_19 = 1;
    var_18 = 0;
    temp_16 = M2C_FIELD(arg0, void **, 0x40);
    temp_6 = M2C_FIELD(temp_16, s32 *, 0xD8);
    M2C_FIELD(temp_16, s32 *, 0) = 0;
    if (temp_6 & 0x3F) {
        func_003E16D0(temp_16, &D_00489A28, temp_6);
        return -1;
    }
    M2C_FIELD(temp_16, s32 *, 0x820) = 0;
loop_3:
    var_2 = var_19 < 5U;
    if (var_18 != -1) {
loop_4:
        var_19 = func_003E5670(temp_16);
        var_2 = var_19 < 5U;
        if (var_19 != 0) {
            var_2 = var_19 < 5U;
            if (M2C_FIELD(temp_16, s32 *, 0x174) != M2C_FIELD(temp_16, s32 *, 0xD4)) {
                var_2 = var_19 < 5U;
                if (M2C_FIELD(temp_16, s32 *, 0x848) != 0) {
                    goto loop_4;
                }
            }
        }
    }
    if (var_2 != 0) {
        switch (var_19) {
        case 0:
            func_003E14A8(arg0);
            M2C_FIELD(temp_16, s32 *, 0) = 1;
            break;
        case 1:
            M2C_FIELD(temp_16, s32 *, 0xA8) = 0;
            M2C_FIELD(temp_16, s32 *, 0xA4) = 0;
            M2C_FIELD(temp_16, s32 *, 0xA0) = 0;
            var_18 = func_003E1300(arg0, 0, M2C_FIELD(temp_16, s32 *, 0x94));
            M2C_FIELD(temp_16, s32 *, 0xA0) = (s32) (M2C_FIELD(temp_16, s32 *, 0xA0) + 1);
            break;
        case 2:
            var_18 = func_003E1300(arg0, M2C_FIELD(temp_16, s32 *, 0xA4), M2C_FIELD(temp_16, s32 *, 0x98));
            M2C_FIELD(temp_16, s32 *, 0xA4) = (s32) (M2C_FIELD(temp_16, s32 *, 0xA4) + 1);
            break;
        case 3:
        case 4:
            var_18 = func_003E1300(arg0, M2C_FIELD(temp_16, s32 *, 0xA8), M2C_FIELD(temp_16, s32 *, 0x9C));
            M2C_FIELD(temp_16, s32 *, 0xA8) = (s32) (M2C_FIELD(temp_16, s32 *, 0xA8) + 1);
            break;
        }
    }
    if (M2C_FIELD(temp_16, s32 *, 0x820) == 0) {
        if (M2C_FIELD(temp_16, s32 *, 0) != 0) {

        } else {
            goto loop_3;
        }
    }
    return 1;
}
