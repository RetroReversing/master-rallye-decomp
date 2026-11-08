#include "context.h"

void func_00178260(void *);
void func_002698B8(void *);

typedef struct Node20 {
    u8 pad[0x18];
    void *field18;
} Node20;

void func_00173C18(void *arg0) {
    s32 i;
    s32 count;
    void **base;
    Node20 **base20;

    count = (*(s32 *)((u8 *)arg0 + 0x24) - *(s32 *)((u8 *)arg0 + 0x20)) >> 2;
    if (count > 0) {
        i = 0;
        base20 = *(Node20 ***)((u8 *)arg0 + 0x20);
        do {
            func_002698B8(base20[i]->field18);
            i++;
        } while (i < count);
    }

    count = (*(s32 *)((u8 *)arg0 + 0x18) - *(s32 *)((u8 *)arg0 + 0x14)) >> 2;
    if (count > 0) {
        i = 0;
        base = *(void ***)((u8 *)arg0 + 0x14);
        do {
            func_00178260(base[i]);
            i++;
        } while (i < count);
    }
}
