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
M2C_UNK func_001D2040(s32, M2C_UNK);                /* extern */

void func_0021FE68(void *arg0, s32 arg1) {
    s32 temp_4;
    void *temp_16;
    void *var_16;

    temp_4 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_4 != 0) {
        func_001D2040(temp_4, 3);
    }
    if (arg0 != NULL) {
        temp_16 = arg0 + 0x30;
        var_16 = temp_16;
        while(arg0!=var_16){var_16-=12;func_001D1900(var_16);}
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}


/* machine draft (m2c), tried by autopilot */
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

M2C_UNK *func_002B1FC0(M2C_UNK);                    /* extern */
M2C_UNK *func_003D2910(M2C_UNK);                    /* extern */

void *func_00220638(void *arg0) {
    M2C_UNK *temp_3;
    M2C_UNK *var_3;
    volatile int allocator;

    var_3 = func_002B1FC0(0x4C);
    if (var_3 == NULL) {
        var_3 = func_003D2910(0x4C);
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = var_3;
    *var_3 = (s32)var_3;
    temp_3 = M2C_FIELD(arg0, M2C_UNK **, 0);
    M2C_FIELD(temp_3, M2C_UNK **, 4) = temp_3;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}

/* machine draft (m2c), tried by autopilot */
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
M2C_UNK func_0026DCA8(void *);                      /* extern */
void func_002B2028(s32);                         /* extern */

void func_00220690(void *arg0, s32 arg1) {
    void **temp_6;
    void *temp_2;

    temp_6 = M2C_FIELD(arg0, void ***, 4);
    if (temp_6 != NULL) {
        temp_2 = *temp_6;
        M2C_FIELD(temp_2, void (**)(void *, M2C_UNK), 0xC)((char*)temp_6 + M2C_FIELD(temp_2, s16 *, 8), 3);
    }
    func_0026DCA8(arg0);
    func_002B2028(M2C_FIELD(arg0, s32 *, 0));
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

/* machine draft (m2c), tried by autopilot */
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
s32 func_0021E838(s32);                             /* extern */
extern s32 D_004265D8;

s32 func_0021F4B0(void) {
    s32 temp_2;

    temp_2 = D_004265D8;
    if (temp_2 == 0) {
        D_004265D8 = func_0021E838(D_002AD408(0x7C));
    }
    return D_004265D8;
}
