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

s32 func_0019AC60(void *);                          /* extern */
s32 func_0019ACC0(void *);                          /* extern */
M2C_UNK func_0019AD20(void *);                      /* extern */
M2C_UNK func_0019ADB8(void *);                      /* extern */
M2C_UNK func_0019ADE8(void *);                      /* extern */
M2C_UNK func_0019AEA8(void *, s32);                 /* extern */
M2C_UNK func_0019B1B0(void *, s32);                 /* extern */
M2C_UNK func_0019B270(void *, s32);                 /* extern */
M2C_UNK func_0019B338(void *, s32);                 /* extern */
s32 func_001E3598(s32, void *);                     /* extern */
void *func_001E3820(s32, s32, void *);              /* extern */
s32 func_0021E9C0(s32, s32);                        /* extern */
s32 func_0021F4B0();                                /* extern */
M2C_UNK func_0027EF50(void *, s32);                 /* extern */
M2C_UNK func_0027F760(void *, s32);                 /* extern */
M2C_UNK func_00281F38(void *, s32);                 /* extern */
M2C_UNK func_002827D8(void *, s32);                 /* extern */

void func_0019A838(void *arg0) {
    s32 temp_18;
    s32 temp_2;
    s32 temp_2_2;
    void *temp_2_3;

    temp_18 = arg0 + 0x20C;
    temp_2 = func_0021E9C0(func_0021F4B0(), temp_18);
    if (temp_2) {
        temp_2_2 = func_001E3650(func_001E4280(), arg0 + 0x21C);
        if (M2C_FIELD(arg0, s32 *, 0x220) < temp_2_2) {
            M2C_FIELD(arg0, s32 *, 0x220) = temp_2_2;
            func_0019AEA8(arg0, temp_2);
        }
        if (M2C_FIELD(arg0, s32 *, 0x244) != 0) {
            func_00281F38(arg0 + 0x19C, temp_2);
        }
        if (M2C_FIELD(arg0, s32 *, 0x234) != 0) {
            func_0027EF50(arg0 + 0x48, temp_2);
        }
        if (M2C_FIELD(arg0, s32 *, 0x238) != 0) {
            func_0027F760(arg0 + 0xC, temp_2);
        }
        if (M2C_FIELD(arg0, s32 *, 0x23C) != 0) {
            func_002827D8(arg0 + 0x170, temp_2);
        }
        if (M2C_FIELD(arg0, s32 *, 0x240) != 0) {
            func_0019B338(arg0, temp_2);
        }
        if (func_001E3598(func_001E4280(), arg0 + 0x214) != 0) {
            temp_2_3 = M2C_FIELD(func_001E3820(func_001E4280(), temp_18, arg0 + 0x218), void **, 8);
            if (M2C_FIELD(temp_2_3, f32 *, 0x10) < 45.0f) {
                if ((M2C_FIELD(temp_2_3, f32 *, 0x14) < 40.0f) && (M2C_FIELD(arg0, s32 *, 0x1EC) != 0)) {
                    M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
                    M2C_FIELD(arg0, s32 *, 0x1E8) = 2;
                    M2C_FIELD(arg0, s32 *, 0x1E4) = 1;
                    func_0019AEA8(arg0, temp_2);
                    M2C_FIELD(arg0, s32 *, 0x234) = 0;
                    M2C_FIELD(arg0, s32 *, 0x23C) = 0;
                    M2C_FIELD(arg0, s32 *, 0x240) = 0;
                }
            }
        } else {
            if (func_0019AC60(arg0) != 0) {
                if (M2C_FIELD(arg0, s32 *, 0x1F4) == 0) {
                    if (M2C_FIELD(arg0, s32 *, 0x1F8) != 0) {
                        func_0019ADE8(arg0);
                    } else {
                        func_0019AD20(arg0);
                    }
                } else {
                    func_0019ADB8(arg0);
                }
                func_0019AEA8(arg0, temp_2);
            }
            if ((M2C_FIELD(arg0, s32 *, 0x1FC) != 0) && (func_0019ACC0(arg0) != 0)) {
                func_0019B1B0(arg0, temp_2);
            }
            if (M2C_FIELD(arg0, s32 *, 0x1F8) == 0) {
                func_0019B270(arg0, temp_2);
            }
        }
    }
}
