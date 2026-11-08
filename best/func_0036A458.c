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

M2C_UNK func_00278338(s32, void *, void *, void **, void *, void *); /* extern */

void func_0036A458(s32 arg0, void *arg1, void *arg2, f32 fparg0) {
    f32 temp_f1;
    s32 var_2;
    void **temp_8;
    void *temp_2;
    void *temp_3;
    void *temp_3_2;
    void *temp_4;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_8_2;
    void *temp_9;

    temp_9 = M2C_FIELD(arg1, void **, 0x4C);
    if (((s64) (M2C_FIELD(temp_9, s64 *, 0x78) << 0x1E) >> 0x20) & 1) {
        temp_f1 = fparg0 - 1.0f;
        var_2 = 0;
        if ((-0.0000011920929f <= temp_f1) && (temp_f1 <= 0.0000011920929f)) {
            var_2 = 1;
        }
        if (var_2 == 0) {
            temp_8 = M2C_FIELD(temp_9, void ***, 0x60);
            if (temp_8 != NULL) {
                temp_3 = *temp_8;
                M2C_FIELD(temp_3, M2C_UNK (**)(void *, s32, void *, void **, void *, void *), 0x14)(temp_8 + M2C_FIELD(temp_3, s16 *, 0x10), arg0 + 0x90, arg2, temp_8, temp_9, arg2);
                return;
            }
            func_00278338(arg0 + 0x90, temp_9 + 0x20, arg2, temp_8, temp_9, arg2);
            return;
        }
        goto block_8;
    }
block_8:
    temp_2 = temp_9 + 0x20;
    temp_3_2 = temp_9 + 0x30;
    temp_4 = arg2 + 0x10;
    M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(temp_9, f32 *, 0x20);
    temp_5 = temp_9 + 0x40;
    temp_6 = arg2 + 0x20;
    temp_8_2 = temp_9 + 0x50;
    temp_7 = arg2 + 0x30;
    M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(temp_2, f32 *, 4);
    M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(temp_2, f32 *, 8);
    M2C_FIELD(arg2, f32 *, 0xC) = (f32) M2C_FIELD(temp_2, f32 *, 0xC);
    M2C_FIELD(arg2, f32 *, 0x10) = (f32) M2C_FIELD(temp_9, f32 *, 0x30);
    M2C_FIELD(temp_4, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
    M2C_FIELD(temp_4, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
    M2C_FIELD(temp_4, f32 *, 0xC) = (f32) M2C_FIELD(temp_3_2, f32 *, 0xC);
    M2C_FIELD(arg2, f32 *, 0x20) = (f32) M2C_FIELD(temp_9, f32 *, 0x40);
    M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(temp_5, f32 *, 4);
    M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(temp_5, f32 *, 8);
    M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(temp_5, f32 *, 0xC);
    M2C_FIELD(arg2, f32 *, 0x30) = (f32) M2C_FIELD(temp_9, f32 *, 0x50);
    M2C_FIELD(temp_7, f32 *, 4) = (f32) M2C_FIELD(temp_8_2, f32 *, 4);
    M2C_FIELD(temp_7, f32 *, 8) = (f32) M2C_FIELD(temp_8_2, f32 *, 8);
    M2C_FIELD(temp_7, f32 *, 0xC) = (f32) M2C_FIELD(temp_8_2, f32 *, 0xC);
}
