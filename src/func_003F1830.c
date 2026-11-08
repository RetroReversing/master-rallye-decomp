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

M2C_UNK func_00405268(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */
extern s32 D_0043E724;
extern s32 D_0043E73C;
extern M2C_UNK func_003F17F0;

s32 func_003F1830(void) {
    D_0043E724 = 1;
    func_0040AF58();
    func_00405268(0x80000012, &func_003F17F0, 0);
    func_0040AFA0();
    D_0043E724 = 0;
    D_0043E73C = 1;
    return 1;
}
