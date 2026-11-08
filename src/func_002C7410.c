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

extern M2C_UNK D_004766C0;
extern M2C_UNK D_00481DC8;

void *func_002C72F0(void *arg0) {
    void *temp_6;
    void *temp_5;
    register void *temp_3;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &D_004766C0;
    M2C_FIELD(arg0, void **, 8) = arg0;
    temp_3 = arg0 + 0xC;
    M2C_FIELD(arg0, void **, 4) = arg0;
    temp_5 = arg0 + 0x18;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_6 = arg0 + 0x24;
    M2C_FIELD(temp_3, void **, 8) = temp_3;
    M2C_FIELD(temp_3, void **, 4) = temp_3;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_5, void **, 4) = temp_5;
    M2C_FIELD(temp_5, void **, 8) = temp_5;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(temp_6, void **, 8) = temp_6;
    M2C_FIELD(temp_6, void **, 4) = temp_6;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &D_00481DC8;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    return arg0;
}

/* identical to func_00151568 (matched), with its names changed by decompdecomp */
s32 func_002C7290(s8 *s1, s8 *e1, s8 *s2, s8 *e2) {
    s8 c1, c2;
    while (s1 != e1 && s2 != e2) {
        c1 = *s1;
        c2 = *s2;
        if (c1 < c2) return -1;
        if (c2 < c1) return 1;
        s1++;
        s2++;
    }
    if (s2 == e2)
        return s1 != e1;
    return -1;
}


/* identical to func_00151500 (matched), with its names changed by decompdecomp */
s32 func_002C7228(s8 *s1, s8 *e1, s8 *s2, s8 *e2) {
    s8 c1, c2;
    while (s1 != e1 && s2 != e2) {
        c1 = *s1;
        c2 = *s2;
        if (c1 < c2) return 1;
        if (c2 < c1) return 0;
        s1++;
        s2++;
    }
    return s1 == e1 && s2 != e2;
}


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

M2C_UNK func_002C7488(void *);                      /* extern */
M2C_UNK func_003F94D0(void *, M2C_UNK, M2C_UNK);    /* extern */
extern M2C_UNK D_0049AE00;

void func_002C7410(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        *(((M2C_FIELD(arg0, s16 *, 0x16) + M2C_FIELD(arg0, s16 *, 0x14))) + &D_0049AE00) = 0;
        M2C_FIELD(arg0, s16 *, 0x14) = 0;
        M2C_FIELD(arg0, s16 *, 0x16) = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s16 *, 0x1A) = 0;
        M2C_FIELD(arg0, s16 *, 0x18) = 0;
        func_003F94D0(arg0 + 0x10, 0, 4);
    }
    func_002C7488(arg0);
}
