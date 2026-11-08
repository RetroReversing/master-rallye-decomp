extern char D_00446958[];
extern char D_0044BC38[];
extern char D_0044BCF0[];
extern char D_0044BD00[];
extern char D_0044BD10[];
extern char D_0044BD18[];
extern char D_0044BD30[];

void func_001E2460(void *, void *);
void func_001E2510(void *, const char *, void *);
void func_001E25B0(void *, const char *, void *);
void func_001E2A48(void *, const char *, void *);

void func_00141D00(void *arg0, int arg1, void *arg2) {
    int sp[4];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0044BC38, (void *)((char *)arg0 + 0xC));
    func_001E2A48(sp, D_0044BCF0, (void *)((char *)arg0 + 0x68));
    func_001E2A48(sp, D_0044BD00, (void *)((char *)arg0 + 0x74));
    func_001E2A48(sp, D_0044BD10, (void *)((char *)arg0 + 0x80));
    func_001E2510(sp, D_00446958, (void *)((char *)arg0 + 0xBC));
    func_001E25B0(sp, D_0044BD18, (void *)((char *)arg0 + 0xB0));
    func_001E25B0(sp, D_0044BD30, (void *)((char *)arg0 + 0xC0));
}
