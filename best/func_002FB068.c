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

void func_002FB068(void *arg0, s32 arg1, void *arg2, void *arg3) {
    s32 *temp_3;
    s32 *temp_6;
    s32 temp_2;
    s32 var_5;
    u8 *var_3;
    u8 *var_4;
    u8 temp_2_3;
    void *temp_2_2;
    void *var_16;
    void *var_7;

    var_7 = arg3;
    var_16 = arg0;
    if (var_16 != arg1) {
        do {
            temp_6 = M2C_FIELD(var_16, s32 **, 0);
            var_4 = var_16 + 4;
            if (temp_6 != M2C_FIELD(arg2, s32 **, 0)) {
                if (temp_6 != NULL) {
                    temp_2 = M2C_FIELD(temp_6, s32 *, 0) - 1;
                    M2C_FIELD(temp_6, s32 *, 0) = temp_2;
                    if (temp_2 == 0) {
                        temp_2_2 = M2C_FIELD(temp_6, void **, 4);
                        M2C_FIELD(temp_2_2, M2C_UNK (**)(void *, M2C_UNK, s32 *, void *), 0xC)(temp_6 + M2C_FIELD(temp_2_2, s16 *, 8), 3, temp_6, var_7);
                    }
                }
                temp_3 = M2C_FIELD(arg2, s32 **, 0);
                M2C_FIELD(var_16, s32 **, 0) = temp_3;
                if (temp_3 != NULL) {
                    *temp_3 += 1;
                }
                var_4 = var_16 + 4;
            }
            var_5 = 0xFF;
            var_3 = arg2 + 4;
            var_7 = var_16 + 0x12C;
loop_9:
            temp_2_3 = *var_3;
            var_5 -= 1;
            var_3 += 1;
            *var_4 = temp_2_3;
            var_4 += 1;
            if (var_5 != -1) {
                goto loop_9;
            }
            M2C_FIELD(var_16, s32 *, 0x104) = (s32) M2C_FIELD(arg2, s32 *, 0x104);
            M2C_FIELD(var_16, s32 *, 0x108) = (s32) M2C_FIELD(arg2, s32 *, 0x108);
            M2C_FIELD(var_16, s32 *, 0x10C) = (s32) M2C_FIELD(arg2, s32 *, 0x10C);
            M2C_FIELD(var_16, s32 *, 0x110) = (s32) M2C_FIELD(arg2, s32 *, 0x110);
            M2C_FIELD(var_16, s32 *, 0x114) = (s32) M2C_FIELD(arg2, s32 *, 0x114);
            M2C_FIELD(var_16, s32 *, 0x118) = (s32) M2C_FIELD(arg2, s32 *, 0x118);
            M2C_FIELD(var_16, s32 *, 0x11C) = (s32) M2C_FIELD(arg2, s32 *, 0x11C);
            M2C_FIELD(var_16, s32 *, 0x120) = (s32) M2C_FIELD(arg2, s32 *, 0x120);
            M2C_FIELD(var_16, s32 *, 0x124) = (s32) M2C_FIELD(arg2, s32 *, 0x124);
            M2C_FIELD(var_16, s32 *, 0x128) = (s32) M2C_FIELD(arg2, s32 *, 0x128);
            var_16 = var_7;
        } while (var_16 != arg1);
    }
}
