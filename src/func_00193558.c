extern void func_001D4040(void *, void *);
extern void func_001E3878(s32, void *);
extern void func_001E3610(s32, void *);
extern s32 func_001E4280(void);

void func_001934C8(void *arg0) {
    s32 tmp;
    char buf[16];
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((unsigned char *)arg0 + 0xC0));
    func_001E3878(tmp, buf);
}

void func_00193510(void *arg0) {
    s32 tmp;
    char buf[16];
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((unsigned char *)arg0 + 0xC4));
    func_001E3610(tmp, buf);
}

void func_00193558(void *arg0) {
    s32 tmp;
    char buf[16];
    tmp = func_001E4280();
    func_001D4040(buf, *(void **)((unsigned char *)arg0 + 0xC8));
    func_001E3610(tmp, buf);
}
