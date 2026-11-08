/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
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

M2C_UNK D_002AD530(s32);                            /* extern */
s32 D_002AD5A8(s32);                                /* extern */
M2C_UNK func_003F931C(s32, s32, s32);               /* extern */
M2C_UNK func_003FA8A4(s32, s32);                    /* extern */
s32 func_003FA9B8(s32);                             /* extern */

void func_001D27F8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_18;
    s32 temp_18_2;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_4;
    s32 temp_4_2;

    temp_4 = *arg0;
    if (temp_4 == 0) {
        temp_2 = D_002AD5A8(func_003FA9B8(arg2) + 1);
        *arg0 = temp_2;
        func_003FA8A4(temp_2, arg2);
        return;
    }
    temp_16 = func_003FA9B8(temp_4);
    temp_18 = (arg1 <= -1) ? 0 : arg1;
    temp_18_2 = (temp_16 < temp_18) ? temp_16 : temp_18;
    temp_2_2 = func_003FA9B8(arg2);
    temp_2_3 = D_002AD5A8(temp_16 + temp_2_2 + 1);
    func_003F931C(temp_2_3, *arg0, temp_18_2);
    temp_16_2 = temp_2_3 + temp_18_2;
    func_003F931C(temp_16_2, arg2, temp_2_2);
    func_003FA8A4(temp_16_2 + temp_2_2, *arg0 + temp_18_2);
    temp_4_2 = *arg0;
    if (temp_4_2 != 0) {
        D_002AD530(temp_4_2);
    }
    *arg0 = temp_2_3;
}
