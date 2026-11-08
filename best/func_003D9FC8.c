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

M2C_UNK func_003D7F00(void *);                      /* extern */

void func_003D9FC8(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_17;

    var_17 = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        if ((arg2 == 1) && (M2C_FIELD(arg0, s32 *, 0) & 0x100)) {
            var_17 -= M2C_FIELD(arg0, s32 *, 8) - M2C_FIELD(arg0, s32 *, 4);
        }
        func_003D7F00(arg0);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x50), M2C_UNK (**)(void *, s32, s32, s32), 0x44)(arg0, var_17, arg2, arg3);
}
