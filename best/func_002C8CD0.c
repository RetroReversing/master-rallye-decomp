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

void *func_001D6DF8(s32, M2C_UNK);                  /* extern */
s32 func_001D6E40();                                /* extern */
M2C_UNK func_001E3EC0(s32, M2C_UNK *, s32);         /* extern */
M2C_UNK func_002C7E78(void *);                      /* extern */
M2C_UNK func_002C8E10(void *);                      /* extern */
extern M2C_UNK D_0049AEC8;

void func_002C8CD0(void *arg0) {
    s32 temp_16;
    s32 temp_16_2;
    s32 var_16;
    s32 var_18;
    void *temp_17;
    void *temp_4;

    var_16 = 0;
    if (M2C_FIELD(arg0, s32 *, 4) > 0) {
        var_18 = 0;
        do {
            temp_4 = var_18 + M2C_FIELD(arg0, s32 *, 0xC);
            if (M2C_FIELD(temp_4, s32 *, 0xC) != 0) {
                func_002C7E78(temp_4);
            }
            var_16 += 1;
            var_18 += 0x98;
        } while (var_16 < M2C_FIELD(arg0, s32 *, 4));
    }
    func_002C8E10(arg0);
    temp_17 = func_001D6DF8(func_001D6E40(), 0);
    temp_16 = M2C_FIELD(temp_17, s32 *, 8) != 0;
    temp_16_2 = (M2C_FIELD(func_001D6DF8(func_001D6E40(), 1), s32 *, 8) != 0) ? (temp_16 + 1) : temp_16;
    func_001E3EC0(func_001E4280(), &D_0049AEC8, temp_16_2);
}
