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

M2C_UNK func_00221B88(void *, void *, s32, s32 *, void *, void *, void *, void *); /* extern */
void *func_00222CF8();                              /* extern */

void func_00221A40(void *arg0, void *arg1, s32 arg2) {
    s32 *temp_7;
    s32 temp_3_2;
    s32 temp_6;
    s32 temp_6_2;
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_2;
    void *temp_3;
    void *temp_3_3;
    void *temp_8;
    void *temp_9;

    if (arg2 != -1) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        M2C_FIELD(arg0, s32 *, 0x88) = 0;
        M2C_FIELD(arg0, s32 *, 0x90) = 0;
        temp_2 = func_00222CF8();
        temp_6 = M2C_FIELD(temp_2, s32 *, 0xC);
        temp_9 = arg1 + 0xC;
        temp_8 = arg0 + 0x38;
        temp_3 = arg0 + 0x20;
        M2C_FIELD(arg0, s32 *, 0x74) = temp_6;
        temp_10 = arg0 + 0x2C;
        temp_11 = arg1 + 0x18;
        temp_12 = arg0 + 0x44;
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
        M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_9, f32 *, 4);
        M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_9, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(temp_10, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(temp_10, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
        M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
        M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x54) = 1.0f;
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
        temp_3_2 = M2C_FIELD(temp_2, s32 *, 0);
        temp_7 = (arg2 * 0x170) + temp_3_2;
        temp_3_3 = temp_3_2 + (temp_6 * 0x170);
        M2C_FIELD(temp_3_3, s32 *, 0x128) = (s32) *temp_7;
        temp_6_2 = *temp_7;
        M2C_FIELD(temp_3_3, s32 *, 0x12C) = temp_6_2;
        M2C_FIELD(temp_3_3, f32 *, 0x120) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
        M2C_FIELD(temp_3_3, s32 *, 0x130) = 0;
        M2C_FIELD(temp_3_3, f32 *, 0x124) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
        M2C_FIELD(arg0, f32 *, 0xA0) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
        func_00221B88(arg0, temp_3, temp_6_2, temp_7, temp_8, temp_9, temp_10, temp_11);
    }
}
