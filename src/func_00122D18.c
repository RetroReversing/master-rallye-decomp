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

M2C_UNK func_00122B98(void *);                      /* extern */
M2C_UNK func_00122C58(void *);                      /* extern */
M2C_UNK func_00122DD8(void *);                      /* extern */
s32 func_00193CC8(s32);                             /* extern */
s32 func_00194C40();                                /* extern */

void func_00122D18(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        if ((M2C_FIELD(arg0, s32 *, 0x10) > 0) && (func_00193CC8(func_00194C40()) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - 1);
            func_00122B98(arg0);
            func_00122DD8(arg0);
            func_00122C58(arg0);
        }
    } else if ((M2C_FIELD(arg0, s32 *, 0x10) < 4) && (func_00193CC8(func_00194C40()) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
        func_00122B98(arg0);
        func_00122DD8(arg0);
        func_00122C58(arg0);
    }
}
