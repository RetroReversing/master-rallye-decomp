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

M2C_UNK func_00342B90(void *, s32, s32);            /* extern */
extern s32 D_0042DE00;
extern M2C_UNK D_0042E230;
extern M2C_UNK D_0042E270;

void func_003432B8(s32 arg0, void *arg1, void *arg2) {
    void *temp_10;
    void *temp_11;
    void *temp_12;
    void *temp_13;
    void *temp_14;
    void *temp_15;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8;
    void *temp_9;

    func_00342B90(arg2, arg0, arg0 + 0x40);
    temp_5 = arg1 + 0x10;
    M2C_FIELD(&D_0042E230, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    temp_4 = &D_0042E230 + 0x10;
    temp_6 = arg1 + 0x20;
    temp_7 = &D_0042E230 + 0x20;
    temp_8 = arg1 + 0x30;
    temp_9 = &D_0042E230 + 0x30;
    M2C_FIELD(&D_0042E230, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    temp_10 = arg2 + 0x10;
    temp_11 = &D_0042E270 + 0x10;
    temp_12 = arg2 + 0x20;
    temp_13 = &D_0042E270 + 0x20;
    M2C_FIELD(&D_0042E230, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    temp_14 = arg2 + 0x30;
    temp_15 = &D_0042E270 + 0x30;
    M2C_FIELD(&D_0042E230, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(&D_0042E230, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 0xC) = (f32) M2C_FIELD(temp_5, f32 *, 0xC);
    M2C_FIELD(&D_0042E230, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_6, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_6, f32 *, 8);
    M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_6, f32 *, 0xC);
    M2C_FIELD(&D_0042E230, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(temp_9, f32 *, 4) = (f32) M2C_FIELD(temp_8, f32 *, 4);
    M2C_FIELD(temp_9, f32 *, 8) = (f32) M2C_FIELD(temp_8, f32 *, 8);
    M2C_FIELD(temp_9, f32 *, 0xC) = (f32) M2C_FIELD(temp_8, f32 *, 0xC);
    M2C_FIELD(&D_0042E270, f32 *, 0) = (f32) M2C_FIELD(arg2, f32 *, 0);
    M2C_FIELD(&D_0042E270, f32 *, 4) = (f32) M2C_FIELD(arg2, f32 *, 4);
    M2C_FIELD(&D_0042E270, f32 *, 8) = (f32) M2C_FIELD(arg2, f32 *, 8);
    M2C_FIELD(&D_0042E270, f32 *, 0xC) = (f32) M2C_FIELD(arg2, f32 *, 0xC);
    M2C_FIELD(&D_0042E270, f32 *, 0x10) = (f32) M2C_FIELD(arg2, f32 *, 0x10);
    M2C_FIELD(temp_11, f32 *, 4) = (f32) M2C_FIELD(temp_10, f32 *, 4);
    M2C_FIELD(temp_11, f32 *, 8) = (f32) M2C_FIELD(temp_10, f32 *, 8);
    M2C_FIELD(temp_11, f32 *, 0xC) = (f32) M2C_FIELD(temp_10, f32 *, 0xC);
    M2C_FIELD(&D_0042E270, f32 *, 0x20) = (f32) M2C_FIELD(arg2, f32 *, 0x20);
    M2C_FIELD(temp_13, f32 *, 4) = (f32) M2C_FIELD(temp_12, f32 *, 4);
    M2C_FIELD(temp_13, f32 *, 8) = (f32) M2C_FIELD(temp_12, f32 *, 8);
    M2C_FIELD(temp_13, f32 *, 0xC) = (f32) M2C_FIELD(temp_12, f32 *, 0xC);
    M2C_FIELD(&D_0042E270, f32 *, 0x30) = (f32) M2C_FIELD(arg2, f32 *, 0x30);
    M2C_FIELD(temp_15, f32 *, 4) = (f32) M2C_FIELD(temp_14, f32 *, 4);
    M2C_FIELD(temp_15, f32 *, 8) = (f32) M2C_FIELD(temp_14, f32 *, 8);
    D_0042DE00 += 1;
    M2C_FIELD(temp_15, f32 *, 0xC) = (f32) M2C_FIELD(temp_14, f32 *, 0xC);
}
