/* machine draft (m2c), tried by autopilot */
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

extern u16 D_0042DA10;
extern u16 D_0042DA12;

void func_00310EA8(void) {
    s32 temp_4;
    s32 temp_4_2;

    temp_4 = (s16) D_0042DA12 + 1;
    temp_4_2 = (temp_4 >= 4) ? 0 : temp_4;
    if (temp_4_2 != (s16) D_0042DA10) {
        D_0042DA12 = (u16) temp_4_2;
    }
}
