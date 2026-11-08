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

M2C_UNK func_001AFA20(void *);                      /* extern */
M2C_UNK func_001AFC88(void *);                      /* extern */
M2C_UNK func_001AFDD8(void *);                      /* extern */
M2C_UNK func_001AFFE0(void *);                      /* extern */
M2C_UNK func_001B01F8(void *);                      /* extern */
M2C_UNK func_001B0508(void *);                      /* extern */
s32 func_001FDBA8(s32, void *);                     /* extern */
s32 func_001FDE60();                                /* extern */
void **func_00201350();                             /* extern */

void func_001AF330(void *arg0) {
    s32 temp_19;
    s32 temp_2;
    s32 var_17;
    void **temp_2_2;
    void *temp_18;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    M2C_FIELD(arg0, s32 *, 0xAC) = func_001FDBA8(func_001FDE60(), arg0 + 0xA4);
    temp_2 = func_001FDBA8(func_001FDE60(), arg0 + 0xA0);
    M2C_FIELD(arg0, s32 *, 0xA8) = temp_2;
    if (M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
        if (temp_2 != 0) {
            temp_18 = arg0 + 0x74;
            temp_3 = *func_00201350();
            var_17 = 0;
            temp_3_2 = temp_3 + 0xC0;
            M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(temp_3, f32 *, 0xC0);
            M2C_FIELD(temp_18, f32 *, 4) = (f32) M2C_FIELD(temp_3_2, f32 *, 4);
            M2C_FIELD(temp_18, f32 *, 8) = (f32) M2C_FIELD(temp_3_2, f32 *, 8);
            func_001AFA20(arg0);
            func_001B01F8(arg0);
            func_001AFC88(arg0);
            temp_19 = M2C_FIELD(func_00201350(), s32 *, 0x10);
            if (temp_19 > 0) {
                do {
                    temp_2_2 = func_00201350() + (var_17 * 4);
                    var_17 += 1;
                    temp_3_3 = *temp_2_2;
                    temp_3_4 = temp_3_3 + 0xC0;
                    M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(temp_3_3, f32 *, 0xC0);
                    M2C_FIELD(temp_18, f32 *, 4) = (f32) M2C_FIELD(temp_3_4, f32 *, 4);
                    M2C_FIELD(temp_18, f32 *, 8) = (f32) M2C_FIELD(temp_3_4, f32 *, 8);
                    func_001AFDD8(arg0);
                } while (var_17 < temp_19);
            }
            func_001AFFE0(arg0);
            if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
                func_001B0508(arg0);
            }
        }
    }
}
