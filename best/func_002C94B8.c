#include "context.h"

void *func_00152B80(s32);
void func_002C89F0(void *);
void func_002C8A98(void *, s32);
void func_002C7ED0(void *);
void func_002C7410(void *);
void func_003F9698(const char *, ...);
void *func_001D4040(void *, const char *);

extern u32 D_0040E618[];
extern u8 D_00429028[];
extern const char D_004822E0[];
extern u8 D_0049AEC8[];
extern const char D_004822B8[];

/* func_002C94B8 */
void *func_002C94B8(s32 arg0) {
    s32 sp0 = 0x14;
    u32 *ret = (u32 *)func_00152B80(sp0);
    if (sp0 != 1) {
        u32 *p = ret + arg0;
        u32 idx = ((arg0 + 7) >> 3) - 1;
        u32 *tab = (u32 *)((u8 *)D_0040E618 + idx * 4);
        tab[0] = (u32)p;
        if (sp0 - 1 != 1) {
            u32 i = 1;
            u32 *cur = p;
            while (i != sp0 - 1) {
                u32 *next = cur + arg0;
                cur[0] = (u32)next;
                cur = next;
                i++;
            }
            cur[0] = 0;
        } else {
            p[0] = 0;
        }
    }
    return ret;
}

/* func_002C9650 */
void func_002C9650(void *arg0, u32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            func_002C89F0(D_00429028);
            func_001D4040(D_0049AEC8, D_004822E0);
        } else {
            func_002C8A98(D_00429028, 2);
        }
    }
}

/* func_002C90D0 */
typedef struct {
    char pad[4];
    s32 unk4;
    char pad2[8];
    void *unkC;
} S_func_002C90D0;

void func_002C90D0(S_func_002C90D0 *arg0) {
    func_003F9698(D_004822B8);
    if (arg0->unk4 > 0) {
        s32 i = 0;
        void *p = arg0->unkC;
        while (i < arg0->unk4) {
            void *cur = (char *)p + i * 0x98;
            if (*(void **)((char *)cur + 0xC) != 0) {
                func_002C7ED0(cur);
            }
            i++;
        }
    }
}

/* func_002C8B38 */
void func_002C8B38(S_func_002C90D0 *arg0) {
    if (arg0->unk4 > 0) {
        s32 i = 0;
        void *p = arg0->unkC;
        while (i < arg0->unk4) {
            void *cur = (char *)p + i * 0x98;
            if (*(void **)((char *)cur + 0xC) != 0) {
                func_002C7410(cur);
            }
            i++;
        }
    }
}
