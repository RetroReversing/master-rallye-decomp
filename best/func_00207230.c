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

M2C_UNK func_00206A80(void *);                      /* extern */
extern M2C_UNK D_00478550;

void *func_00207230(void *arg0) {
    void *temp_2;

    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &D_00478550;
    M2C_FIELD(arg0, f32 *, 4) = 0.0001f;
    temp_2 = arg0 + 0xC;
    M2C_FIELD(arg0, s32 *, 8) = -1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    func_00206A80(arg0 + 0x18);
    return arg0;
}
