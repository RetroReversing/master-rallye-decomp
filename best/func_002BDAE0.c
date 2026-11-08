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

M2C_UNK func_003F9698(M2C_UNK *, M2C_UNK *, u16, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_004807F8;
extern M2C_UNK D_00480810;

void func_002BDAE0(M2C_UNK *arg1, void *arg2) {
    M2C_UNK *var_5;

    var_5 = arg1;
    if (var_5 == NULL) {
        var_5 = &D_00480810;
    }
    func_003F9698(&D_004807F8, var_5, M2C_FIELD(arg2, u16 *, 0xC), M2C_FIELD(arg2, s32 *, 0x10), M2C_FIELD(arg2, s32 *, 0x14), M2C_FIELD(arg2, s32 *, 0x18), M2C_FIELD(arg2, s32 *, 0x1C));
}
