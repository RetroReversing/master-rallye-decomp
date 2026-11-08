extern void func_003ADCF0(void *a, void *b);
extern void func_003AD930(void *a, int b);
extern void func_003AD968(void *a, void *b);
extern int func_003ADD50(void *a, void *b);
extern int func_003ADD98(void *a, void *b);
extern void func_003ADC90(void *a, void *b);
extern void *func_003ADDE0(void *a);
extern int func_003AC680(void *a, void *b);
extern void func_003A4418(void *a, int b);
extern void func_003ADE18(void *a);
extern char *func_003A4718(void *a);
extern void func_003F9698(char *a, ...);

extern char D_0042FD60[];
extern char D_00487440[];
extern char D_00487450[];

void func_003A6C58(void *arg0, void *arg1) {
    char sp[0x40];
    void *p10;
    void *p20;
    void *p30;
    int var_20;
    int temp_20;
    void *r;
    void *temp_19;
    void *temp_2;
    short *vt;
    char *s;

    func_003ADCF0(sp, D_0042FD60);
    p10 = sp + 0x10;
    func_003AD930(p10, 0);

loop_1:
    var_20 = 0;
    p20 = sp + 0x20;
    func_003AD968(p20, D_0042FD60);
    if (func_003ADD50(sp, p20) != 0) {
        p30 = sp + 0x30;
        func_003AD930(p30, 0);
        if (func_003ADD98(p10, p30) != 0) {
            var_20 = 1;
        }
    }
    if (var_20 == 0) goto L3A6DA0;

    p20 = sp + 0x20;
    r = func_003ADDE0(sp);
    func_003ADC90(p20, *(void **)r);
    temp_20 = func_003AC680(p20, arg0);
    func_003A4418(p20, 2);
    if (temp_20 != 0) {
        *(int *)p10 = *(int *)sp;
    }
    func_003ADE18(sp);
    goto loop_1;

L3A6DA0:
    p20 = sp + 0x20;
    func_003AD930(p20, 0);
    if (func_003ADD50(p10, p20) != 0) {
        r = func_003ADDE0(p10);
        temp_19 = *(void **)r;
        temp_2 = *(void **)((char *)temp_19 + 8);
        vt = (short *)((char *)temp_2 + 0x10);
        (*(void (**)(void *, void *))((char *)vt + 4))(
            (char *)temp_19 + *vt, arg1);
        goto L3A6E60;
    }
    s = func_003A4718(arg0);
    if (s == 0) {
        func_003F9698(D_00487440);
        goto L3A6E60;
    }
    func_003F9698(D_00487450, s);

L3A6E60:
    func_003A4418(arg0, 2);
}
