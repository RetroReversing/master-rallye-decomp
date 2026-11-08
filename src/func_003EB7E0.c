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
M2C_UNK func_002B5E28(s32);                         /* extern */
M2C_UNK func_002B6108(s32, M2C_UNK *);              /* extern */
s32 func_002B62E0();                                /* extern */
M2C_UNK func_002B9128(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_002C8BA8(M2C_UNK *);                   /* extern */
s32 func_003ECEC0(s32);                             /* extern */
M2C_UNK func_003EF558(s32 *);                       /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_004288A8;
extern M2C_UNK D_00429028;
extern s32 D_0043C0F8;
extern M2C_UNK D_0048A378;
extern M2C_UNK D_0048A390;
extern M2C_UNK D_0048A3B0;
extern M2C_UNK D_0048A3D0;
extern M2C_UNK D_0048A3F8;
extern M2C_UNK D_0048A420;
extern M2C_UNK D_0048A428;
extern M2C_UNK D_0048A450;
extern M2C_UNK D_0048A478;

s32 func_003EB7E0(s32 *arg0) {
    if (*arg0 == 0) {
        func_003F9698(&D_0048A378);
        if (D_0043C0F8 == 0) {
            func_003F9698(&D_0048A390);
            func_003EF558(&D_0043C0F8);
        }
        func_003F9698(&D_0048A3B0);
        func_002B9128(&D_004288A8, 2);
        func_003F9698(&D_0048A3D0);
        func_002B5E28(func_002B62E0());
        func_003F9698(&D_0048A3F8);
        func_002B6108(func_002B62E0(), &D_0048A420);
        func_003F9698(&D_0048A428);
        func_002C8BA8(&D_00429028);
        func_003F9698(&D_0048A450);
        *arg0 = func_003ECEC0(D_002AD408(8));
        func_003F9698(&D_0048A478);
    }
    return 1;
}
