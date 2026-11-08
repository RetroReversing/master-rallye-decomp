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

M2C_UNK func_0029EA38(s32);                         /* extern */
M2C_UNK func_0029EB50(s32, f32);                    /* extern */
M2C_UNK func_0029EC30(s32, M2C_UNK);                /* extern */

void func_0014CD38(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 var_f0;
    s32 temp_17;
    s32 temp_3;

    temp_17 = M2C_FIELD(arg1, s32 *, 4);
    if (temp_17 != 0) {
        if ((M2C_FIELD(arg0, s32 *, 0x50) != 0) && (M2C_FIELD(arg0, s32 *, 0x3C) == 0)) {
            M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) * 1.08f);
        }
        temp_3 = M2C_FIELD(arg0, s32 *, 0x50);
        switch (temp_3) {                           /* irregular */
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
                M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
                M2C_FIELD(arg0, s32 *, 0x50) = 1;
                M2C_FIELD(arg0, f32 *, 0x34) = 0.0333333f;
                func_0029EB50(temp_17, M2C_FIELD(arg0, f32 *, 0x30));
                if (M2C_FIELD(arg0, s32 *, 0x38) == 0) {
                    M2C_FIELD(arg0, s32 *, 0x38) = 1;
                    func_0029EA38(temp_17);
                    func_0029EC30(temp_17, 0xCA);
                }
            } else if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
                M2C_FIELD(arg0, f32 *, 0x30) = 0.0f;
                M2C_FIELD(arg0, s32 *, 0x38) = 0;
                M2C_FIELD(arg0, s32 *, 0x40) = 0;
                func_0029EB50(temp_17, M2C_FIELD(arg0, f32 *, 0x30));
                func_0029EA38(temp_17);
            }
            break;
        case 1:
            temp_f12 = M2C_FIELD(arg0, f32 *, 0x30);
            if (!(temp_f12 < 1.0f)) {
                temp_f0 = temp_f12 + M2C_FIELD(arg0, f32 *, 0x34);
                M2C_FIELD(arg0, f32 *, 0x30) = temp_f0;
                if (temp_f0 > 1.3f) {
                    M2C_FIELD(arg0, f32 *, 0x30) = 1.0f;
                    M2C_FIELD(arg0, s32 *, 0x50) = 2;
                }
            } else {
                func_0029EB50(temp_17, temp_f12);
                var_f0 = M2C_FIELD(arg0, f32 *, 0x30) + M2C_FIELD(arg0, f32 *, 0x34);
block_27:
                M2C_FIELD(arg0, f32 *, 0x30) = var_f0;
            }
            break;
        case 2:
            temp_f12_2 = M2C_FIELD(arg0, f32 *, 0x30);
            if (!(temp_f12_2 > 0.0f)) {
                M2C_FIELD(arg0, s32 *, 0x50) = 0;
            } else {
                func_0029EB50(temp_17, temp_f12_2);
                var_f0 = M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x34);
                goto block_27;
            }
            break;
        }
    }
}
