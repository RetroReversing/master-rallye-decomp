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

M2C_UNK func_00283720(void *);                      /* extern */
M2C_UNK func_00289958(void *, s32, void *, void *); /* extern */

void func_00283678(void *arg0, s32 arg1) {
    void *temp_2;
    void *temp_3;
    void *temp_6;
    void *temp_7;

    if (func_001E3650(func_001E4280(), arg0 + 0x74) <= 0) {
        if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
            func_00283720(arg0);
        }
        temp_2 = arg0 + 0x5C;
        temp_3 = arg0 + 0x2C;
        temp_7 = arg0 + 0x68;
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) M2C_FIELD(arg0, f32 *, 0x5C);
        temp_6 = arg0 + 0x38;
        M2C_FIELD(temp_3, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
        M2C_FIELD(temp_3, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x68);
        M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_7, f32 *, 4);
        M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_7, f32 *, 8);
        func_00289958(arg0 + 0x14, arg1, temp_6, temp_7);
    }
}
