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

M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK func_002B2028(M2C_UNK *);                   /* extern */
M2C_UNK func_00368E78(M2C_UNK **);                  /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */
extern M2C_UNK *D_0042E8E8;

void func_00368EE0(s32 arg0, s32 arg1) {
    M2C_UNK *var_2;

    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            var_2 = func_002B1FC0(0xC);
            if (var_2 == NULL) {
                var_2 = func_003D2910(0xC);
            }
            D_0042E8E8 = var_2;
            *var_2 = var_2;
            M2C_FIELD(D_0042E8E8, M2C_UNK **, 4) = (M2C_UNK *) D_0042E8E8;
            return;
        }
        func_00368E78(&D_0042E8E8);
        func_002B2028(D_0042E8E8);
    }
}
