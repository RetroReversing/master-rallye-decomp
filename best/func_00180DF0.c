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

void *func_001E3820(s32, s32, M2C_UNK *);           /* extern */
M2C_UNK func_001E3EC0(s32, s32, s32);               /* extern */
extern M2C_UNK D_0040E698;

void func_00180DF0(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_19;
    s32 temp_3;
    s32 var_20;
    void *temp_16;
    void *temp_17;
    void *temp_21;
    void *temp_2;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
    if (M2C_FIELD(arg0, s32 *, 0x10) & 1) {
        var_20 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x30) > 0) {
            temp_21 = arg0 + 0x18;
            do {
                temp_19 = var_20 * 4;
                temp_2 = func_001E3820(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x2C) + temp_19, &D_0040E698);
                if (temp_2 != NULL) {
                    temp_16 = M2C_FIELD(temp_2, void **, 8);
                    temp_17 = temp_16 + 0xA8;
                    func_001E3650(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x24) + temp_19);
                    temp_f0 = M2C_FIELD(arg0, f32 *, 0x18) - M2C_FIELD(temp_16, f32 *, 0xA8);
                    temp_f2 = M2C_FIELD(temp_21, f32 *, 4) - M2C_FIELD(temp_17, f32 *, 4);
                    temp_f1 = M2C_FIELD(temp_21, f32 *, 8) - M2C_FIELD(temp_17, f32 *, 8);
                    temp_3 = func_001E3650(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x28) + temp_19);
                    if (((temp_f0 * temp_f0) + (temp_f2 * temp_f2) + (temp_f1 * temp_f1)) < M2C_FIELD(arg0, f32 *, 0x14)) {
                        func_001E3EC0(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x24) + temp_19, M2C_FIELD(arg0, s32 *, 0xC));
                        func_001E3EC0(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x28) + temp_19, M2C_FIELD(arg0, s32 *, 0x10));
                    } else if (temp_3 == M2C_FIELD(arg0, s32 *, 0x10)) {
                        func_001E3EC0(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x24) + temp_19, -1);
                        func_001E3EC0(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x28) + temp_19, -1);
                    }
                }
                var_20 += 1;
            } while (var_20 < M2C_FIELD(arg0, s32 *, 0x30));
        }
    }
}
