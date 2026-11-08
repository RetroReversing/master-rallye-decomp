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

s32 D_002AD408(M2C_UNK);                            /* extern */
void *func_002A28E8(s32);                           /* extern */

void func_002A2AB8(void *arg0) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_2;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    temp_2 = func_002A28E8(D_002AD408(0x70));
    temp_5 = arg0 + 0x10;
    temp_6 = temp_2 + 0x10;
    M2C_FIELD(temp_2, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    temp_7 = arg0 + 0x20;
    temp_8 = temp_2 + 0x20;
    temp_10 = arg0 + 0x30;
    temp_9 = temp_2 + 0x30;
    temp_11 = arg0 + 0x40;
    temp_12 = temp_2 + 0x40;
    M2C_FIELD(temp_2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
    temp_13 = arg0 + 0x50;
    temp_14 = temp_2 + 0x50;
    M2C_FIELD(temp_2, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(temp_2, f32 *, 0x10) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(temp_5, f32 *, 0xC);
    M2C_FIELD(temp_2, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(temp_8, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
    M2C_FIELD(temp_8, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
    M2C_FIELD(temp_8, f32 *, 0xC) = (f32) M2C_FIELD(temp_7, f32 *, 0xC);
    M2C_FIELD(temp_2, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(temp_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_10, f32 *, 0xC);
    M2C_FIELD(temp_2, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(temp_12, f32 *, 4) = (f32) M2C_FIELD(temp_11, f32 *, 4);
    M2C_FIELD(temp_12, f32 *, 8) = (f32) M2C_FIELD(temp_11, f32 *, 8);
    M2C_FIELD(temp_12, f32 *, 0xC) = (f32) M2C_FIELD(temp_11, f32 *, 0xC);
    M2C_FIELD(temp_2, f32 *, 0x50) = (f32) M2C_FIELD(arg0, f32 *, 0x50);
    M2C_FIELD(temp_14, f32 *, 4) = (f32) M2C_FIELD(temp_13, f32 *, 4);
    M2C_FIELD(temp_14, f32 *, 8) = (f32) M2C_FIELD(temp_13, f32 *, 8);
    M2C_FIELD(temp_14, f32 *, 0xC) = (f32) M2C_FIELD(temp_13, f32 *, 0xC);
    M2C_FIELD(temp_2, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
}
