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

M2C_UNK func_0030C350(M2C_UNK);                     /* extern */
M2C_UNK func_0030C3C0();                            /* extern */
M2C_UNK func_0030C508(u32);                         /* extern */
extern M2C_UNK D_0042D600;

s32 func_0030C868(u32 arg0, u32 arg1, u32 arg2, u32 arg3, u32 arg4, s32 arg5, s32 arg6) {
    if (arg1 < 0x30U) {
        *(arg1 + &D_0042D600) = 3;
        func_0030C350(0);
        func_0030C508(arg0);
        func_0030C508(arg1);
        func_0030C508(arg2);
        func_0030C508(arg3);
        func_0030C508(arg4);
        func_0030C508(arg5 + (arg6 << 8));
        func_0030C3C0();
        return 0;
    }
    return -1;
}
