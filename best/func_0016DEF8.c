extern void func_0016E1D8(void *);
extern void func_0016F080(void *, s32);
extern void func_001C6998(void *, s32 *, void *);

void func_0016DEF8(void *arg0, s32 arg1) {
    s32 sp0 = arg1;
    void *t = (char *)arg0 + 8;
    s32 *a = *(s32 **)((char *)t + 4);
    s32 *b = *(s32 **)((char *)t + 8);
    if (a == b) {
        func_001C6998(t, a, &sp0);
    } else {
        if (a != NULL) {
            *a = arg1;
        }
        *(s32 **)((char *)t + 4) = (s32 *)((char *)a + 4);
    }
    func_0016E1D8(arg0);
    func_0016F080(arg0, sp0);
}
