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

s32 func_003F9698();
extern char D_00476890[];
extern char D_004768C8[];

void func_001DE7F0(s32 arg0, void *arg1) {
    s32 temp_18;
    s32 var_16;
    s32 var_19;
    u32 temp_5;
    void *temp_2;

    var_19 = 0;
    func_003F9698(&D_00476890);
    if (M2C_FIELD(arg1, s32 *, 0x10) > 0) {
        do {
            func_003F9698("  %3d [", var_19);
            var_16 = 0;
            if (M2C_FIELD(arg1, s32 *, 0xC) > 0) {
loop_4:
                temp_18 = var_16 + 1;
                temp_2 = (((var_19 * M2C_FIELD(arg1, s32 *, 0xC)) + var_16) * 4) + M2C_FIELD(arg1, s32 *, 8);
                temp_5 = M2C_FIELD(temp_2, u32 *, 0);
                func_003F9698("%02x%02x%02x%02x", temp_5 & 0xFF, M2C_FIELD(temp_2, u8 *, 1), M2C_FIELD(temp_2, u8 *, 2), temp_5 >> 0x18);
                if (temp_18 < M2C_FIELD(arg1, s32 *, 0xC)) {
                    func_003F9698(" ");
                }
                var_16 = temp_18;
                if (var_16 < M2C_FIELD(arg1, s32 *, 0xC)) {
                    goto loop_4;
                }
            }
            var_19 += 1;
            func_003F9698(&D_004768C8);
        } while (var_19 < M2C_FIELD(arg1, s32 *, 0x10));
    }
}
