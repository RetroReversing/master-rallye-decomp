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

M2C_UNK func_002B1F98();                            /* extern */
M2C_UNK func_003EEF60();                            /* extern */
extern u32 D_0043BFF8;
extern u32 D_0043BFFC;

void func_002B2028(u32 arg0) {
    if ((arg0 >= (u32) D_0043BFF8) && (arg0 < (u32) D_0043BFFC)) {
        func_003EEF60();
        return;
    }
    func_002B1F98();
}
