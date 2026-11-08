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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK func_002B2028(u32);                         /* extern */
M2C_UNK func_00362D90(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_0040E618;
extern M2C_UNK D_00484328;
extern M2C_UNK D_004864A0;

void func_00362588(void *arg0, s32 arg1) {
    s32 temp_3;
    u32 temp_17;
    u32 temp_4;
    u32 var_16;
    void *temp_19;
    void *temp_2;
    void *temp_6;
    void *var_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_004864A0;
    temp_6 = M2C_FIELD(arg0, void **, 0x2C);
    if (temp_6 != NULL) {
        temp_2 = M2C_FIELD(temp_6, void **, 0x2C);
        M2C_FIELD(temp_2, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3, temp_6);
    }
    temp_19 = arg0 + 0x20;
    var_16 = M2C_FIELD(arg0, u32 *, 0x20);
    temp_17 = M2C_FIELD(temp_19, u32 *, 4);
    if (var_16 < temp_17) {
        var_2 = M2C_FIELD(var_16, void **, 0x2C);
loop_4:
        M2C_FIELD(var_2, M2C_UNK (**)(s32, M2C_UNK), 0xC)(var_16 + M2C_FIELD(var_2, s16 *, 8), 2);
        var_16 += 0x30;
        if (var_16 < temp_17) {
            var_2 = M2C_FIELD(var_16, void **, 0x2C);
            goto loop_4;
        }
    }
    temp_4 = M2C_FIELD(arg0, u32 *, 0x20);
    temp_3 = (s32) ((M2C_FIELD(temp_19, s32 *, 8) - temp_4) * 0xAAAAAAAB) >> 4;
    if (temp_3 != 0) {
        if ((temp_3 * 0x30) != 0) {
            func_002B2028(temp_4);
        } else {
            M2C_FIELD(temp_4, u32 *, 0) = (u32) M2C_FIELD(&D_0040E618, u32 *, -4);
            M2C_FIELD(&D_0040E618, u32 *, -4) = temp_4;
        }
    }
    func_00362D90(arg0 + 8, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00484328;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
