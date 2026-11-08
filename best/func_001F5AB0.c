#include "context.h"

extern s32 func_002AD408(s32);
extern void *func_001F5A58(s32);
extern void *func_001D2CD8(void *, void *);
extern void *func_001F60A8(s32);
extern void *func_00212F78(void *, s32);
extern void *func_00210748(void *, void *);
extern void *func_002106B0(void *, s32);
extern char D_00477550[];

/* func_0016D178 - scheduling artifact under project compiler */
void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

/* func_001F5AB0 */
void *func_001F5AB0(void *arg0) {
    void *obj;
    void *src;
    void *dst;
    f32 tmp[4];

    obj = func_001F5A58(func_002AD408(0x30));
    func_001D2CD8((u8 *)obj + 0x14, *(void **)((u8 *)arg0 + 0x14));
    *(s32 *)((u8 *)obj + 0x18) = *(s32 *)((u8 *)arg0 + 0x18);
    src = (u8 *)arg0 + 0x20;
    dst = (u8 *)obj + 0x20;
    tmp[0] = *(f32 *)((u8 *)src + 0);
    tmp[1] = *(f32 *)((u8 *)src + 4);
    tmp[2] = *(f32 *)((u8 *)src + 8);
    tmp[3] = *(f32 *)((u8 *)src + 12);
    *(f32 *)((u8 *)dst + 0) = tmp[0];
    *(f32 *)((u8 *)dst + 4) = tmp[1];
    *(f32 *)((u8 *)dst + 8) = tmp[2];
    *(f32 *)((u8 *)dst + 12) = tmp[3];
    return obj;
}

/* func_001F60E8 */
void *func_001F60E8(void *arg0) {
    void *obj;

    obj = func_001F60A8(func_002AD408(0x24));
    func_001D2CD8((u8 *)obj + 0x14, *(void **)((u8 *)arg0 + 0x14));
    *(s32 *)((u8 *)obj + 0x18) = *(s32 *)((u8 *)arg0 + 0x18);
    func_001D2CD8((u8 *)obj + 0x1C, *(void **)((u8 *)arg0 + 0x1C));
    *(s32 *)((u8 *)obj + 0x20) = *(s32 *)((u8 *)arg0 + 0x20);
    return obj;
}

/* func_001F7398 */
void *func_001F7398(void *arg0) {
    char tmp[16];

    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x0) = 0;
    *(s32 *)((u8 *)arg0 + 0x4) = 0;
    *(s32 *)((u8 *)arg0 + 0x8) = 0;
    func_00212F78(tmp, 0);
    func_00210748((u8 *)arg0 + 0xC, tmp);
    func_002106B0(tmp, 2);
    func_001D2CD8((u8 *)arg0 + 0x10, D_00477550);
    return arg0;
}
