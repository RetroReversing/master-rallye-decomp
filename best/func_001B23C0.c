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

f32 func_001B23C0(void *arg0) {
    void **temp_6;
    void *temp_2;

    temp_6 = M2C_FIELD(arg0, void ***, 0xC8);
    if (temp_6 != NULL) {
        temp_2 = *temp_6;
        return M2C_FIELD(temp_2, f32 (**)(void *, void *, void **), 0x1C)(temp_6 + M2C_FIELD(temp_2, s16 *, 0x18), arg0, temp_6);
    }
    return 0.51f;
}
