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

M2C_UNK D_002AD390(s32);                            /* extern */
M2C_UNK func_001DF180(void *, s32);                 /* extern */
M2C_UNK func_002B2028(u32);                         /* extern */
extern M2C_UNK D_0040E618;

void func_0027B3C0(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 var_4;
    u32 temp_17;
    u32 temp_4;
    u32 var_16;
    void *temp_18;

    temp_18 = arg0 + 0x14;
    var_16 = M2C_FIELD(arg0, u32 *, 0x14);
    temp_17 = M2C_FIELD(temp_18, u32 *, 4);
    if (var_16 < temp_17) {
        var_4 = M2C_FIELD(var_16, s32 *, 4);
loop_2:
        var_16 += 8;
        D_002AD390(var_4);
        if (var_16 < temp_17) {
            var_4 = M2C_FIELD(var_16, s32 *, 4);
            goto loop_2;
        }
    }
    temp_4 = M2C_FIELD(arg0, u32 *, 0x14);
    temp_2 = (s32) (M2C_FIELD(temp_18, s32 *, 8) - temp_4) >> 3;
    if (temp_2 != 0) {
        if ((temp_2 * 8) != 0) {
            func_002B2028(temp_4);
        } else {
            M2C_FIELD(temp_4, u32 *, 0) = (u32) M2C_FIELD(&D_0040E618, u32 *, -4);
            M2C_FIELD(&D_0040E618, u32 *, -4) = temp_4;
        }
    }
    func_001DF180(arg0, arg1);
}
