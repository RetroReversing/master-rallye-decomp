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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_00226E30(s32, s32);                    /* extern */
s32 func_00227690(s32);                             /* extern */
M2C_UNK func_002277D8(s32, M2C_UNK);                /* extern */
s32 func_00227850(s32);                             /* extern */
void *func_00227880(s32, s32);                      /* extern */
void *func_00228908(void *, M2C_UNK);               /* extern */
f32 func_00228DA0(void *, s32);                     /* extern */
s32 func_00228F10(void *, void *, s32);             /* extern */
extern f32 D_004797D4;

void func_00228720(void *arg0) {
    f32 temp_f0;
    f32 var_f20;
    s32 temp_2;
    s32 var_16;
    s32 var_19;
    void *temp_16;
    void *temp_16_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;

    var_19 = -1;
    var_16 = 0;
    var_f20 = D_004797D4;
    temp_2 = func_00227850(M2C_FIELD(arg0, s32 *, 4));
    if (temp_2 > 0) {
loop_2:
        if (func_00228F10(arg0, func_00227880(M2C_FIELD(arg0, s32 *, 4), var_16), var_16) != 0) {
            temp_f0 = func_00228DA0(arg0, var_16);
            if (temp_f0 < 1.5f) {
                var_19 = var_16;
                var_16 = temp_2;
            } else if (temp_f0 < var_f20) {
                var_f20 = temp_f0;
                var_19 = var_16;
            }
        }
        var_16 += 1;
        if (var_16 < temp_2) {
            goto loop_2;
        }
    }
    if (var_19 < 0) {
        if ((func_00227690(M2C_FIELD(arg0, s32 *, 4)) != 0) || ((temp_2_2 = func_00228908(arg0, 1), M2C_FIELD(arg0, void **, 0) = temp_2_2, (temp_2_2 == NULL)) && (temp_2_3 = func_00228908(arg0, 0), M2C_FIELD(arg0, void **, 0) = temp_2_3, (temp_2_3 == NULL)))) {
            temp_16 = D_002AD408(0x14);
            temp_2_4 = func_00227880(M2C_FIELD(arg0, s32 *, 4), 0);
            M2C_FIELD(temp_16, M2C_UNK32 *, 0) = 0;
            M2C_FIELD(temp_16, M2C_UNK32 *, 4) = 0;
            M2C_FIELD(temp_16, M2C_UNK32 *, 8) = 0;
            M2C_FIELD(temp_16, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(temp_2_4, M2C_UNK32 *, 0);
            M2C_FIELD(temp_16, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_2_4, M2C_UNK32 *, 4);
            M2C_FIELD(temp_16, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_2_4, M2C_UNK32 *, 8);
            M2C_FIELD(temp_16, f32 *, 0xC) = (f32) M2C_FIELD(temp_2_4, f32 *, 0xC);
            M2C_FIELD(arg0, void **, 0) = temp_16;
            M2C_FIELD(temp_16, s32 *, 0x10) = (s32) M2C_FIELD(temp_2_4, s32 *, 0x10);
            func_002277D8(M2C_FIELD(arg0, s32 *, 4), 0);
        }
    } else {
        temp_16_2 = D_002AD408(0x14);
        temp_2_5 = func_00227880(M2C_FIELD(arg0, s32 *, 4), var_19);
        M2C_FIELD(temp_16_2, M2C_UNK32 *, 0) = 0;
        M2C_FIELD(temp_16_2, M2C_UNK32 *, 4) = 0;
        M2C_FIELD(temp_16_2, M2C_UNK32 *, 8) = 0;
        M2C_FIELD(temp_16_2, M2C_UNK32 *, 0) = (M2C_UNK32) M2C_FIELD(temp_2_5, M2C_UNK32 *, 0);
        M2C_FIELD(temp_16_2, M2C_UNK32 *, 4) = (M2C_UNK32) M2C_FIELD(temp_2_5, M2C_UNK32 *, 4);
        M2C_FIELD(temp_16_2, M2C_UNK32 *, 8) = (M2C_UNK32) M2C_FIELD(temp_2_5, M2C_UNK32 *, 8);
        M2C_FIELD(temp_16_2, f32 *, 0xC) = (f32) M2C_FIELD(temp_2_5, f32 *, 0xC);
        M2C_FIELD(arg0, void **, 0) = temp_16_2;
        M2C_FIELD(temp_16_2, s32 *, 0x10) = (s32) M2C_FIELD(temp_2_5, s32 *, 0x10);
        func_00226E30(M2C_FIELD(arg0, s32 *, 4), var_19);
    }
}
