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

s32 func_002AD350(M2C_UNK *, f32);                  /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */
s32 func_002BB070(M2C_UNK *);                       /* extern */
M2C_UNK func_002BB150(M2C_UNK *, s32, M2C_UNK *);   /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32, void *);      /* extern */
extern M2C_UNK D_00428978;
extern M2C_UNK D_00480328;
extern M2C_UNK D_00480350;

void func_002BBEA8(s32 arg1) {
    f32 var_f0;
    s32 temp_2;
    s32 temp_3;
    void *temp_3_2;
    void *var_16;

    if (func_002BB070(&D_00428978) != 0) {
        var_16 = (arg1 * 0xC) + &D_00428978;
    } else {
        var_16 = NULL;
    }
    if (var_16 != NULL) {
        temp_3 = M2C_FIELD(var_16, s32 *, 4);
        if ((temp_3 != 0) && (temp_3 != 0xFFFFFFFF)) {
            temp_3_2 = M2C_FIELD(var_16, void **, 0);
            temp_2 = M2C_UNALIGNED32(M2C_FIELD(temp_3_2, M2C_UNK *, 8));
            if (temp_2 >= 0) {
                var_f0 = (f32) temp_2;
            } else {
                var_f0 = 2.0f * (f32) ((temp_2 & 1) | ((u32) temp_2 >> 1));
            }
            func_003F9698(&D_00480328, func_002AD350(&D_00428978, var_f0 * 0.0000009536743f), temp_3_2 + 0x18);
            func_002B2028(M2C_FIELD(var_16, s32 *, 4));
            M2C_FIELD(var_16, s32 *, 4) = 0;
        }
    }
    func_002BB150(&D_00428978, arg1, &D_00480350);
}
