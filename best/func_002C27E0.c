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

M2C_UNK D_002AD390(M2C_UNK **);                     /* extern */
M2C_UNK func_002C1C80(void *, M2C_UNK);             /* extern */
M2C_UNK func_002C2910();                            /* extern */
extern M2C_UNK D_004815E8;
extern M2C_UNK D_00481660;

void func_002C27E0(M2C_UNK **arg0, s32 arg1) {
    *arg0 = &D_004815E8;
    func_002C2910();
    func_002C1C80(arg0 + 0x1C, 2);
    *arg0 = &D_00481660;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
