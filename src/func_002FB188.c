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

void *func_002FB188(void *arg0, s32 arg1, void *arg2) {
    s32 *temp_3;
    s32 var_5;
    s32 var_8;
    u8 *var_3;
    u8 *var_7;
    u8 temp_2;
    void *var_4;

    var_4 = arg0;
    var_5 = arg1;
    if (var_5 != 0) {
        do {
            var_5 -= 1;
            if (var_4 != NULL) {
                temp_3 = M2C_FIELD(arg2, s32 **, 0);
                M2C_FIELD(var_4, s32 **, 0) = temp_3;
                if (temp_3 != NULL) {
                    *temp_3 += 1;
                }
                var_7 = var_4 + 4;
                var_8 = 0xFF;
                var_3 = arg2 + 4;
                do {
                    temp_2 = *var_3;
                    var_8 -= 1;
                    var_3 += 1;
                    *var_7 = temp_2;
                    var_7 += 1;
                } while (var_8 != -1);
                M2C_FIELD(var_4, s32 *, 0x104) = (s32) M2C_FIELD(arg2, s32 *, 0x104);
                M2C_FIELD(var_4, s32 *, 0x108) = (s32) M2C_FIELD(arg2, s32 *, 0x108);
                M2C_FIELD(var_4, s32 *, 0x10C) = (s32) M2C_FIELD(arg2, s32 *, 0x10C);
                M2C_FIELD(var_4, s32 *, 0x110) = (s32) M2C_FIELD(arg2, s32 *, 0x110);
                M2C_FIELD(var_4, s32 *, 0x114) = (s32) M2C_FIELD(arg2, s32 *, 0x114);
                M2C_FIELD(var_4, s32 *, 0x118) = (s32) M2C_FIELD(arg2, s32 *, 0x118);
                M2C_FIELD(var_4, s32 *, 0x11C) = (s32) M2C_FIELD(arg2, s32 *, 0x11C);
                M2C_FIELD(var_4, s32 *, 0x120) = (s32) M2C_FIELD(arg2, s32 *, 0x120);
                M2C_FIELD(var_4, s32 *, 0x124) = (s32) M2C_FIELD(arg2, s32 *, 0x124);
                M2C_FIELD(var_4, s32 *, 0x128) = (s32) M2C_FIELD(arg2, s32 *, 0x128);
            }
            var_4 += 0x12C;
        } while (var_5 != 0);
    }
    return var_4;
}
