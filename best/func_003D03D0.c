extern void func_003CDDB0(s32, s32, s32, s32);
extern void func_003CE0D0(void **, s32, s32);
void *func_003D03D0(void **arg0, s32 arg1, s32 arg2, signed char arg3) {
    void **p;
    s32 diff;
    void *v;
    p = arg0;
    diff = arg1 - *(s32*)*p;
    func_003CDDB0(diff, 0, arg2, (s32)arg3);
    v = (void*)*p;
    if ((u32)(*(s32*)((u8*)v - 8)) < 2U) {
        func_003CE0D0(p, *(s32*)((u8*)v - 0x10), 1);
        v = (void*)*p;
    }
    *(s32*)((u8*)(*p) - 4) = 1;
    return (void*)((u8*)v + diff);
}
