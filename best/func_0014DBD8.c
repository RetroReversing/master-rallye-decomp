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

s32 func_00191908(s32);                             /* extern */
s32 func_00193B60();                                /* extern */
s32 func_00193BE0(s32);                             /* extern */
s32 func_00194C40();                                /* extern */
M2C_UNK func_001E33C8(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_001E3598(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_001E3D10(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_0021E4F0(s32);                         /* extern */
M2C_UNK func_002A1D30(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_002A2458();                                /* extern */
extern M2C_UNK D_0040E6B0;
extern M2C_UNK D_0040E6B8;
extern M2C_UNK D_0040E6C0;
extern M2C_UNK D_0040E6C8;
extern M2C_UNK D_0040E6D0;
extern M2C_UNK D_0040E6D8;
extern M2C_UNK D_0040E6F0;
extern s32 D_0044E7FC;

void func_0014DBD8(s32 arg1) {
    M2C_UNK *var_18;
    M2C_UNK *var_19;
    M2C_UNK var_6;
    s32 temp_2;
    s32 var_4;

    if (((D_0044E7FC != 0) ? 0 : func_00193BE0(func_00194C40())) != 0) {
        if (func_001E3598(func_001E4280(), &D_0040E6D8) == 1) {
            var_19 = &D_0040E6B8;
            func_002A1D30(func_002A2458(), &D_0040E6B0, 0, 1);
            var_18 = &D_0040E6C0;
            func_001E3D10(func_001E4280(), &D_0040E6B8, 1);
        } else {
            temp_2 = func_00191908(func_00193B60());
            if (temp_2 != 1) {
                var_19 = &D_0040E6B8;
                var_18 = &D_0040E6C0;
                if (temp_2 >= 2) {
                    if (temp_2 != 2) {

                    } else {
                        func_002A1D30(func_002A2458(), &D_0040E6D0, 0, 1);
                        if (func_001E3598(func_001E4280(), &D_0040E6F0) != 0) {
                            func_001E3D10(func_001E4280(), &D_0040E6B8, 0);
                            func_001E3D10(func_001E4280(), &D_0040E6C0, 0);
                        } else {
                            func_001E3D10(func_001E4280(), &D_0040E6B8, 1);
                            func_001E3D10(func_001E4280(), &D_0040E6C0, 1);
                        }
                    }
                }
            } else {
                func_002A1D30(func_002A2458(), &D_0040E6C8, 0, 1);
                if (func_001E3598(func_001E4280(), &D_0040E6F0) != 0) {
                    var_18 = (M2C_UNK *)0x410000;
                    var_4 = func_001E4280();
                    var_6 = 0;
                } else {
                    var_18 = &D_0040E6C0;
                    var_4 = func_001E4280();
                    var_6 = 1;
                }
                var_19 = &D_0040E6B8;
                func_001E3D10(var_4, &D_0040E6B8, var_6);
            }
        }
        func_001E33C8(func_001E4280(), var_19, 0);
        func_001E33C8(func_001E4280(), var_18, 0);
    }
    func_0021E4F0(arg1);
}
