extern s32 func_002BB070(void *);
extern void func_003F9698(char *);
extern char D_00428978[];
extern char D_004802C0[];

s32 func_002BBD08(void *a0, s32 arg1, s32 arg2) {
    s32 var_19 = 0;
    s32 var_16 = arg2;
    char *base = D_00428978;
    char *var_4;

    (void)a0;
    if (func_002BB070(base) != 0) {
        var_4 = base + arg1 * 12;
    } else {
        var_4 = 0;
    }

    if (var_4 != 0) {
        if (var_16 < 0) {
            var_16 = 0;
        } else {
            char *p = *(char **)var_4;
            s32 temp_3;
            /* unaligned 32-bit load at p+8 */
            temp_3 = *(s32 *)(p + 8);
            if (var_16 >= temp_3) {
                var_16 = temp_3;
            }
        }
        *(s32 *)(var_4 + 8) = var_16;
        var_19 = 1;
    } else {
        func_003F9698(D_004802C0);
    }
    return var_19;
}
