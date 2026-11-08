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
    s32 v = arg1;
    if (arg0 < arg1) {
        v = arg0;
    }
    if (arg2 < v) {
        v = arg2;
    }
    return v;
}

extern s32 func_002C1FD0(s32);
extern s32 func_002C2100(s32, s32);
extern void func_003F9698(const char *);
extern s32 D_00428F0C;
extern s32 D_00428F14;
extern s32 D_0049AAC0;
extern char D_004814B0[];
extern char D_004814C0[];

s32 func_002C2588(s32 arg0, s32 arg1) {
    s32 ret = 0;
    if (func_002C1FD0(arg1)) {
        D_00428F0C = 0;
        D_0049AAC0 = 0;
        func_003F9698(D_004814B0);
        do {
        } while (func_002C2100(arg0, 1));
        ret = 1;
        func_003F9698(D_004814C0);
        D_00428F14 = 0;
    }
    return ret;
}

extern void func_003F9698(const char *, const char *, s32);
extern char D_00481440[];
extern char D_00481470[];

void func_002C2548(s32 arg0, s32 arg1) {
    func_003F9698(D_00481440, D_00481470, *(s32 *)(arg1 + 4));
    for (;;) {
    }
}
