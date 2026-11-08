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

s32 func_002AD350(f32);                             /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32, s32, s32, s32, s32, M2C_UNK *); /* extern */
extern M2C_UNK D_00477890;
extern M2C_UNK D_00477898;
extern M2C_UNK D_004779E0;

void func_001F4D28(void *arg1) {
    M2C_UNK *var_10;
    s32 temp_18;
    s32 temp_19;
    s32 temp_20;
    s32 temp_21;
    s32 temp_9;
    void *temp_16;

    temp_16 = arg1 + 0x20;
    temp_21 = M2C_FIELD(arg1, s32 *, 0x14);
    temp_20 = func_002AD350(M2C_FIELD(arg1, f32 *, 0x20));
    temp_19 = func_002AD350(M2C_FIELD(temp_16, f32 *, 4));
    temp_18 = func_002AD350(M2C_FIELD(temp_16, f32 *, 8));
    temp_9 = func_002AD350(M2C_FIELD(temp_16, f32 *, 0xC));
    if (M2C_FIELD(arg1, s32 *, 0x18) != 0) {
        var_10 = &D_00477890;
    } else {
        var_10 = &D_00477898;
    }
    func_003F9698(&D_004779E0, temp_21, temp_20, temp_19, temp_18, temp_9, var_10);
}
