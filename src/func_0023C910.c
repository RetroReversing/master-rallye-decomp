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

M2C_UNK func_0023C970();                            /* extern */
M2C_UNK func_0023CAA0(s32);                         /* extern */
M2C_UNK func_0023CD10(s32);                         /* extern */
M2C_UNK func_0023D390(s32);                         /* extern */
M2C_UNK func_0023DE38(s32);                         /* extern */
M2C_UNK func_0023DED0(s32);                         /* extern */
M2C_UNK func_0023DF68(s32);                         /* extern */
M2C_UNK func_0023DF98(s32);                         /* extern */

void func_0023C910(s32 arg0) {
    func_0023C970();
    func_0023CAA0(arg0);
    func_0023CD10(arg0);
    func_0023D390(arg0);
    func_0023DE38(arg0);
    func_0023DED0(arg0);
    func_0023DF68(arg0);
    func_0023DF98(arg0);
}
