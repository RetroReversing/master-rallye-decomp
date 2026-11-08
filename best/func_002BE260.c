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

void *func_002BE0D8(void *, void *, s32);           /* extern */
M2C_UNK func_002BEDD8(s32, M2C_UNK);                /* extern */
M2C_UNK func_002BEEB8(s32);                         /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */

s32 func_002BE260(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_17;
    s32 var_18;
    s32 var_2;
    void *temp_2;
    void *temp_2_2;

    var_18 = 0;
    func_0040AF58();
    temp_2 = func_002BE0D8(arg0, arg0 + 0x14, arg1);
    if (temp_2 != NULL) {
        var_18 = M2C_FIELD(temp_2, s32 *, 8);
    }
    func_0040AFA0();
    var_2 = var_18;
    if (var_18 == 0) {
        if (arg2 != 0) {
loop_5:
            func_0040AF58();
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
            func_0040AFA0();
            func_002BEEB8(M2C_FIELD(arg0, s32 *, 8));
            func_0040AF58();
            temp_17 = M2C_FIELD(arg0, s32 *, 0xC) - 1;
            M2C_FIELD(arg0, s32 *, 0xC) = temp_17;
            temp_2_2 = func_002BE0D8(arg0, arg0 + 0x14, arg1);
            if (temp_2_2 != NULL) {
                var_18 = M2C_FIELD(temp_2_2, s32 *, 8);
            }
            func_0040AFA0();
            var_2 = var_18;
            if (var_18 == 0) {
                if (temp_17 != 0) {
                    func_002BEDD8(M2C_FIELD(arg0, s32 *, 8), 1);
                }
                goto loop_5;
            }
        }
    }
    return var_2;
}
