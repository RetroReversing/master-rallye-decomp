extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);

typedef struct Node8B60 {
    struct Node8B60 *first;
    struct Node8B60 *next;
    u8 pad[8];
    void *vtable;
} Node8B60;

void func_001F8B60(Node8B60 *arg0, void *arg1) {
    void *loc = (u8 *)arg0 + 0x14;
    if (func_001D24B8(loc, 0, func_001CE2F8(loc), arg1) != -1) {
        if (arg0 != 0) {
            void *vt = arg0->vtable;
            s16 off = *(s16 *)((u8 *)vt + 8);
            void (*fn)(void *, s32) = *(void (**)(void *, s32))((u8 *)vt + 0xC);
            fn((u8 *)arg0 + off, 3);
        }
    } else {
        Node8B60 *p = arg0->first;
        if (p != 0) {
            do {
                Node8B60 *next = *(Node8B60 * volatile *)&p->next;
                func_001F8B60(p, arg1);
                p = next;
            } while (p != 0);
        }
    }
}
