s64 func_003D9E30(s8* buf, s32 size, s8 c, s32 arg4, s32* out);
s32 func_003DA6B8(s32);
s32 func_003F931C(s32, s8*, s64);
s64 D_002AD5A8(s64);

s32 func_003D6678(s32 arg0, s64* arg1, s8 arg2)
{
    s8 sp[0x200];
    s32 sp200;
    s32 var3;
    s32 var17 = 0;
    s64 temp18;
    s64 temp20;
    s32 temp16;
    s8 c;
    
    c = (s8)(arg2 << 24 >> 24);
    sp200 = -1;
    var3 = -1;
    temp18 = func_003D9E30(sp, 0x200, c, -1, &sp200);
    if (var3 != -1) {
        var3 = func_003DA6B8(arg0);
        sp200 = var3;
    }
    
    temp20 = *arg1;
    *arg1 = temp20 + (s32)temp18;
    if (sp200 != -1 && sp200 != c) {
        *arg1 = *arg1 + 1;
        var17 = func_003D6678(arg0, arg1, arg2);
        if (var17 != 0) {
            temp16 = (s32)temp20;
            func_003F931C(var17 + temp16, sp, temp18);
            *(s8*)(var17 + temp16 + (s32)temp18) = (s8)sp200;
        }
    } else {
        var17 = D_002AD5A8((s64)((s32)(*arg1 + 1)));
        if (var17 != 0) {
            *(s8*)(var17 + (s32)(*arg1)) = 0;
            func_003F931C(var17 + (s32)(*arg1) - (s32)temp18, sp, temp18);
        }
    }
    return var17;
}
