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

extern s32 *D_0049BC68;
extern s32 *D_0049BC6C;
extern s32 *D_0049BC70;

void func_003CCAC8(s32 arg0) {
    s32 temp_4;

    temp_4 = arg0 | 0x20000000;
    if (D_0049BC68 != NULL) {
        *D_0049BC68 = M2C_FIELD(temp_4, s32 *, 0);
    }
    if (D_0049BC6C != NULL) {
        *D_0049BC6C = M2C_FIELD(temp_4, s32 *, 4);
    }
    if (D_0049BC70 != NULL) {
        *D_0049BC70 = M2C_FIELD(temp_4, s32 *, 0x90);
    }
}
