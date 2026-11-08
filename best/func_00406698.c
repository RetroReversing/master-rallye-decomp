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

M2C_UNK SignalSema_2(s32);                          /* extern */
M2C_UNK WaitSema_2(s32);                            /* extern */
M2C_UNK func_004065B0();                            /* extern */
extern s32 D_004411B0;
extern M2C_UNK D_004A1040;

void *func_00406698(u32 arg0) {
    func_004065B0();
    WaitSema_2(D_004411B0);
    if (arg0 >= 0x20U) {
        SignalSema_2(D_004411B0);
        return NULL;
    }
    SignalSema_2(D_004411B0);
    return (arg0 * 0x10) + &D_004A1040;
}
