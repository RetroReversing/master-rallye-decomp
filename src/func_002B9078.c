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

M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_0047FB50;
extern M2C_UNK D_0047FB68;
extern M2C_UNK D_0047FB80;
extern M2C_UNK D_0047FB98;
extern M2C_UNK D_0047FBB0;
extern M2C_UNK D_0047FBC8;

void func_002B9078(s32 arg0) {
    switch (arg0) {
    case 1:
        func_003F9698(&D_0047FB50);
        return;
    case 4:
        func_003F9698(&D_0047FB68);
        return;
    case 5:
        func_003F9698(&D_0047FB80);
        return;
    case 6:
        func_003F9698(&D_0047FB98);
        return;
    case 7:
        func_003F9698(&D_0047FBB0);
        return;
    default:
        func_003F9698(&D_0047FBC8);
        return;
    }
}
