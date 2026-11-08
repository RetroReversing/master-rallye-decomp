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

M2C_UNK *D_002AD408(M2C_UNK);                       /* extern */

void func_002B8248(void *arg0) {
    M2C_UNK *temp_2;
    M2C_UNK *temp_4;

    temp_2 = D_002AD408(0x10004);
    temp_4 = M2C_FIELD(arg0, M2C_UNK **, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = temp_2;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + 1);
    *temp_2 = temp_4;
}
