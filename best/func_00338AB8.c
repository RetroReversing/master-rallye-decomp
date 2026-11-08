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

f32 func_002004D0(void *);                          /* extern */
M2C_UNK func_002DD510(void *, s32, s32, s32, s32, M2C_UNK, f32); /* extern */
void *func_002DDA20();                              /* extern */
M2C_UNK func_0033FF78(void *, s32);                 /* extern */
M2C_UNK func_00343458(s32, void *, void *, void *, void *, void *); /* extern */
M2C_UNK func_0036FC18(void *, f32 *, f32 *, f32 *, f32 *, f32 *, f32, f32, f32, f32); /* extern */

void func_00338AB8(void *arg0, void *arg5) {
    f32 sp10;
    f32 sp20;
    f32 sp30;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    void *temp_16;
    void *temp_17;
    void *temp_19;
    void *temp_20;
    void *temp_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *var_9;

    var_9 = arg5;
    if ((M2C_FIELD(arg0, s32 *, 0x40C) ^ 1) != 0) {
        temp_20 = arg0 + 0x100;
        M2C_FIELD(arg0, s32 *, 0x40C) = 1;
        temp_19 = arg0 + 0xC0;
        if (M2C_FIELD(arg0, s32 *, 0x1D0) == 0) {
            M2C_FIELD(arg0, s32 *, 0x1D0) = 1;
            temp_16 = M2C_FIELD(arg0, void **, 0x34);
            temp_17 = func_002DDA20();
            func_002DD510(temp_17, M2C_FIELD(temp_16, s32 *, 0x80), M2C_FIELD(temp_16, s32 *, 0x84), M2C_FIELD(temp_16, s32 *, 0x88), M2C_FIELD(temp_16, s32 *, 0x8C), 1, func_002004D0(temp_16));
            func_0033FF78(temp_20, M2C_FIELD(func_002DDA20(), s32 *, 0x18));
            sp44 = 0.0f;
            sp4C = 0.0f;
            sp40 = sp44;
            sp48 = 0.0f;
            M2C_FIELD(&sp40, f32 *, 4) = 1.0f;
            sp4C = sp44;
            sp48 = sp44;
            sp10 = sp40;
            M2C_FIELD(&sp10, f32 *, 4) = sp44;
            M2C_FIELD(&sp10, f32 *, 8) = sp48;
            M2C_FIELD(&sp10, f32 *, 0xC) = sp4C;
            sp40 = sp44;
            M2C_FIELD(&sp40, f32 *, 8) = 1.0f;
            sp4C = sp44;
            sp20 = sp40;
            M2C_FIELD(&sp20, f32 *, 4) = sp44;
            M2C_FIELD(&sp20, f32 *, 8) = sp48;
            M2C_FIELD(&sp20, f32 *, 0xC) = sp4C;
            sp40 = sp44;
            sp48 = sp44;
            M2C_FIELD(&sp40, f32 *, 0xC) = 1.0f;
            sp30 = sp40;
            M2C_FIELD(&sp30, f32 *, 4) = sp44;
            M2C_FIELD(&sp30, f32 *, 8) = sp48;
            M2C_FIELD(&sp30, f32 *, 0xC) = sp4C;
            sp40 = sp44;
            M2C_FIELD(&sp40, f32 *, 8) = 1.0f;
            sp30 = sp40;
            M2C_FIELD(&sp30, f32 *, 4) = sp44;
            M2C_FIELD(&sp30, f32 *, 0xC) = 1.0f;
            M2C_FIELD(&sp30, f32 *, 8) = sp44;
            sp48 = -M2C_FIELD(&sp20, f32 *, 8);
            sp44 = -M2C_FIELD(&sp20, f32 *, 4);
            sp40 = -sp20;
            func_0036FC18(M2C_FIELD(arg0, void **, 0x410), &sp30, &sp40, &sp10, &sp40, &sp20, 1.0f, sp44, sp44, sp44);
            temp_3 = M2C_FIELD(arg0, void **, 0x410);
            temp_5 = arg0 + 0xD0;
            temp_7 = arg0 + 0xE0;
            var_9 = arg0 + 0xF0;
            temp_2 = temp_3 + 0x30;
            temp_4 = temp_3 + 0x40;
            temp_6 = temp_3 + 0x50;
            M2C_FIELD(arg0, f32 *, 0xC0) = (f32) M2C_FIELD(temp_3, f32 *, 0x30);
            temp_8 = temp_3 + 0x60;
            M2C_FIELD(temp_19, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
            M2C_FIELD(temp_19, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
            M2C_FIELD(temp_19, f32 *, 0xC) = (f32) M2C_FIELD(temp_2, f32 *, 0xC);
            M2C_FIELD(arg0, f32 *, 0xD0) = (f32) M2C_FIELD(temp_3, f32 *, 0x40);
            M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_4, f32 *, 4);
            M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_4, f32 *, 8);
            M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(temp_4, f32 *, 0xC);
            M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(temp_3, f32 *, 0x50);
            M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
            M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
            M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
            M2C_FIELD(arg0, f32 *, 0xF0) = (f32) M2C_FIELD(temp_3, f32 *, 0x60);
            M2C_FIELD(var_9, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
            M2C_FIELD(var_9, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
            M2C_FIELD(var_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_8, f32 *, 0xC);
        }
        func_00343458(M2C_FIELD(arg0, s32 *, 0x30), temp_19, temp_19, temp_20, temp_20, var_9);
    }
}
