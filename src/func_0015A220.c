
extern void func_001D4040(void *, const char *);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E3EC0(s32, void *, s32);
extern const char D_0044AC50[];
extern const char D_0044AC68[];

void func_0015A220(void) {
    s32 buf;
    s32 id;
    s32 id2;
    s32 cnt;
    s32 id3;

    id = func_001E4280();
    func_001D4040(&buf, D_0044AC50);
    cnt = func_001E3650(id, (s32)&buf) + 1;
    id2 = func_001E4280();
    func_001D4040(&buf, D_0044AC50);
    func_001E3EC0(id2, &buf, cnt);
    if (cnt == 3) {
        id3 = func_001E4280();
        func_001D4040(&buf, D_0044AC68);
        func_001E3D10(id3, &buf, 1);
    }
}
