extern void func_002ABBE8(s64 *arg0, void *arg1);
extern void func_002AD320(s32 a0, s32 a1, s32 a2, s64 a3, s64 t0);

void func_002AC758(s64 arg0) {
    s64 sp20[2];
    sp20[0] = arg0;
    func_002ABBE8(sp20, (void *)sp20); // try passing sp
    s32 a0 = *(s32 *)((char *)sp20 + 0x0);
    s32 a1 = *(s32 *)((char *)sp20 + 0x4);
    s32 a2 = *(s32 *)((char *)sp20 + 0x8);
    s64 v0 = *(s64 *)((char *)sp20 + 0x10);
    s64 t0 = (s64)(v0 * 4) >> 32;
    s64 a3 = (v0 & 0x3FFFFFFF) != 0 ? (t0 | 1) : t0;
    func_002AD320(a0, a1, a2, a3, t0);
}
