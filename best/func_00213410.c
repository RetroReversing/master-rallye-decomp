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

s32 func_001D2488();
s32 *func_002B1FC0();
s32 *func_003D2910();

void func_00213410(s32 arg0, s32 **arg1, s32 *arg2, s32 arg3) {
    s32 *sp10;
    s32 *var_16;
    s32 *var_17;
    s32 *var_4;

    var_17 = arg2;
    if (var_17 != arg3) {
        do {
            sp10 = *arg1;
            var_16 = func_002B1FC0(0xC);
            var_4 = var_16 + 8;
            if (var_16 == NULL) {
                var_16 = func_003D2910(0xC);
                var_4 = var_16 + 8;
            }
            if (var_4 != NULL) {
                func_001D2488(var_4, var_17 + 8);
            }
            M2C_FIELD(var_16, s32 **, 0) = sp10;
            M2C_FIELD(var_16, s32 **, 4) = (s32 *) M2C_FIELD(sp10, s32 **, 4);
            *M2C_FIELD(sp10, s32 **, 4) = var_16;
            M2C_FIELD(sp10, s32 **, 4) = var_16;
            var_17 = *var_17;
        } while (var_17 != arg3);
    }
}
