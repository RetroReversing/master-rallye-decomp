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

s32 D_002AD408(M2C_UNK);                            /* extern */
M2C_UNK func_001D2CD8(void *, s32);                 /* extern */
void *func_001F60A8(s32);                           /* extern */

void *func_001F60E8(void *arg0) {
    void *temp_2;

    temp_2 = func_001F60A8(D_002AD408(0x24));
    func_001D2CD8(temp_2 + 0x14, M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(temp_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    func_001D2CD8(temp_2 + 0x1C, M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(temp_2, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
    return temp_2;
}
