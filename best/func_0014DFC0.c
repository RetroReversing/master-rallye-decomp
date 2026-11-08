#include "context.h"

extern void *func_001D4040(void *, const char *);
extern void D_0044C6C0;
extern void D_0044C700;
extern const char D_0044C558[];
extern const char D_0044C500[];
extern const char D_0044C510[];

extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_0014E028(void *, s32);

extern s32 func_001E2460(void *, s32);
extern s32 func_001E25B0(void *, const char *, void *);
extern s32 func_001E28F8(void *, const char *, void *);

extern const char D_0044BC38[];
extern const char D_0044C520[];
extern const char D_0044C530[];

void *func_0014E3B8(void *arg0) {
    u32 sp0;
    func_001D4040(&sp0, D_0044C558);
    ((u32 *)arg0)[0] = -1;
    ((u32 *)arg0)[1] = sp0;
    ((u32 *)arg0)[2] = (u32)&D_0044C6C0;
    ((u32 *)arg0)[4] = 0;
    ((u32 *)arg0)[5] = 0;
    ((u32 *)arg0)[6] = 0;
    ((u32 *)arg0)[7] = 0;
    ((u32 *)arg0)[8] = 0;
    ((u32 *)arg0)[9] = 0;
    ((u32 *)arg0)[10] = 0;
    ((u32 *)arg0)[11] = 0;
    ((u32 *)arg0)[12] = 0;
    return arg0;
}

void func_0014E360(void *arg0) {
    s32 v0;
    s32 v1;
    v0 = func_001E4280();
    v1 = func_001E3650(v0, (s32)arg0 + 0x20);
    if (v1 != ((s32 *)arg0)[4]) {
        func_0014E028(arg0, v1);
        ((s32 *)arg0)[4] = v1;
    }
}

void func_0014DFC0(void *arg0, s32 arg2) {
    u8 sp[0x30];
    func_001E2460(sp, arg2);
    func_001E25B0(sp, D_0044BC38, (u8 *)arg0 + 0xC);
    func_001E28F8(sp, D_0044C520, (u8 *)arg0 + 0x24);
    func_001E25B0(sp, D_0044C530, (u8 *)arg0 + 0x28);
}

void *func_0014DE38(void *arg0) {
    u32 sp0;
    func_001D4040(&sp0, D_0044C500);
    ((u32 *)arg0)[3] = 0;
    ((u32 *)arg0)[5] = 0;
    ((u32 *)arg0)[6] = 0;
    ((u32 *)arg0)[7] = 0;
    ((u32 *)arg0)[8] = 0;
    ((u32 *)arg0)[9] = 0;
    ((u32 *)arg0)[1] = sp0;
    ((u32 *)arg0)[2] = (u32)&D_0044C700;
    ((u32 *)arg0)[4] = -1;
    ((u32 *)arg0)[10] = 0x67;
    ((u32 *)arg0)[0] = -1;
    func_001D4040((u8 *)arg0 + 0x24, D_0044C510);
    return arg0;
}
