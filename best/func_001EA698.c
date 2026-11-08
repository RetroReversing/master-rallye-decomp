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

void func_001EA698(void *arg0, s32 arg1, void *arg2) {
    s32 temp_3;
    s32 var_7;
    void *temp_9;
    void *var_2;
    void *var_4;
    void *var_6;

    var_4 = arg0;
    var_2 = arg2;
    if (var_4 != arg1) {
        do {
            temp_9 = var_4 + 0x18;
            if (var_2 != NULL) {
                var_6 = var_2;
                var_7 = 2;
                do {
                    var_7 -= 1;
                    M2C_FIELD(var_6, s32 *, 0) = (s32) M2C_FIELD(var_4, s32 *, 0);
                    temp_3 = M2C_FIELD(var_4, s32 *, 4);
                    var_4 += 8;
                    M2C_FIELD(var_6, s32 *, 4) = temp_3;
                    var_6 += 8;
                } while (var_7 != -1);
            }
            var_4 = temp_9;
            var_2 += 0x18;
        } while (var_4 != arg1);
    }
}
