/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

M2C_UNK (*func_002ABA80(M2C_UNK))();                /* extern */
s32 func_002B1FC0(s32);                             /* extern */
s32 func_003D4938(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_003D4F40(s32);                         /* extern */
extern M2C_UNK (*D_00437E58)();
extern M2C_UNK D_00439570;
extern M2C_UNK D_00485728;

void func_0032BEB0(s32 arg0) {
    M2C_UNK (*var_2)();

    do {
        var_2 = D_00437E58;
        if (var_2 == NULL) {
            func_003D4F40(func_003D4938(&D_00439570, &D_00485728));
            var_2 = func_002ABA80(1);
        }
        var_2();
    } while (func_002B1FC0(arg0) == 0);
}
