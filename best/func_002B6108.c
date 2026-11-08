s32 func_003F9698(const char *, ...);
s32 func_002B61D0(s32 *, s32 *, s32);

extern char D_0047EE68[];
extern char D_0047EE00[];
extern char D_0047EE38[];
extern char D_0047EE60[];

void func_002B6108(s32 *arg0, char *arg1) {
    func_003F9698(D_0047EE00);
    if (arg1 != 0) {
        func_003F9698(D_0047EE38, arg1);
    } else {
        func_003F9698(D_0047EE38, D_0047EE60);
    }
    func_003F9698(D_0047EE00);
    *arg0 = func_002B61D0(arg0, arg1, 1);
}
