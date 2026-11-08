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

s32 func_0026FFC8();
s32 func_002AD390();
s32 func_002B2028();

void func_00229658(void *arg0, s32 arg1) {
    void *temp_16;

    temp_16 = arg0 + 4;
    func_0026FFC8();
    func_0026FFC8(temp_16);
    func_0026FFC8(temp_16);
    func_002B2028(M2C_FIELD(arg0, s32 *, 4));
    func_0026FFC8(arg0);
    func_002B2028(M2C_FIELD(arg0, s32 *, 0));
    if (arg1 & 1) {
        func_002AD390(arg0);
    }
}
