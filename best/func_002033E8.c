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

M2C_UNK func_003F3E80(f32);                         /* extern */

void func_002033E8(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f21;
    f32 temp_f21_2;
    f32 temp_f22;
    f32 temp_f23;
    f32 temp_f24;
    s32 temp_cond;

    temp_f21 = M2C_FIELD(arg0, f32 *, 8);
    temp_f23 = M2C_FIELD(arg0, f32 *, 0x10);
    temp_f24 = M2C_FIELD(arg0, f32 *, 0x14);
    temp_f22 = M2C_FIELD(arg0, f32 *, 0x20);
    temp_f20 = M2C_FIELD(arg0, f32 *, 4);
    temp_cond = fabsf(temp_f21) >= 1e-8f;
    M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
    M2C_FIELD(arg2, s32 *, 8) = 0;
    if (temp_cond) {
        M2C_ERROR(/* unknown instruction: c1 0xc0144 */);
        if (M2C_ERROR(/* Read from unset register $f5 */) != M2C_ERROR(/* Read from unset register $f5 */)) {
            func_003F3E80((temp_f20 * temp_f20) + (temp_f21 * temp_f21));
        }
        temp_f20_2 = temp_f20 / M2C_ERROR(/* Read from unset register $f5 */);
        temp_f21_2 = temp_f21 / M2C_ERROR(/* Read from unset register $f5 */);
        temp_f0 = (2.0f * temp_f20_2 * temp_f24) + (temp_f21_2 * (temp_f22 - temp_f23));
        temp_f1 = temp_f21_2 * temp_f0;
        M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f22 - temp_f1);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f23 + temp_f1);
        M2C_FIELD(arg2, f32 *, 4) = (f32) (temp_f24 - (temp_f20_2 * temp_f0));
        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_ERROR(/* Read from unset register $f5 */);
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) -temp_f20_2;
        M2C_FIELD(arg0, f32 *, 0) = 1.0f;
        M2C_FIELD(arg0, f32 *, 0x1C) = temp_f21_2;
        M2C_FIELD(arg0, f32 *, 4) = 0.0f;
        M2C_FIELD(arg0, f32 *, 8) = 0.0f;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, f32 *, 0x10) = temp_f20_2;
        M2C_FIELD(arg0, f32 *, 0x14) = temp_f21_2;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        return;
    }
    M2C_FIELD(arg1, f32 *, 8) = temp_f22;
    M2C_FIELD(arg1, f32 *, 4) = temp_f23;
    M2C_FIELD(arg2, f32 *, 4) = temp_f24;
    M2C_FIELD(arg2, f32 *, 0) = temp_f20;
    M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0) = 1.0f;
    M2C_FIELD(arg0, f32 *, 4) = 0.0f;
    M2C_FIELD(arg0, f32 *, 8) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, f32 *, 0x10) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x14) = 0.0f;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, f32 *, 0x1C) = 0.0f;
}
