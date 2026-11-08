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

M2C_UNK func_001D4040(M2C_UNK *, M2C_UNK *);        /* extern */
extern s32 D_00425D60;
extern s32 D_00425D64;
extern s32 D_00425D68;
extern s32 D_00425D6C;
extern M2C_UNK D_004714C8;
extern M2C_UNK D_004714E0;
extern M2C_UNK D_004714F8;
extern M2C_UNK D_00471510;
extern M2C_UNK D_0048DDB0;
extern M2C_UNK D_0048DDB8;
extern M2C_UNK D_0048DDC0;
extern M2C_UNK D_0048DDC8;

s32 func_00192190(s32 arg1) {
    if (D_00425D60 == 0) {
        func_001D4040(&D_0048DDB0, &D_004714C8);
        D_00425D60 = 1;
    }
    if (D_00425D64 == 0) {
        func_001D4040(&D_0048DDB8, &D_004714E0);
        D_00425D64 = 1;
    }
    if (D_00425D68 == 0) {
        func_001D4040(&D_0048DDC0, &D_004714F8);
        D_00425D68 = 1;
    }
    if (D_00425D6C == 0) {
        func_001D4040(&D_0048DDC8, &D_00471510);
        D_00425D6C = 1;
    }
    if (arg1 != 1) {
        if (arg1 < 2) {
            if (arg1 != 0) {
                return 0;
            }
            return func_001E3650(func_001E4280(), (s32) &D_0048DDB0);
        }
        switch (arg1) {                             /* irregular */
        case 2:
            return func_001E3650(func_001E4280(), (s32) &D_0048DDC0);
        case 3:
            return func_001E3650(func_001E4280(), (s32) &D_0048DDC8);
        default:
            return 0;
        }
    } else {
        return func_001E3650(func_001E4280(), (s32) &D_0048DDB8);
    }
}
