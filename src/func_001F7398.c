#include "context.h"

extern void *func_00212F78(void *, s32);
extern void *func_00210748(void *, void *);
extern void *func_002106B0(void *, s32);
extern void *func_001D2CD8(void *, void *);
extern char D_00477550[];

void *func_001F7398(void *arg0) {
    char tmp[16];
    void *p0c;
    void *p10;

    p0c = (u8 *)arg0 + 0xC;
    p10 = (u8 *)arg0 + 0x10;
    *(s32 *)p0c = 0;
    *(s32 *)p10 = 0;
    *(s32 *)arg0 = 0;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    func_00212F78(tmp, 0);
    func_00210748(p0c, tmp);
    func_002106B0(tmp, 2);
    func_001D2CD8(p10, D_00477550);
    return arg0;
}
