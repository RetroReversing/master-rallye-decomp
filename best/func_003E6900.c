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

s32 func_003E6328(void *, void *, s32, void *, s32); /* extern */
M2C_UNK func_003E63C8(void *, void *);              /* extern */
M2C_UNK func_003E6638(void *);                      /* extern */
M2C_UNK func_003E6660(void *, void *, void *, void *, void *); /* extern */
M2C_UNK func_003E71C8(void *, void *);              /* extern */

void func_003E6900(void *arg0, void *arg1, void *arg2) {
    s32 temp_3;
    s32 temp_6;
    s32 var_22;
    void *temp_7;
    void *temp_7_2;
    void *temp_7_3;
    void *var_19;
    void *var_20;

    var_22 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x174) == 2) {
        var_19 = arg1;
        var_20 = arg2;
        var_22 = 0x40;
    } else {
        var_19 = arg2;
        var_20 = arg1;
    }
    temp_7 = M2C_FIELD(arg0, void **, 0x858);
    func_003E6660(arg0, var_19, temp_7 + 0x10, temp_7 + 0x18, temp_7 + 0x20);
    temp_7_2 = M2C_FIELD(arg0, void **, 0x858);
    M2C_FIELD(arg0, s64 *, 0x88) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(temp_7_2, s32 *, 0x10);
    func_003E6660(arg0, var_20, temp_7_2 + 0x28, temp_7_2 + 0x30, temp_7_2 + 0x38);
    temp_7_3 = M2C_FIELD(arg0, void **, 0x858);
    M2C_FIELD(arg0, s64 *, 0x88) = 1;
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(temp_7_3, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) M2C_FIELD(var_19, s32 *, 0x5C);
    M2C_FIELD(temp_7_3, s64 *, 0x20) = (s64) (M2C_FIELD(temp_7_3, s64 *, 0x20) | var_22);
    temp_6 = M2C_FIELD(var_19, s32 *, 0x60);
    M2C_FIELD(temp_7_3, s64 *, 0x38) = (s64) (M2C_FIELD(temp_7_3, s64 *, 0x38) | var_22);
    M2C_FIELD(arg0, s32 *, 0xD0) = temp_6;
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(var_19, s32 *, 0x44);
    M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(var_20, s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(var_19, s32 *, 0x50);
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(var_20, s32 *, 0x54);
    if (func_003E6328(arg0, arg1, temp_6, temp_7_3, var_22) != 0) {
        temp_3 = M2C_FIELD(arg1, s32 *, 0x28);
        if (temp_3 == 1) {
            if (M2C_FIELD(arg2, s32 *, 0x28) == temp_3) {
                M2C_FIELD(arg1, s32 *, 0x10) = (s32) (M2C_FIELD(arg1, s32 *, 0x10) * 2);
                if (M2C_FIELD(arg0, s32 *, 0xB0) != 0) {
                    func_003E71C8(arg0, arg1);
                } else {
                    func_003E63C8(arg0, arg1);
                }
                M2C_FIELD(arg1, s32 *, 0x10) = (s32) ((s32) M2C_FIELD(arg1, s32 *, 0x10) >> 1);
                func_003E6638(arg0);
            }
        }
    }
}
