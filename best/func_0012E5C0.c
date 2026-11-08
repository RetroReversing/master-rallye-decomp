#include "context.h"

extern void func_001D4040(void *arg0, const char *arg1);
extern s32 func_0021F4B0(void);
extern void *func_0021E9C0(s32, void *);
extern void func_003FA310(char *, const char *, ...);

extern char D_004496F8[];
extern char D_004496E8[];

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_0012E5C0(void *unused, s32 arg1) {
    char buf[0x10];
    char name[0x10];
    s32 i;
    s32 mask;
    s32 flag;

    mask = -2;
    flag = arg1 & 1;
    i = 1;
    do {
        func_003FA310(buf, D_004496F8, i);
        i++;
        {
            s32 ctx = func_0021F4B0();
            void *ent;
            func_001D4040(name, buf);
            ent = func_0021E9C0(ctx, name);
            if (ent != NULL) {
                void *sub = *(void **)((u8 *)ent + 0x4C);
                if (sub != NULL) {
                    s64 v = *(s64 *)((u8 *)sub + 0x78);
                    *(s64 *)((u8 *)sub + 0x78) = (v & mask) | flag;
                }
            }
        }
    } while (i < 4);
}

void func_0012E500(void *unused, s32 arg1) {
    char buf[0x10];
    char name[0x10];
    s32 i;
    s32 mask;
    s32 flag;

    mask = -2;
    flag = arg1 & 1;
    i = 1;
    do {
        func_003FA310(buf, D_004496E8, i);
        i++;
        {
            s32 ctx = func_0021F4B0();
            void *ent;
            func_001D4040(name, buf);
            ent = func_0021E9C0(ctx, name);
            if (ent != NULL) {
                void *sub = *(void **)((u8 *)ent + 0x4C);
                if (sub != NULL) {
                    s64 v = *(s64 *)((u8 *)sub + 0x78);
                    *(s64 *)((u8 *)sub + 0x78) = (v & mask) | flag;
                }
            }
        }
    } while (i < 6);
}
