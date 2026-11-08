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

s32 func_001FD110(void *, s32);                     /* extern */
s32 func_001FD1E8(void *, s32);                     /* extern */
s32 func_001FD348(void *, s32);                     /* extern */
M2C_UNK func_002150C8(void *, void *, s32, void *, void *); /* extern */

s32 func_001FD3A8(void *arg0, void *arg1) {
    s32 var_17;
    s32 var_20;
    u32 temp_3;
    u32 temp_4;
    u32 var_3;
    void *temp_3_2;
    void *temp_4_2;
    void *temp_5;
    void *temp_6;
    void *temp_7;
    void *temp_7_2;
    void *temp_8;
    void *var_16;

    temp_7 = arg0 + 0x40;
    temp_4 = M2C_FIELD(temp_7, u32 *, 4);
    temp_3 = M2C_FIELD(arg0, u32 *, 0x40);
    if (temp_3 < temp_4) {
        var_3 = temp_3 + 0x50;
loop_2:
        if (var_3 < temp_4) {
            var_3 += 0x50;
            goto loop_2;
        }
    }
    M2C_FIELD(temp_7, u32 *, 4) = (u32) (temp_4 - (temp_4 - temp_3));
    var_17 = M2C_FIELD(arg1, s32 *, 0);
    var_20 = 0;
    if (var_17 != M2C_FIELD(arg1, s32 *, 4)) {
        var_16 = var_17 + 0x40;
        do {
            if ((func_001FD110(arg0, var_17) != 0) && (func_001FD1E8(arg0, var_17) != 0)) {
                temp_8 = arg0 + 0x40;
                if (func_001FD348(arg0, var_17) != 0) {
                    temp_7_2 = M2C_FIELD(temp_8, void **, 4);
                    if (temp_7_2 != M2C_FIELD(temp_8, s32 *, 8)) {
                        temp_3_2 = temp_7_2 + 0x10;
                        if (temp_7_2 != NULL) {
                            temp_4_2 = temp_7_2 + 0x20;
                            temp_5 = temp_7_2 + 0x30;
                            M2C_FIELD(temp_7_2, s32 *, 0) = (s32) M2C_FIELD(var_16, s32 *, -0x40);
                            temp_6 = temp_7_2 + 0x40;
                            M2C_FIELD(temp_7_2, s32 *, 4) = (s32) M2C_FIELD(var_16, s32 *, -0x3C);
                            M2C_FIELD(temp_7_2, f32 *, 0x10) = (f32) M2C_FIELD(var_16, f32 *, -0x30);
                            M2C_FIELD(temp_3_2, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, -0x2C);
                            M2C_FIELD(temp_3_2, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, -0x28);
                            M2C_FIELD(temp_3_2, f32 *, 0xC) = (f32) M2C_FIELD(var_16, f32 *, -0x24);
                            M2C_FIELD(temp_7_2, f32 *, 0x20) = (f32) M2C_FIELD(var_16, f32 *, -0x20);
                            M2C_FIELD(temp_4_2, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, -0x1C);
                            M2C_FIELD(temp_4_2, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, -0x18);
                            M2C_FIELD(temp_4_2, f32 *, 0xC) = (f32) M2C_FIELD(var_16, f32 *, -0x14);
                            M2C_FIELD(temp_7_2, f32 *, 0x30) = (f32) M2C_FIELD(var_16, f32 *, -0x10);
                            M2C_FIELD(temp_5, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, -0xC);
                            M2C_FIELD(temp_5, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, -8);
                            M2C_FIELD(temp_5, f32 *, 0xC) = (f32) M2C_FIELD(var_16, f32 *, -4);
                            M2C_FIELD(temp_7_2, f32 *, 0x40) = (f32) M2C_FIELD(var_16, f32 *, 0);
                            M2C_FIELD(temp_6, f32 *, 4) = (f32) M2C_FIELD(var_16, f32 *, 4);
                            M2C_FIELD(temp_6, f32 *, 8) = (f32) M2C_FIELD(var_16, f32 *, 8);
                            M2C_FIELD(temp_6, f32 *, 0xC) = (f32) M2C_FIELD(var_16, f32 *, 0xC);
                        }
                        M2C_FIELD(temp_8, void **, 4) = (void *) (M2C_FIELD(temp_8, void **, 4) + 0x50);
                    } else {
                        func_002150C8(temp_8, temp_7_2, var_17, temp_7_2, temp_8);
                    }
                    var_20 += 1;
                }
            }
            var_17 += 0x50;
            var_16 += 0x50;
        } while (var_17 != M2C_FIELD(arg1, s32 *, 4));
    }
    return var_20;
}
