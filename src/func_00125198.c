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
s32 func_0011DA70(s32, M2C_UNK);                    /* extern */
M2C_UNK func_001254E8(void *);                      /* extern */
M2C_UNK func_00194BB0(s32, M2C_UNK);                /* extern */
s32 func_00194C40();                                /* extern */
M2C_UNK func_001D2CD8(void *, M2C_UNK *);           /* extern */
s32 func_002971B0(s32);                             /* extern */
M2C_UNK func_00297398(s32, M2C_UNK);                /* extern */
s32 func_00297500();                                /* extern */
extern M2C_UNK D_00448428;

void func_00125198(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xC) = func_0011DA70(D_002AD408(0x10), 0x10);
    if (func_002971B0(func_00297500()) == -1) {
        func_00297398(func_00297500(), 1);
    }
    func_001D2CD8(arg0 + 0x10, &D_00448428);
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    func_001254E8(arg0);
    func_00194BB0(func_00194C40(), 0);
}
