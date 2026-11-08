/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00437E18;

void func_003D2E60(M2C_UNK *arg0, u32 arg1) {
    M2C_UNK **temp_2;

    if (arg1 >= 0x81U) {
        func_002B2028(arg0);
        return;
    }
    temp_2 = ((((u32) (arg1 + 7) >> 3) - 1) * 4) + &D_00437E18;
    *arg0 = *temp_2;
    *temp_2 = arg0;
}
