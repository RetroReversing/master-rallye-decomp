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

M2C_UNK func_003F7658(void *, M2C_UNK, M2C_UNK, void *); /* extern */
extern M2C_UNK func_003F7800;

void func_003F7820(void *arg0) {
    void *temp_17;

    temp_17 = arg0 + 0x1E4;
    M2C_FIELD(arg0, M2C_UNK **, 0x3C) = &func_003F7800;
    M2C_FIELD(arg0, s32 *, 0x38) = 1;
    func_003F7658(temp_17, 4, 0, arg0);
    func_003F7658(arg0 + 0x23C, 9, 1, arg0);
    func_003F7658(arg0 + 0x294, 0xA, 2, arg0);
    M2C_FIELD(arg0, void **, 0x1E0) = temp_17;
    M2C_FIELD(arg0, s32 *, 0x1DC) = 3;
    M2C_FIELD(arg0, s32 *, 0x1D8) = 0;
}
