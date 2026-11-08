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

void ***func_001D6E40();                            /* extern */
s32 func_002AD350(f32);                             /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32, s32);         /* extern */
extern M2C_UNK D_0047B0C8;

void func_00287930(void *arg1) {
    f32 temp_f0;
    f32 var_f20;
    f32 var_f21;
    s32 temp_17_2;
    void **temp_16;
    void *temp_17;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    var_f20 = 0.0f;
    temp_17 = M2C_FIELD(arg1, void **, 0x4C);
    temp_16 = *func_001D6E40();
    var_f21 = 0.0f;
    if (temp_17 != NULL) {
        if (temp_16 != NULL) {
            temp_3 = *temp_16;
            temp_3_2 = *temp_16;
            if (M2C_FIELD(temp_3, s32 (**)(void *), 0x8C)(temp_16 + M2C_FIELD(temp_3, s16 *, 0x88)) != 0) {
                var_f21 = -2.0f;
            }
            temp_3_3 = *temp_16;
            if (M2C_FIELD(temp_3_2, s32 (**)(void *), 0x94)(temp_16 + M2C_FIELD(temp_3_2, s16 *, 0x90)) != 0) {
                var_f21 = 2.0f;
            }
            temp_3_4 = *temp_16;
            if (M2C_FIELD(temp_3_3, s32 (**)(void *), 0x9C)(temp_16 + M2C_FIELD(temp_3_3, s16 *, 0x98)) != 0) {
                var_f20 = 2.0f;
            }
            if (M2C_FIELD(temp_3_4, s32 (**)(void *), 0x2C)(temp_16 + M2C_FIELD(temp_3_4, s16 *, 0x28)) != 0) {
                var_f20 = -2.0f;
            }
            if ((var_f21 != 0.0f) || (var_f20 != 0.0f)) {
                temp_f0 = M2C_FIELD(temp_17, f32 *, 0x50) + var_f21;
                M2C_FIELD(temp_17, f32 *, 0x50) = temp_f0;
                M2C_FIELD(temp_17, f32 *, 0x54) = (f32) (M2C_FIELD(temp_17, f32 *, 0x54) + var_f20);
                temp_17_2 = func_002AD350(temp_f0);
                func_003F9698(&D_0047B0C8, temp_17_2, func_002AD350(M2C_FIELD(temp_17, f32 *, 0x54)));
            }
        }
    }
}
