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

extern int D_004262BC;
s32 func_003F9698();
extern char D_004262B0[];
extern char D_00475F20[];
extern char D_00475F38[];
extern char D_00475F68[];
extern char D_00475F88[];
extern char D_00475FA0[];
extern char D_00475FB8[];
extern char D_00475FD0[];
extern char D_00475FE8[];
extern char D_00476008[];

void func_001D4FD0(void *arg0) {
    s32 *var_5;

    func_003F9698(&D_00475F20);
    D_004262BC = (s32) (D_004262BC + 1);
    if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
        var_5 = "YES";
    } else {
        var_5 = "NO";
    }
    func_003F9698(&D_00475F38, (s32) var_5, &D_00475F38);
    func_003F9698(&D_00475F68, M2C_FIELD(arg0, s32 *, 0x10));
    func_003F9698(&D_00475F88, M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 **, 0x18));
    func_003F9698(&D_00475FA0, M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 **, 0x20));
    func_003F9698(&D_00475FB8, M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 **, 0x28));
    func_003F9698(&D_00475FD0, M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 **, 0x38));
    func_003F9698(&D_00475FE8, M2C_FIELD(arg0, s32 *, 0x34) * (s32) M2C_FIELD(arg0, s32 **, 0x38));
    D_004262BC = (s32) (D_004262BC - 1);
    func_003F9698(&D_00476008);
}
