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

M2C_UNK func_00181AB0(void *, s32);                 /* extern */
M2C_UNK func_001822C0();                            /* extern */
void *func_001E3820(s32, s32, M2C_UNK *);           /* extern */
f32 func_003F3E80(f32);                             /* extern */
extern M2C_UNK D_0040E698;

void func_00181988(void *arg0, void *arg1) {
    f32 sp0;
    f32 sp4;
    f32 sp8;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f2;
    s32 var_16;
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_3;

    temp_2 = M2C_FIELD(arg1, void **, 0x50);
    temp_2_2 = temp_2 + 0x50;
    sp0 = M2C_FIELD(temp_2, f32 *, 0x50);
    sp4 = M2C_FIELD(temp_2_2, f32 *, 4);
    sp8 = M2C_FIELD(temp_2_2, f32 *, 8);
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_001822C0();
    }
    var_16 = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) > 0) {
        do {
            temp_2_3 = func_001E3820(func_001E4280(), M2C_FIELD(arg0, s32 *, 0x28) + (var_16 * 4), &D_0040E698);
            if (temp_2_3 != NULL) {
                temp_2_4 = M2C_FIELD(temp_2_3, void **, 8);
                temp_3 = temp_2_4 + 0xA8;
                temp_f1 = sp0 - M2C_FIELD(temp_2_4, f32 *, 0xA8);
                temp_f2 = sp4 - M2C_FIELD(temp_3, f32 *, 4);
                temp_f0 = sp8 - M2C_FIELD(temp_3, f32 *, 8);
                var_f2 = temp_f2 * temp_f2;
                M2C_ERROR(/* unknown instruction: c1 0xc0084 */);
                if (var_f2 != var_f2) {
                    var_f2 = func_003F3E80((temp_f1 * temp_f1) + var_f2 + (temp_f0 * temp_f0));
                }
                if (var_f2 < M2C_FIELD(arg0, f32 *, 0x18)) {
                    func_00181AB0(arg0, var_16);
                }
            }
            var_16 += 1;
        } while (var_16 < M2C_FIELD(arg0, s32 *, 0xC));
    }
}
