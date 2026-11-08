typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;

s32 func_002D2E00(s32 arg0, s32 arg1, s32 arg2) {
    s32 t;
    t = (arg0 < arg1) ? arg0 : arg1;
    if (arg2 < t) {
        t = arg2;
    }
    return t;
}

extern void *D_002AD408(s32);
extern void *func_002EF400(void *);
extern s32 func_00244760(s32, s32);
extern s32 func_0021E6F0(s32, void *);

void func_002E3670(s32 arg0, s32 arg1, s32 arg2) {
    void *obj;
    s32 v;

    obj = func_002EF400(D_002AD408(0xC));
    v = *(s32 *)((u8 *)obj + 8);
    if (v != 0) {
        func_00244760(v, 3);
    }
    *(s32 *)((u8 *)obj + 8) = arg1;
    func_0021E6F0(arg2, obj);
}

extern s32 func_002C1FD0(s32);
extern s32 func_002C2100(s32, s32);
extern void func_003F9698(const char *);
extern s32 D_00428F0C;
extern s32 D_00428F14;
extern s32 D_0049AAC0;

s32 func_002C2588(s32 arg0, s32 arg1) {
    s32 ret;

    ret = 0;
    if (func_002C1FD0(arg1) != 0) {
        D_00428F0C = 0;
        D_0049AAC0 = 0;
        func_003F9698((const char *)0x004814B0);
        while (func_002C2100(arg0, 1) != 0) {
        }
        ret = 1;
        func_003F9698((const char *)0x004814C0);
        D_00428F14 = 0;
    }
    return ret;
}

extern void func_003F9698(const char *, const char *, s32);

void func_002C2548(s32 arg0, s32 arg1) {
    s32 *p = (s32 *)arg1;
    func_003F9698((const char *)0x00481440, (const char *)0x00481470, p[1]);
    while (1) {
    }
}
