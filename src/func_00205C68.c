extern void *D_002AD390(void *);
extern void func_0021DDD8(void *, s32);
extern void *D_004785B0;

void func_00205C68(void *arg0, s32 arg1) {
    void *obj;
    s32 *vtable;
    s32 off;
    s32 fn;

    *(s32 *)arg0 = (s32)&D_004785B0;
    obj = *(void **)((u8 *)arg0 + 0x80);
    if (obj != NULL) {
        vtable = *(s32 *)obj;
        off = *(s16 *)((u8 *)vtable + 8);
        fn = *(s32 *)((u8 *)vtable + 0xC);
        ((void (*)(void *, s32))fn)((u8 *)obj + off, 3);
    }
    func_0021DDD8((u8 *)arg0 + 4, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
