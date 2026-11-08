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

M2C_UNK DeleteSema_2(s32);                          /* extern */
M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK func_00405298(M2C_UNK);                     /* extern */
M2C_UNK func_0040AF58();                            /* extern */
M2C_UNK func_0040AFA0();                            /* extern */
extern s32 D_0043E714;
extern s32 D_0043E720;
extern s32 D_0043E728;
extern s32 D_0043E72C;
extern s32 D_0043E754;

void func_003F1700(void) {
    if (D_0043E714 != 0) {
        D_0043E754 = -1;
        SignalSema_2(D_0043E720);
    }
    DeleteSema_2(D_0043E728);
    DeleteSema_2(D_0043E72C);
    DeleteSema_2(D_0043E720);
    func_0040AF58();
    func_00405298(0x80000012);
    func_0040AFA0();
}
