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

M2C_UNK func_002B2028(void *, void *);              /* extern */
extern M2C_UNK D_0040E618;

void *func_001D0D38(void *arg0, void *arg1) {
    s32 temp_2;
    s32 var_3;
    void *temp_4;
    void *temp_4_2;
    void *temp_5;

    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) M2C_FIELD(arg1, f32 *, 0x18);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) M2C_FIELD(arg1, f32 *, 0x1C);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(arg1, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(arg1, f32 *, 0x28);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg1, f32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0x30);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg1, f32 *, 0x44);
    if ((arg1 + 0x48) != (arg0 + 0x48)) {
        temp_5 = M2C_FIELD(arg0, void **, 0x48);
        temp_4 = temp_5 - 0x10;
        temp_2 = M2C_FIELD(temp_4, s32 *, 8) - 1;
        M2C_FIELD(temp_4, s32 *, 8) = temp_2;
        if (temp_2 == 0) {
            if ((M2C_FIELD(temp_4, s32 *, 4) + 0x10) != 0) {
                func_002B2028(temp_4, temp_5);
            } else {
                M2C_FIELD(temp_5, void **, -0x10) = (void *) M2C_FIELD(&D_0040E618, void **, -4);
                M2C_FIELD(&D_0040E618, void **, -4) = temp_4;
            }
        }
        var_3 = M2C_FIELD(arg1, s32 *, 0x48);
        temp_4_2 = var_3 - 0x10;
        if (M2C_FIELD(temp_4_2, s32 *, 0xC) == 0) {
            M2C_FIELD(temp_4_2, s32 *, 8) = (s32) (M2C_FIELD(temp_4_2, s32 *, 8) + 1);
        } else {
            var_3 = func_00151930(temp_4_2);
        }
        M2C_FIELD(arg0, void **, 0x48) = (void *) var_3;
    }
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg1, f32 *, 0x4C);
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg1, f32 *, 0x50);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg1, f32 *, 0x54);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg1, f32 *, 0x58);
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) M2C_FIELD(arg1, f32 *, 0x5C);
    return arg0;
}
