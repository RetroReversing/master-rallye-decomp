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

M2C_UNK func_002A1380(s32);                         /* extern */
M2C_UNK func_002A13B8(s32);                         /* extern */
M2C_UNK func_002A13E0(s32);                         /* extern */
s32 func_002A1700();                                /* extern */
s32 func_003E84D8();                                /* extern */
M2C_UNK func_003ED400(s32);                         /* extern */

void func_003ED460(void) {
    s32 temp_17;
    s32 temp_2;

    temp_17 = func_003E84D8();
    temp_2 = func_002A1700();
    func_002A13B8(temp_2);
    func_002A13E0(temp_2);
    func_002A1380(temp_2);
    func_003ED400(temp_17);
}
