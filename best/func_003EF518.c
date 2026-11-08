extern s32 func_002BF920(void);
extern s64 D_002BFA80(s32);
extern s64 func_0040C530(f32);
extern f32 func_0040C7F0(s64, s64);
extern f32 func_0040C7F0a(s64);
extern f32 D_0043BFD0;
extern s32 D_0043BFCC;

typedef struct {
    f32 unk0;
    u8 pad4[4];
    s64 unk8;
    f32 unk10;
    f32 unk14;
    s32 unk18;
} S_D_00496980;

extern s32 func_001D4010(void *);
extern void *func_002CE6E8(void);
extern void func_002CEC78(void *);
extern void func_002CF660(void *);
extern void *func_002D04D0(void);
extern void func_003F9698(const char *, ...);
extern s32 D_0043C070;
extern const char D_0048A6D8[];
extern const char D_0048A6E8[];
extern void D_0049D4B0;
extern const char *func_003EF4D8(s32);
extern const char D_0048B250[];

void func_003E80A8(S_D_00496980 *arg0, f32 f12) {
    s64 var2;
    if (D_0043BFCC == 0) {
        s32 temp3 = arg0->unk18;
        s64 temp2 = D_002BFA80(func_002BF920());
        s64 temp16 = (temp3 == 0) ? temp2 : (temp2 >> temp3);
        arg0->unk0 = f12;
        if (f12 != 0.0f) {
            var2 = temp16 - func_0040C530(f12 * arg0->unk10);
        } else {
            arg0->unk8 = temp16;
            return;
        }
    } else {
        arg0->unk0 = f12;
        var2 = func_0040C530((D_0043BFD0 - f12) * arg0->unk10);
    }
    arg0->unk8 = var2;
}

void func_003E8150(S_D_00496980 *arg0) {
    f32 var_f0;
    if (D_0043BFCC == 0) {
        s32 temp4 = arg0->unk18;
        s64 temp2 = D_002BFA80(func_002BF920());
        s64 temp5 = arg0->unk8;
        s64 shifted = (temp4 == 0) ? temp2 : (temp2 >> temp4);
        s64 temp4_2 = shifted - temp5;
        if ((temp4_2 >> 31) != 0) {
            var_f0 = func_0040C7F0(temp4_2, temp5);
        } else {
            var_f0 = (f32)(s32)temp4_2;
        }
        arg0->unk0 = var_f0 * arg0->unk14;
    } else {
        f32 t = func_0040C7F0a(arg0->unk8);
        arg0->unk0 = D_0043BFD0 - t * arg0->unk14;
    }
}

void func_003ED178(void) {
    func_003F9698(D_0048A6D8);
    if (D_0043C070 == 0) {
        func_003F9698(D_0048A6E8);
        return;
    }
    func_002CEC78(func_001D4010(&D_0049D4B0));
    func_002CE6E8();
    func_002CF660(func_002D04D0());
    func_002CE6E8();
    func_002CF660(func_002D04D0());
}

void func_003EF518(const char *arg0, s32 arg1) {
    func_003F9698(D_0048B250, arg0);
    func_003F9698(func_003EF4D8(arg1));
}
