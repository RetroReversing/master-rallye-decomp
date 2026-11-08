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

void *D_002AD408(M2C_UNK);                          /* extern */
M2C_UNK func_001D2CD8(void *, s32);                 /* extern */
M2C_UNK func_001F7EC8(void *);                      /* extern */
extern M2C_UNK D_00478A08;

void *func_001FA400(void *arg0) {
    void *temp_2;

    temp_2 = D_002AD408(0x1C);
    func_001F7EC8(temp_2);
    M2C_FIELD(temp_2, M2C_UNK **, 0x10) = &D_00478A08;
    func_001D2CD8(temp_2 + 0x14, M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(temp_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    return temp_2;
}
