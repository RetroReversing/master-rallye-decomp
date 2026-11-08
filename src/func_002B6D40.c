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

M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
s32 func_00407130(s32);                             /* extern */
extern M2C_UNK D_0047F190;

void func_002B6D40(void *arg0, s32 arg1, s32 *arg2) {
    void *temp_3;

    if (func_00407130(arg1) != -1) {
        if (*arg2 != 1) {
            temp_3 = M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(temp_3, M2C_UNK (**)(void *), 0x5C)(arg0 + M2C_FIELD(temp_3, s16 *, 0x58));
        }
    } else {
        func_003F9698(&D_0047F190, arg1);
    }
}
