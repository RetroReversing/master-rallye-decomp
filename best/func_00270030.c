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

M2C_UNK func_001C6938(s32, s32);                    /* extern */
M2C_UNK func_002B2028(void *);                      /* extern */

void func_00270030(s32 arg0, void *arg1) {
    s32 var_5;
    void *temp_16;
    void *var_17;

    var_17 = arg1;
    if (var_17 != NULL) {
        var_5 = M2C_FIELD(var_17, s32 *, 0xC);
loop_2:
        func_001C6938(arg0, var_5);
        temp_16 = M2C_FIELD(var_17, void **, 8);
        func_002B2028(var_17);
        var_17 = temp_16;
        if (var_17 != NULL) {
            var_5 = M2C_FIELD(var_17, s32 *, 0xC);
            goto loop_2;
        }
    }
}
