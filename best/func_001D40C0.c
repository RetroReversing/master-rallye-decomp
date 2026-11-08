/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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
s32 func_001D3BF0(void *);                          /* extern */
M2C_UNK func_001D3D18(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D4280(void *, M2C_UNK *);           /* extern */
M2C_UNK func_001D4420(void *, M2C_UNK);             /* extern */
s32 func_001D4610(void *);                          /* extern */
extern M2C_UNK D_00475E78;

void *func_001D40C0(void *arg0) {
    void *temp_2;

    M2C_FIELD(arg0, s32 *, 0) = func_001D3BF0(D_002AD408(0x10));
    temp_2 = D_002AD408(0xC);
    M2C_FIELD(arg0, void **, 4) = temp_2;
    M2C_FIELD(temp_2, s32 *, 0) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 8) = func_001D4610(D_002AD408(0x3E88));
    func_001D4420(M2C_FIELD(arg0, void **, 4), 0x1000);
    func_001D3D18(M2C_FIELD(arg0, s32 *, 0), 0x28000);
    func_001D4280(arg0, &D_00475E78);
    return arg0;
}
