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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK func_001D1900(void *);                      /* extern */
extern M2C_UNK D_0044DCD8;
extern M2C_UNK D_004739D8;
extern M2C_UNK D_0047D4F8;

void func_001CF318(void *arg0, s32 arg1) {
    void *temp_17;

    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_004739D8;
    temp_17 = arg0 + 0x19C;
    M2C_FIELD(temp_17, M2C_UNK **, 8) = &D_0047D4F8;
    func_001D1900(arg0 + 0x1B4);
    M2C_FIELD(arg0, M2C_UNK **, 8) = &D_0044DCD8;
    M2C_FIELD(temp_17, M2C_UNK **, 8) = &D_0044DCD8;
    M2C_FIELD(arg0, M2C_UNK **, 0x50) = &D_0044DCD8;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_0044DCD8;
    M2C_FIELD(arg0, M2C_UNK **, 0x178) = &D_0044DCD8;
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
