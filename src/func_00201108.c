typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef float f32;

extern void *D_002AD408(s32);
extern void D_002AD390(void *);
extern void *func_00200408(void *);
extern void func_002006C0(void *);

void func_00200250(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(f32 *)((u8 *)arg0 + 0x1C) = 1.0f;
    *(s32 *)((u8 *)arg0 + 0x08) = 1;
}

void *func_00201108(void *arg0) {
    s32 i;
    void **p = (void **)arg0;
    for (i = 3; i >= 0; i--) {
        *p = func_00200408(D_002AD408(0xE0));
        p++;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = 1;
    return arg0;
}

void func_00201170(void *arg0, s32 arg1) {
    s32 i;
    void **p = (void **)arg0;
    for (i = 3; i >= 0; i--) {
        D_002AD390(*p);
        p++;
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

void func_002011F0(void *arg0) {
    s32 i;
    void **p = (void **)arg0;
    for (i = 3; i >= 0; i--) {
        func_002006C0(*p);
        p++;
    }
    *(s32 *)((u8 *)arg0 + 0x10) = 1;
}
