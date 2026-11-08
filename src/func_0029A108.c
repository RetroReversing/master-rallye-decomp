void func_001E2460(void *, void *);
void func_001E2470(void *, const char *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001E28F8(void *, const char *, void *);

extern char D_0047BCF8[];
extern char D_0047BD00[];
extern char D_0047BD18[];
extern char D_0047BD28[];
extern char D_0047BD38[];
extern char D_0047BD48[];
extern char D_0047BD60[];

void func_0029A108(void *arg0, void *arg1, void *arg2) {
    int sp[4];
    void *s = arg0;
    func_001E2460(sp, arg2);
    func_001E28F8(sp, D_0047BCF8, (char *)s + 0xC);
    func_001E25B0(sp, D_0047BD00, (char *)s + 0x10);
    func_001E25B0(sp, D_0047BD18, (char *)s + 0x14);
    func_001E25B0(sp, D_0047BD28, (char *)s + 0x18);
    func_001E25B0(sp, D_0047BD38, (char *)s + 0x1C);
    func_001E2470(sp, D_0047BD48, (char *)s + 0x20);
    func_001E25B0(sp, D_0047BD60, (char *)s + 0x24);
}
