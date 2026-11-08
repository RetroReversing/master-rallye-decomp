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

s32 func_001CE2F8();
s32 func_001D24B8();
s32 func_003F9698();
extern char D_00477C20[];
extern char D_00477C60[];

s32 func_001F5FB8(s32 arg0, void *arg1, s32 *arg2) {
    s32 *var_4;
    s32 temp_17;
    s32 temp_18;
    s32 temp_2;
    s32 var_2;

    temp_18 = arg1 + 0x14;
    *arg2 = 0;
    temp_17 = ~func_001D24B8(temp_18, 0, func_001CE2F8(temp_18), "$side(plus)") != 0;
    temp_2 = ~func_001D24B8(temp_18, 0, func_001CE2F8(temp_18), "$side(minus)") != 0;
    if (temp_17 != 0) {
        if (temp_2 != 0) {
            var_4 = &D_00477C20;
            goto block_5;
        }
        var_2 = 1;
        goto block_7;
    }
    var_2 = -1;
    if (temp_2 == 0) {
        var_4 = &D_00477C60;
block_5:
        func_003F9698(var_4, M2C_FIELD(arg1, s32 *, 0x14));
        return 0;
    }
block_7:
    *arg2 = var_2;
    return 1;
}
