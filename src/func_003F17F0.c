extern int D_0043E714;
extern int D_0043E720;
extern int D_0043E728;
extern int D_0043E72C;
extern int D_0043E754;
extern int DeleteSema_2(int);
extern int SignalSema_2(int);
extern void func_0040AF58(void);
extern int func_00405298(int);
extern void func_0040AFA0(void);

void func_003F1700(void) {
    if (D_0043E714 != 0) {
        D_0043E754 = -1;
        SignalSema_2(D_0043E720);
    }
    DeleteSema_2(D_0043E728);
    DeleteSema_2(D_0043E72C);
    DeleteSema_2(D_0043E720);
    func_0040AF58();
    func_00405298(0x80000012);
    func_0040AFA0();
}

extern int D_0043E724;
extern int (*D_0049D584)(int);
extern int D_0049D588;

void func_003F17F0(void) {
    if (D_0049D584 != 0) {
        if (D_0043E724 == 0) {
            D_0049D584(D_0049D588);
        }
    }
}
