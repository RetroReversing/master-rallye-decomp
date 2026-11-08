extern void func_003F9698(const char *, ...);
extern char D_00448828[];

s32 func_00126828(s32 arg0, s32 arg1) {
    s32 var_2;

    func_003F9698(D_00448828, arg1);
    var_2 = 3;
    if ((arg1 >= -9) && (var_2 = 0, (arg1 < 0))) {
        switch (arg1) {
        case -3:
            return 4;
        case -2:
            var_2 = 5;
            return var_2;
        default:
            return 2;
        }
    } else {
        return var_2;
    }
}
