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

M2C_UNK func_001D39A0(void *);                      /* extern */
void **func_001D5900();                             /* extern */
M2C_UNK func_002A1380(s32);                         /* extern */
M2C_UNK func_002A13B8(s32);                         /* extern */
M2C_UNK func_002A13E0(s32);                         /* extern */
s32 func_002A1700();                                /* extern */
void *func_002A2458();                              /* extern */
M2C_UNK func_002B1690(M2C_UNK *);                   /* extern */
s32 func_002B16D8(M2C_UNK);                         /* extern */
s32 func_002C20D0();                                /* extern */
s32 func_002C2EE0();                                /* extern */
M2C_UNK func_002C39D8(s32);                         /* extern */
void *func_002C7190();                              /* extern */
M2C_UNK func_002C8CD0(M2C_UNK *);                   /* extern */
M2C_UNK func_002CFB30(s32);                         /* extern */
s32 func_002D04D0();                                /* extern */
M2C_UNK func_003E7900();                            /* extern */
M2C_UNK func_003E80A8(s32, M2C_UNK);                /* extern */
M2C_UNK func_003E8150(s32);                         /* extern */
M2C_UNK func_003ED200();                            /* extern */
M2C_UNK func_003EDCB8();                            /* extern */
M2C_UNK func_003EDCC0();                            /* extern */
M2C_UNK func_003EE718(s32, M2C_UNK);                /* extern */
M2C_UNK func_003EE968(s32);                         /* extern */
M2C_UNK func_003EE9A0(s32);                         /* extern */
M2C_UNK func_003F0B30(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_003F0B58(M2C_UNK);                     /* extern */
M2C_UNK func_003F0B74(M2C_UNK);                     /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern void **D_00428F24;
extern M2C_UNK D_00429028;
extern s32 D_0043C0F0;
extern M2C_UNK D_0048A800;
extern M2C_UNK D_0048A828;

void func_003ED9E0(void *arg0) {
    M2C_UNK (*temp_5_2)(void *, M2C_UNK);
    s32 temp_16;
    s32 temp_2_3;
    void **temp_2;
    void **temp_5;
    void *temp_20;
    void *temp_2_2;
    void *temp_3;
    void *temp_3_2;

    temp_20 = *func_001D5900();
    func_003E7900();
    if (D_0043C0F0 != 0) {
        func_003F0B30(0, 0, 0xFFFFFFFF);
    }
    func_002C39D8(func_002C20D0());
    if (D_0043C0F0 != 0) {
        func_003F0B58(1);
    }
    func_002C8CD0(&D_00429028);
loop_5:
    temp_2 = D_00428F24;
    do {
        temp_5 = D_00428F24;
        if (temp_2 == NULL) {
            func_002C39D8(func_002C2EE0());
        }
        if (temp_5 != NULL) {
            temp_3 = *temp_5;
            M2C_FIELD(temp_3, M2C_UNK (**)(void *, void **), 0x54)(temp_5 + M2C_FIELD(temp_3, s16 *, 0x50), temp_5);
        }
        if (func_002B16D8(0x4D4D4D4D) != 0) {
            func_003F9698(&D_0048A800);
            func_002B1690(&D_0048A828);
        }
        func_001D39A0(func_002C7190());
        temp_2_2 = func_002C7190();
        temp_3_2 = M2C_FIELD(temp_2_2, void **, 0x30);
        temp_5_2 = M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, M2C_UNK), 0xC);
        temp_5_2(temp_2_2 + M2C_FIELD(temp_3_2, s16 *, 8), temp_5_2);
        func_003ED200();
        if (D_0043C0F0 != 0) {
            func_003F0B58(2);
        }
        func_003EE9A0(M2C_FIELD(arg0, s32 *, 0));
        if (D_0043C0F0 != 0) {
            func_003F0B74(2);
        }
        func_003EDCB8();
        if (D_0043C0F0 != 0) {
            func_003F0B58(8);
        }
        func_002C8CD0(&D_00429028);
        if (M2C_FIELD(temp_20, s32 *, 0x10) == 0) {
            func_003E80A8(M2C_FIELD(arg0, s32 *, 4), 0);
        }
        temp_2_3 = func_002A1700();
        func_002A13B8(temp_2_3);
        func_002A13E0(temp_2_3);
        func_002A1380(temp_2_3);
        func_002CFB30(func_002D04D0());
        func_003E8150(M2C_FIELD(arg0, s32 *, 4));
        func_003ED200();
        if (D_0043C0F0 != 0) {
            func_003F0B74(8);
            if (D_0043C0F0 != 0) {
                func_003F0B58(4);
            }
        }
        temp_16 = M2C_FIELD(func_002A2458(), s32 *, 0xC);
        if (temp_16 == 0) {
            func_003EE718(M2C_FIELD(arg0, s32 *, 0), 0x3F800000);
            func_003EE968(M2C_FIELD(arg0, s32 *, 0));
        } else {
            M2C_FIELD(func_002A2458(), s32 *, 0xC) = (s32) (temp_16 - 1);
        }
        func_003E8150(M2C_FIELD(arg0, s32 *, 4));
        func_003EDCC0();
    } while (D_0043C0F0 == 0);
    func_003F0B74(4);
    goto loop_5;
}
