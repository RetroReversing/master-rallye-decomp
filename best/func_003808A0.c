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

M2C_UNK func_001D4040(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_001E33C8(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_001E38C8(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_001E3EC0(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern s32 D_0042FBD8;
extern M2C_UNK D_00486E20;
extern M2C_UNK D_0049B848;

void func_003808A0(void) {
    if (D_0042FBD8 == 0) {
        func_001D4040(&D_0049B848, &D_00486E20);
        D_0042FBD8 = 1;
    }
    if (func_001E38C8(func_001E4280(), &D_0049B848) == 0) {
        func_001E3EC0(func_001E4280(), &D_0049B848, 0x10);
        func_001E33C8(func_001E4280(), &D_0049B848, 0);
    }
    func_001E3650(func_001E4280(), (s32) &D_0049B848);
}
