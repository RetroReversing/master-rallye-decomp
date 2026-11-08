extern void func_001D4040(void*, void*);
extern s32 func_00295C50(s32, void*);
extern char D_0047B7F0[];

s32 func_00295BC8(s32 arg0, void *arg1) {
    u32 buf[4];
    void *sp = buf;
    func_001D4040(sp, D_0047B7F0);
    if (*(s32 *)((char *)arg1 + 0x20) == *(s32 *)sp) {
        void *var16 = *(void **)((char *)arg1 + 0x0);
        s32 var2 = 1;
        if (var16 != NULL) {
            for (;;) {
                var2 = 0;
                if (func_00295C50(arg0, var16) == 0) {
                    break;
                }
                var16 = *(void **)((char *)var16 + 0x4);
                if (var16 == NULL) {
                    var2 = 1;
                    break;
                }
            }
        }
        return var2;
    }
    return 0;
}
