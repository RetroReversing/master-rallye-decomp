extern void func_003CDDB0(void **, s32, s32, s32, s32);
extern void func_003CE0D0(void *, void *, s32);

void *func_003D0450(void **arg0, s32 arg1, s8 arg2) {
    void *p = *arg0;
    s32 diff = arg1 - (s32)p;
    func_003CDDB0(arg0, diff, 0, 1, (s32)arg2);
    p = *arg0;
    if (*(u32 *)((char *)p - 8) >= 2) {
        func_003CE0D0(p, *(void **)((char *)p - 0x10), 1);
        p = *arg0;
    }
    *(s32 *)((char *)p - 4) = 1;
    return (char *)p + diff;
}
