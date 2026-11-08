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

M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_0047ED20;
extern M2C_UNK D_0047ED58;

s32 func_002B5E28(void *arg0) {
    s32 **var_16;
    s32 *var_5;
    s32 var_17;
    s32 var_18;
    void *temp_3;

    var_18 = 0;
    var_17 = 9;
    var_16 = arg0 + 0x2C;
    var_5 = M2C_FIELD(arg0, s32 **, 0x2C);
loop_1:
    if (var_5 != NULL) {
        temp_3 = M2C_FIELD(var_5, void **, 8);
        if (M2C_FIELD(temp_3, s32 (**)(void *, s32 *), 0x14)(var_5 + M2C_FIELD(temp_3, s16 *, 0x10), var_5) != 0) {
            var_18 = 1;
            func_003F9698(&D_0047ED20, **var_16);
        } else {
            func_003F9698(&D_0047ED58, **var_16);
        }
    }
    var_16 += 4;
    var_17 -= 1;
    if (var_17 >= 0) {
        var_5 = *var_16;
        goto loop_1;
    }
    return var_18;
}
