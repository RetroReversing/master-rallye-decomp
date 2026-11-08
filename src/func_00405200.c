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

M2C_UNK RemoveDmacHandler_2(M2C_UNK, s32);                /* extern */
M2C_UNK func_00403A80(M2C_UNK);                     /* extern */
extern s32 D_0044111C;
extern s32 D_0049E554;

void func_00405200(void) {
    func_00403A80(5);
    RemoveDmacHandler_2(5, D_0049E554);
    D_0044111C = 0;
}
