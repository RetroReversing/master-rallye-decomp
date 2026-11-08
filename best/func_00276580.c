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

M2C_UNK func_002B2028(void *);                      /* extern */

s32 *func_00276580(s32 *arg0, void **arg2, s32 *arg3) {
    void *sp10;
    void *sp20;
    void **temp_4;
    void *temp_16;
    void *temp_2;

    if (*arg2 != *arg3) {
        __repair_rows: {
            temp_2 = *arg2;
            sp20 = temp_2;
            sp10 = temp_2;
            *arg2 = M2C_FIELD(temp_2, void **, 0);
            temp_4 = M2C_FIELD(temp_2, void ***, 4);
            temp_16 = M2C_FIELD(temp_2, void **, 0);
            *temp_4 = temp_16;
            M2C_FIELD(temp_16, void ***, 4) = temp_4;
            func_002B2028(sp10);
        }
if (*arg2 != *arg3) goto __repair_rows;
    }
    *arg0 = *arg3;
    return arg0;
}
