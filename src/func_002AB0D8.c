typedef struct {
    s32 unk0;
    u8 pad4[4];
    void *unk8;
} S_func_002AB108_arg0;

extern s32 func_001C6780(s32 arg1, s32 arg2);
extern void *func_001C67A0(void *arg0, s32 arg1, s32 arg2);
extern void *func_001C67D0(void *arg0, s32 arg1, s32 arg2);

void func_002AB108(void *arg0, s32 arg1, s32 arg2, u8 *arg3) {
    S_func_002AB108_arg0 *a = (S_func_002AB108_arg0 *)arg0;
    s32 temp_lo1;
    s32 temp_lo2;
    s32 temp19;
    void *p;
    void *q;
    
    temp_lo1 = arg1 / a->unk0;
    temp_lo2 = arg2 / a->unk0;
    temp19 = func_001C6780(arg1 - (a->unk0 * temp_lo1), arg2 - (a->unk0 * temp_lo2));
    p = func_001C67A0(a->unk8, temp_lo1, temp_lo2);
    if (*(s32 *)p != 0) {
        q = func_001C67D0(a->unk8, temp_lo1, temp_lo2);
        *(u8 *)((u8 *)q + temp19) = *arg3;
    }
}

extern s32 func_001C6790(void *arg0);

s32 func_002AB0D8(void *arg0) {
    return *(s32 *)((u8 *)arg0 + 4) + func_001C6790(arg0) * 4;
}

typedef struct {
    u8 pad0[8];
    void *unk8;
} S_func_002AB868_arg0;

typedef struct {
    u8 pad0[8];
    s32 unk8;
    s32 unkC;
} S_func_002AB868_inner;

extern void *func_001C67A0(void *arg0, s32 arg1, s32 arg2);

s32 func_002AB868(void *arg0) {
    S_func_002AB868_arg0 *a = (S_func_002AB868_arg0 *)arg0;
    S_func_002AB868_inner *inner = (S_func_002AB868_inner *)a->unk8;
    s32 var_19 = 0;
    s32 var_18 = 0;
    s32 var_16;
    
    if (inner->unk8 > 0) {
        do {
            var_16 = 0;
            if (inner->unkC > 0) {
                do {
                    s32 temp;
                    void *p;
                    temp = var_16 + 1;
                    p = func_001C67A0(a->unk8, var_19, var_16);
                    if (*(s32 *)p != 0) {
                        var_18 = var_18 + 1;
                    }
                    var_16++;
                } while (var_16 < inner->unkC);
            }
            var_19++;
        } while (var_19 < inner->unk8);
    }
    return var_18;
}

extern s32 func_002ABAB8(s32);
extern void func_002ABBE8(s64 *arg0, s64 *arg1);
extern s32 func_002ABC88(s64 *arg0, s64 *arg1, s64 *arg2);

void func_002ABEC8(s64 arg0, s64 arg1) {
    s64 sp[2];
    s64 sp2[2];
    s64 sp3[2];
    
    sp[0] = arg0;
    func_002ABBE8(sp, sp);
    sp2[0] = arg1;
    func_002ABBE8(sp2, sp2);
    func_002ABC88(sp, sp2, sp3);
    func_002ABAB8(func_002ABC88(sp, sp2, sp3));
}
