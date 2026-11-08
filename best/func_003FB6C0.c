/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_003F7820(void *);                      /* extern */
M2C_UNK func_003FB738(void *, void *, s32, s32);    /* extern */
extern void *D_004404DC;

void func_003FB6C0(void *arg0, s32 arg1, s32 arg2) {
    void *var_3;

    var_3 = M2C_FIELD(arg0, void **, 0x54);
    if (var_3 == NULL) {
        var_3 = D_004404DC;
        M2C_FIELD(arg0, void **, 0x54) = var_3;
    }
    if (M2C_FIELD(var_3, s32 *, 0x38) == 0) {
        func_003F7820(var_3);
    }
    func_003FB738(M2C_FIELD(arg0, void **, 0x54), arg0, arg1, arg2);
}
