extern void func_001E2460(void *, int);
extern void func_001E25B0(void *, const char *, void *);
extern void func_00297398(void *, int, int);
extern const char D_0047BBE0[];

void func_00298768(void *arg0, int arg2) {
    char sp[0x40];
    char sp10[0x30];
    func_001E2460(sp10, arg2);
    func_001E25B0(sp10, D_0047BBE0, (char *)arg0 + 0xC);
    *(int *)sp = 0;
    func_00297398(sp, *(int *)((char *)arg0 + 0xC), 0);
}
