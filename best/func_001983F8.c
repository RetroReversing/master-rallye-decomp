#include "context.h"

/* func_001983F8 */
void *func_001983F8(void *arg0, void *arg1) {
    void **base;
    void **end;
    s32 count;
    s32 i;
    void **p;

    base = *(void ***)arg0;
    end = *(void ***)((u8 *)arg0 + 4);
    count = ((s32)((u8 *)end - (u8 *)base)) >> 2;
    if (count > 0) {
        i = 0;
        p = base;
        do {
            void *entry = *p;
            i++;
            if (entry == 0) {
                /* nothing */
            } else if (*(void **)entry != arg1) {
                /* continue */
            } else {
                return entry;
            }
            p++;
        } while (i < count);
    }
    return 0;
}

/* func_00198450 */
void *func_00198450(void *arg0) {
    void *p3;
    void *p5;

    *(s32 *)arg0 = 0;
    p3 = (u8 *)arg0 + 4;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    p5 = (u8 *)arg0 + 0x20;
    *(s32 *)((u8 *)p3 + 0x18) = 0;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    *(s32 *)((u8 *)p3 + 4) = 0;
    *(s32 *)((u8 *)p3 + 8) = 0;
    *(s32 *)((u8 *)p3 + 0xC) = 0;
    *(s32 *)((u8 *)p3 + 0x10) = 0;
    *(s32 *)((u8 *)p3 + 0x14) = 0;
    *(s32 *)((u8 *)p5 + 0x18) = 0;
    *(s32 *)((u8 *)p5 + 4) = 0;
    *(s32 *)((u8 *)p5 + 8) = 0;
    *(s32 *)((u8 *)p5 + 0xC) = 0;
    *(s32 *)((u8 *)p5 + 0x10) = 0;
    *(s32 *)((u8 *)p5 + 0x14) = 0;
    return arg0;
}
