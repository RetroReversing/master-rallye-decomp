extern void func_003E4F70(void);
extern int func_003E5240(void *, int);
extern void func_003E5348(void *, int);

void func_003E5588(void *arg0) {
    unsigned int v;
    func_003E4F70();
    v = (*(volatile unsigned int *)0x10002020) & 7;
    v = ((unsigned int)(-(int)v)) & 7;
    if (v) {
        func_003E5348(arg0, v);
    }
    for (;;) {
        func_003E5348(arg0, 8);
        if (func_003E5240(arg0, 0x18) == 1) break;
    }
}
