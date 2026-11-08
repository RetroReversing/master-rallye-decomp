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

M2C_UNK func_001266E8();                            /* extern */
M2C_UNK func_00128418(void *);                      /* extern */
M2C_UNK func_001285B0(void *);                      /* extern */
M2C_UNK func_00128B68(void *);                      /* extern */

void func_00126BC0(void *arg0) {
    func_001266E8();
    if (M2C_FIELD(arg0, s32 *, 0x14) == 6) {
        func_001285B0(arg0);
        return;
    }
    func_00128418(arg0);
    func_00128B68(arg0);
}
