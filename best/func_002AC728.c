typedef struct {
    s32 type;
    s32 sign;
    s32 exp;
    s32 unkC;
    u64 mant;
} unk_struct_t;

extern void func_002ABBE8(u64 *a0, unk_struct_t *a1);
extern u64 func_002ABAB8(unk_struct_t *a0);

extern void *D_00437E58;
extern char D_00439570[];
extern char D_0047D8F0[];
typedef void (*func_t)(void);
extern void *func_003D4F40(void *);
extern func_t func_002ABA80(s32);
extern s32 func_002B1FC0(void *);
extern void *func_003D4938(char *, char *);

void func_002AB240(void *arg0) {
    func_t var_2;
    
    do {
        var_2 = (func_t)D_00437E58;
        if (var_2 == 0) {
            func_003D4F40(func_003D4938(D_00439570, D_0047D8F0));
            var_2 = func_002ABA80(1);
        }
        var_2();
    } while (func_002B1FC0(arg0) == 0);
}

s64 func_002AC650(s64 arg0) {
    unk_struct_t sp;
    s64 sp20;
    
    sp20 = arg0;
    func_002ABBE8(&sp20, &sp);
    
    if (((sp.type ^ 2) == 0) || (sp.type < 2)) {
        return 0;
    }
    if (sp.exp == 0) {
        if ((sp.type ^ 4) != 0) {
            if (sp.sign >= 0) {
                if (sp.sign < 0x20) {
                    if (sp.sign >= 0x3D) {
                        return (s64)(sp.mant << (sp.sign - 0x3C));
                    } else {
                        return (s64)(sp.mant >> (0x3C - sp.sign));
                    }
                }
                return -1;
            }
            return 0;
        }
        return -1;
    }
    return 0;
}

void func_002AC6F0(s64 arg0) {
    unk_struct_t sp;
    s64 sp20;
    
    sp20 = arg0;
    func_002ABBE8(&sp20, &sp);
    sp.sign = (sp.sign == 0);
    func_002ABAB8(&sp);
}

u64 func_002AC728(s32 arg0, s32 arg1, s32 arg2, s64 arg3) {
    unk_struct_t sp;
    
    sp.type = arg0;
    sp.sign = arg1;
    sp.exp = arg2;
    sp.unkC = 0;
    sp.mant = arg3;
    
    return func_002ABAB8(&sp);
}
