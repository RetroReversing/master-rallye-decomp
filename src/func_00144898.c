void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float*)((unsigned char*)arg0 + 0x30) * 2.5f;
}

extern int func_001930D8(int, int);
extern int func_00193138(int, int);
extern int func_00193B60(void);
extern void func_001D4040(void*, const char*);
extern void func_0021E4F0(void*);
extern void func_0029EA38(int);
extern void func_0029ECB8(int, const char*);
extern void func_003FA310(void*, const char*, int);

extern char D_0044BE10[];
extern char D_0044BE20[];

void func_00144898(int *arg0, int *arg1) {
    char buf[32];
    int v;

    if (func_00193138(func_00193B60(), arg0[3]) == 0) {
        func_0021E4F0(arg1);
    }
    func_003FA310(buf, D_0044BE10, func_001930D8(func_00193B60(), arg0[3]));
    func_001D4040(arg0 + 5, buf);
    v = arg1[1];
    if (v != 0) {
        func_0029EA38(v);
        func_0029ECB8(v, D_0044BE20);
    }
    arg0[4] = 0;
}
