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
M2C_UNK func_002106B0(void *, M2C_UNK);             /* extern */
M2C_UNK func_002B2028(u32);                         /* extern */
extern M2C_UNK D_0040E618;

void func_0021D450(void *arg0, s32 arg1) {
    s32 temp_3;
    u32 temp_19;
    u32 temp_4;
    u32 var_17;
    void *var_16;
    void *var_4;

    temp_19 = M2C_FIELD(arg0, u32 *, 4);
    var_17 = M2C_FIELD(arg0, u32 *, 0);
    if (var_17 < temp_19) {
        var_4 = M2C_FIELD(var_17, void **, 0x54);
loop_2:
        D_002AD390(var_4);
        if (var_17 != 0) {
            var_16 = var_17 + 0x3C;
            if (var_17 != var_16) {
                do {
                    var_16 -= 0x14;
                    D_002AD390(M2C_FIELD(var_16, void **, 0x10));
                    func_002106B0(var_16 + 0xC, 2);
                } while (var_17 != var_16);
            }
        }
        var_17 += 0x58;
        if (var_17 < temp_19) {
            var_4 = M2C_FIELD(var_17, void **, 0x54);
            goto loop_2;
        }
    }
    temp_4 = M2C_FIELD(arg0, u32 *, 0);
    temp_3 = (s32) ((M2C_FIELD(arg0, s32 *, 8) - temp_4) * 0xBA2E8BA3) >> 3;
    if (temp_3 != 0) {
        if ((temp_3 * 0x58) != 0) {
            func_002B2028(temp_4);
        } else {
            M2C_FIELD(temp_4, u32 *, 0) = (u32) M2C_FIELD(&D_0040E618, u32 *, -4);
            M2C_FIELD(&D_0040E618, u32 *, -4) = temp_4;
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
