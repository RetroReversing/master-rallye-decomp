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

M2C_UNK func_0015DAE0();                            /* extern */
M2C_UNK func_0015DFB8();                            /* extern */
M2C_UNK func_0015E1F0();                            /* extern */
M2C_UNK func_0015E500();                            /* extern */
M2C_UNK func_0015E508();                            /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_0044E888;

void func_0015B0B8(s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0x2:
        func_0015DAE0();
        break;
    case 0x3:
        func_0015DFB8();
        break;
    case 0x4:
        func_0015E1F0();
        break;
    case 0x5:
        func_0015E500();
        break;
    case 0x64:
        func_0015E508();
        break;
    default:
        func_003F9698(&D_0044E888);
        break;
    }
}
