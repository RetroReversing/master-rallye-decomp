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

M2C_UNK func_0011DFB8(s32);                         /* extern */
M2C_UNK func_0011E278(s32, M2C_UNK);                /* extern */
s32 func_0011E2B8(s32, M2C_UNK);                    /* extern */
s32 func_0011E528(s32);                             /* extern */
M2C_UNK func_0011E650(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00129180(void *);                      /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_00448C40;

void func_00128F78(void *arg0) {
    s32 temp_17;
    s32 temp_2;

    func_0011E650(M2C_FIELD(arg0, s32 *, 0xC), 0, 0);
    func_0011DFB8(M2C_FIELD(arg0, s32 *, 0xC));
    if ((func_0011E528(M2C_FIELD(arg0, s32 *, 0xC)) == 0) && (temp_2 = M2C_FIELD(arg0, s32 *, 0x24) + 1, M2C_FIELD(arg0, s32 *, 0x24) = temp_2, ((temp_2 < 0x1E) == 0))) {
        if (M2C_FIELD(arg0, s32 *, 0x20) == 0) {
            func_00129180(arg0);
            if (func_0011E2B8(M2C_FIELD(arg0, s32 *, 0xC), 1) == -2) {
                temp_17 = M2C_FIELD(arg0, s32 *, 0x18);
                if (temp_17 == 1) {
                    func_003F9698(&D_00448C40);
                    M2C_FIELD(arg0, s32 *, 0x20) = temp_17;
                    func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 4);
                }
            }
        }
    }
}
