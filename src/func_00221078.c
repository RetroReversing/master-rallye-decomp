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

void func_00221078(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 temp_6;
    void *temp_2_2;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;
    void *temp_6_2;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_3 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_3 >= 0) {
        temp_6 = temp_3 - 1;
        if (arg1 < temp_3) {
            M2C_FIELD(arg0, s32 *, 0x10) = temp_6;
            if (arg1 != temp_6) {
                temp_2 = M2C_FIELD(arg0, s32 *, 0x80);
                temp_4 = (arg1 * 0x60) + temp_2;
                temp_3_2 = (temp_6 * 0x60) + temp_2;
                temp_6_2 = temp_4 + 0x18;
                temp_2_2 = temp_3_2 + 0xC;
                temp_5 = temp_4 + 0xC;
                temp_7 = temp_3_2 + 0x18;
                M2C_FIELD(temp_4, f32 *, 0) = (f32) M2C_FIELD(temp_3_2, f32 *, 0);
                temp_8 = temp_3_2 + 0x24;
                temp_9 = temp_4 + 0x24;
                M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
                M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
                M2C_FIELD(temp_4, f32 *, 0xC) = (f32) M2C_FIELD(temp_3_2, f32 *, 0xC);
                M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(temp_2_2, f32 *, 4);
                M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(temp_2_2, f32 *, 8);
                M2C_FIELD(temp_4, f32 *, 0x18) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x18);
                M2C_FIELD(temp_6_2, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
                M2C_FIELD(temp_6_2, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
                M2C_FIELD(temp_4, f32 *, 0x24) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x24);
                M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
                M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
                M2C_FIELD(temp_4, f32 *, 0x30) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x30);
                M2C_FIELD(temp_4, f32 *, 0x34) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x34);
                M2C_FIELD(temp_4, f32 *, 0x38) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x38);
                M2C_FIELD(temp_4, f32 *, 0x3C) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x3C);
                M2C_FIELD(temp_4, f32 *, 0x40) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x40);
                M2C_FIELD(temp_4, f32 *, 0x44) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x44);
                M2C_FIELD(temp_4, f32 *, 0x48) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x48);
                M2C_FIELD(temp_4, s32 *, 0x4C) = (s32) M2C_FIELD(temp_3_2, s32 *, 0x4C);
                M2C_FIELD(temp_4, f32 *, 0x50) = (f32) M2C_FIELD(temp_3_2, f32 *, 0x50);
                M2C_FIELD(temp_4, s32 *, 0x54) = (s32) M2C_FIELD(temp_3_2, s32 *, 0x54);
            }
        }
    }
}
