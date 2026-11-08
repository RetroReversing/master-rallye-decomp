void func_001D4040(void*, const char*);
extern char D_0047C590[];
extern char D_0047C5A0[];
extern char D_0047C5B0[];
extern char D_0047C5C0[];
extern char D_0047C5D0[];
extern char D_0047C648[];

void *func_002A2D60(void *arg0) {
    s32 sp0;
    s32 sp10;

    func_001D4040(&sp0, D_0047C590);
    {
        s32 v = sp0;
        ((s32*)arg0)[2] = 0;
        ((s32*)arg0)[3] = 0;
        ((s32*)arg0)[4] = 0;
        ((s32*)arg0)[5] = 0;
        ((s32*)arg0)[0] = v;
        ((s32*)arg0)[1] = (s32)D_0047C648;
    }
    func_001D4040(&sp10, D_0047C5A0);
    ((s32*)arg0)[2] = sp10;
    func_001D4040(&sp10, D_0047C5B0);
    ((s32*)arg0)[3] = sp10;
    func_001D4040(&sp10, D_0047C5C0);
    ((s32*)arg0)[4] = sp10;
    func_001D4040(&sp10, D_0047C5D0);
    ((s32*)arg0)[5] = sp10;
    return arg0;
}
