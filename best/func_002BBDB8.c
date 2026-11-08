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

s32 func_002BB070(M2C_UNK *);                       /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00428978;
extern M2C_UNK D_004802F0;

s32 func_002BBDB8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_21;
    u32 temp_3_2;
    u32 temp_4;
    void *temp_3;
    void *temp_9;
    void *var_16;

    var_21 = 0;
    if (func_002BB070(&D_00428978) != 0) {
        var_16 = (arg1 * 0xC) + &D_00428978;
    } else {
        var_16 = NULL;
    }
    if (var_16 != NULL) {
        temp_9 = M2C_FIELD(arg0, void **, 0x10);
        temp_3 = M2C_FIELD(temp_9, void **, 0x24);
        var_21 = M2C_FIELD(temp_3, s32 (**)(void *, void *, u32, s32, s32, void *), 0x1C)(temp_9 + M2C_FIELD(temp_3, s16 *, 0x18), M2C_FIELD(var_16, void **, 0), M2C_FIELD(var_16, u32 *, 8), arg2, arg3, temp_9);
        temp_3_2 = M2C_FIELD(var_16, u32 *, 8) + arg3;
        M2C_FIELD(var_16, u32 *, 8) = temp_3_2;
        temp_4 = M2C_UNALIGNED32(M2C_FIELD(M2C_FIELD(var_16, void **, 0), M2C_UNK *, 4));
        if (temp_4 < temp_3_2) {
            M2C_FIELD(var_16, u32 *, 8) = temp_4;
        }
    } else {
        func_003F9698(&D_004802F0);
    }
    return var_21;
}
