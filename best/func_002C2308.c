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

s32 func_002C2100(s32, M2C_UNK);                    /* extern */
M2C_UNK func_003F9698(M2C_UNK *, M2C_UNK *);        /* extern */
extern s32 D_00428F0C;
extern M2C_UNK D_00481408;
extern M2C_UNK D_00481428;

s32 func_002C2308(s32 arg0, void *arg2) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_5_2;
    s32 var_16;
    s32 var_23;
    s32 var_2;
    u32 temp_2;
    u32 temp_3;
    u32 temp_3_2;
    u32 temp_5;

    var_23 = 1;
    temp_3 = M2C_FIELD(arg2, u32 *, 0x58);
    var_16 = M2C_FIELD(arg2, s32 *, 0x50) - temp_3;
    M2C_FIELD(arg2, u32 *, 0x54) = temp_3;
    if (var_16 < 0) {
        var_16 += M2C_FIELD(arg2, s32 *, 0x4C);
    }
loop_6:
    var_2 = var_16 < 0x1000;
loop_7:
    if (var_2 != 0) {
        if (func_002C2100(arg0, 1) != 0) {
            var_16 = M2C_FIELD(arg2, s32 *, 0x50) - M2C_FIELD(arg2, u32 *, 0x58);
            var_2 = var_16 < 0x1000;
            if (var_16 < 0) {
                var_16 += M2C_FIELD(arg2, s32 *, 0x4C);
                goto loop_6;
            }
            goto loop_7;
        }
        D_00428F0C = 1;
        var_16 += 0xF;
        func_003F9698(&D_00481408, &D_00481428);
        var_23 = 0;
    }
    temp_5 = M2C_FIELD(arg2, u32 *, 0x54);
    temp_4 = var_16 & ~0xF;
    temp_4_2 = (temp_4 >= 0x1001) ? 0x1000 : temp_4;
    temp_2 = M2C_FIELD(arg2, s32 *, 0x48) + M2C_FIELD(arg2, s32 *, 0x4C);
    temp_4_3 = (temp_2 < (u32) (temp_5 + temp_4_2)) ? (temp_2 - temp_5) : temp_4_2;
    *(s32 *)0x1000B420 = (s32) ((temp_4_3 > -1) ? temp_4_3 : (temp_4_3 + 0xF)) >> 4;
    *(u32 *)0x1000B410 = M2C_FIELD(arg2, u32 *, 0x54);
    *(s32 *)0x1000B400 = 0x101;
    temp_5_2 = M2C_FIELD(arg2, s32 *, 0x4C);
    temp_3_2 = M2C_FIELD(arg2, u32 *, 0x54) + temp_4_3;
    M2C_FIELD(arg2, u32 *, 0x58) = temp_3_2;
    if (temp_3_2 >= (u32) (M2C_FIELD(arg2, s32 *, 0x48) + temp_5_2)) {
        M2C_FIELD(arg2, u32 *, 0x58) = (u32) (temp_3_2 - temp_5_2);
    }
    return var_23;
}
