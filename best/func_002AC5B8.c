typedef struct {
    s32 type;
    s32 sign;
    s32 exp;
    s32 unkC;
    u64 mant;
} unk_struct_t;

extern void func_002ABBE8(u64 *a0, unk_struct_t *a1);
extern unk_struct_t *func_002ABC88(unk_struct_t *a0, unk_struct_t *a1, unk_struct_t *a2);
extern void func_002ABAB8(unk_struct_t *a0);
extern unk_struct_t *func_002AC398(unk_struct_t *a0, unk_struct_t *a1);

void func_002ABF20(s64 arg0, s64 arg1) {
    unk_struct_t sp[3];
    u64 sp60;
    u64 sp68;
    
    sp60 = arg0;
    sp68 = arg1;
    
    func_002ABBE8(&sp60, &sp[0]);
    func_002ABBE8(&sp68, &sp[1]);
    sp[1].sign ^= 1;
    func_002ABAB8(func_002ABC88(&sp[0], &sp[1], &sp[2]));
}

void func_002AC4B0(s64 arg0, s64 arg1) {
    unk_struct_t sp[2];
    u64 sp40;
    u64 sp48;
    
    sp40 = arg0;
    sp48 = arg1;
    
    func_002ABBE8(&sp40, &sp[0]);
    func_002ABBE8(&sp48, &sp[1]);
    func_002AC398(&sp[0], &sp[1]);
}

u64 func_002AC500(u64 arg0) {
    unk_struct_t sp;
    u64 sp10;
    u32 var_4;
    
    sp.type = 3;
    sp.sign = 0;
    
    if (arg0 != 0) {
        sp.type = 0x3C;
        sp.sign = (u32)(arg0 >> 63);
        if (arg0 >> 63) {
            if (arg0 == 0x80000000ULL) {
                func_002ABAB8(&sp);
                return 0xC1E0000000000000ULL;
            }
            sp10 = -arg0;
            var_4 = sp.type;
            if ((u64)0x0FFFFFFFFFFFFFFFULL < sp10) {
                do {
                    sp10 = sp10 << 1;
                    var_4--;
                } while ((u64)0x0FFFFFFFFFFFFFFFULL >= sp10);
                sp.type = var_4;
            }
            sp.mant = sp10;
            func_002ABAB8(&sp);
            return 0;
        } else {
            sp10 = arg0;
            var_4 = sp.type;
            if ((u64)0x0FFFFFFFFFFFFFFFULL < sp10) {
                do {
                    sp10 = sp10 << 1;
                    var_4--;
                } while ((u64)0x0FFFFFFFFFFFFFFFULL >= sp10);
                sp.type = var_4;
            }
            sp.mant = sp10;
            func_002ABAB8(&sp);
            return 0;
        }
    } else {
        sp.type = 2;
    }
    
    func_002ABAB8(&sp);
    return 0;
}

s64 func_002AC5B8(s64 arg0) {
    unk_struct_t sp;
    s64 sp20;
    s64 temp;
    
    sp20 = arg0;
    func_002ABBE8(&sp20, &sp);
    
    if (((sp.type ^ 2) == 0) || (sp.type < 2)) {
        return 0;
    }
    
    if ((sp.type ^ 4) != 0) {
        if (sp.sign >= 0) {
            if (sp.sign >= 0x1F) {
                if (sp.exp != 0) {
                    return 0x7FFFFFFFLL;
                } else {
                    return 0x80000000LL;
                }
            }
            temp = (s64)((sp.mant >> (0x3C - sp.sign)) << 32) >> 32;
            if (sp.exp != 0) {
                return -temp;
            } else {
                return temp;
            }
        }
        return 0;
    }
    
    if (sp.exp != 0) {
        return 0x7FFFFFFFLL;
    } else {
        return 0x80000000LL;
    }
}
