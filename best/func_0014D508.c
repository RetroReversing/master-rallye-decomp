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

M2C_UNK func_0014D5E8(void *, s32);                 /* extern */

void func_0014D508(void *arg0, s32 arg1) {
    s32 temp_3;
    s32 temp_5;
    s32 var_18;
    u32 var_16;
    void *temp_4;

    temp_4 = arg0 + 0x10;
    var_18 = 1;
    var_16 = 0;
    if (((s32) (M2C_FIELD(temp_4, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x10)) >> 2) != 0) {
        __repair_rows: {
            temp_5 = var_16 * 4;
            var_16 += 1;
            var_18 *= func_001E3650(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x10) + temp_5) == 3;
        }
if (var_16 < (u32) ((s32) (M2C_FIELD(temp_4, s32 *, 4) - M2C_FIELD(arg0, s32 *, 0x10)) >> 2)) goto __repair_rows;
    }
    if (var_18 != 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x48);
        if (temp_3 >= 0x3D) {
            func_0014D5E8(arg0, arg1);
        } else {
            M2C_FIELD(arg0, s32 *, 0x48) = (s32) (temp_3 + 1);
        }
    }
}
