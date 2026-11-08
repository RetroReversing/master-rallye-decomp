extern void *func_002C2EE0(void);
extern void func_002C39D8(void *);
extern volatile void *D_00428F24;

s32 func_00110158(s32 arg0, s32 arg1) {
    s32 ret = 0;
    void *obj;
    if (D_00428F24 == 0) {
        func_002C39D8(func_002C2EE0());
    }
    obj = (void *)D_00428F24;
    if (obj != 0) {
        void *vt = *(void **)obj;
        s16 offset = *(s16 *)((u8 *)vt + 0x38);
        s32 (*fn)(void *, s32) = *(s32 (**)(void *, s32))((u8 *)vt + 0x3C);
        ret = fn((u8 *)obj + offset, arg1);
    }
    return ret;
}
