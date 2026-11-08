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

M2C_UNK func_0011BBF8(void *, s32);                 /* extern */
M2C_UNK func_0011BD58(void *, s32);                 /* extern */
M2C_UNK func_0011C070(void *, s32);                 /* extern */
M2C_UNK func_0011CB28(void *);                      /* extern */
M2C_UNK func_001D4040(M2C_UNK *, M2C_UNK *);        /* extern */
extern s32 D_0040DCCC;
extern M2C_UNK D_00445D80;
extern M2C_UNK D_0048D700;

void func_0011BC90(void *arg0, s32 arg1) {
    if (D_0040DCCC == 0) {
        func_001D4040(&D_0048D700, &D_00445D80);
        D_0040DCCC = 1;
    }
    func_0011BBF8(arg0, arg1);
    func_0011CB28(arg0);
    if (func_001E3650(func_001E4280(), (s32) &D_0048D700) <= 0) {
        if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
            func_0011C070(arg0, arg1);
        }
        if ((M2C_FIELD(arg0, s32 *, 0x38) != 0) || (M2C_FIELD(arg0, s32 *, 0x30) != 0)) {
            func_0011BD58(arg0, arg1);
        }
    }
}
