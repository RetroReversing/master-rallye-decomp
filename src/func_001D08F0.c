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

M2C_UNK func_001E33C8(s32, s32, M2C_UNK);           /* extern */
s32 func_001E38C8(s32, s32);                        /* extern */
M2C_UNK func_001E3D10(s32, s32, M2C_UNK);           /* extern */

void func_001D08F0(s32 arg0) {
    s32 temp_16;
    s32 temp_18;
    s32 temp_2;

    temp_18 = arg0 + 0xC;
    temp_2 = func_001E4280();
    if (func_001E38C8(temp_2, temp_18) == 0) {
        temp_16 = arg0 + 0x10;
        func_001E3D10(temp_2, temp_18, 1);
        func_001E33C8(temp_2, temp_18, 0);
        func_001E3D10(temp_2, temp_16, 0);
        func_001E33C8(temp_2, temp_16, 0);
    }
}
