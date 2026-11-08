extern s32 func_003DA6B8(s32);
extern u8 D_0048BD29[];

s32 func_003D30B0(s32 arg0) {
    s32 var;
    do {
        var = func_003DA6B8(arg0);
        if (var == -1) {
            break;
        }
    } while (D_0048BD29[var + (s32)&D_0048BD29 - (s32)&D_0048BD29] & 8); /* messy, better compute differently */
    return var;
}
