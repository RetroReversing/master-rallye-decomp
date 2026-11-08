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

s32 func_001D4010();
s32 func_003F9698();
extern char D_00478E78[];

void func_002258C8(s32 arg0, void *arg1) {
    s32 temp_2;
    s32 var_17;
    void *temp_3;

    func_003F9698("%s:", func_001D4010(arg1 + 0x10));
    temp_3 = arg1 + 4;
    var_17 = M2C_FIELD(arg1, s32 *, 4);
    if (var_17 != M2C_FIELD(temp_3, s32 *, 4)) {
        do {
            temp_2 = func_001D4010(var_17);
            var_17 += 4;
            func_003F9698(" %s", temp_2);
        } while (var_17 != M2C_FIELD(temp_3, s32 *, 4));
    }
    func_003F9698(&D_00478E78);
}
