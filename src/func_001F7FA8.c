void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);

typedef struct NodeEF8 {
    struct NodeEF8 *first;
    struct NodeEF8 *next;
} NodeEF8;

NodeEF8 *func_001F7EF8(NodeEF8 *arg0, void *arg1) {
    void *loc = (u8 *)arg0 + 0x14;
    NodeEF8 *p;

    if (func_001D24B8(loc, 0, func_001CE2F8(loc), arg1) != -1)
        return arg0;
    p = arg0->first;
    if (p != NULL) {
        do {
            NodeEF8 *r = func_001F7EF8(p, arg1);
            if (r != NULL)
                return r;
            p = p->next;
        } while (p != NULL);
    }
    return NULL;
}

extern s32 func_001DF2B0(s32, s32, s32);

typedef struct NodeFA8 {
    struct NodeFA8 *first;
    struct NodeFA8 *next;
    u8 pad[8];
    void *vtable;
} NodeFA8;

s32 func_001F7FA8(NodeFA8 *arg0) {
    void *vt = arg0->vtable;
    s16 off = *(s16 *)((u8 *)vt + 0x58);
    s32 (*fn)(void *) = *(s32 (**)(void *))((u8 *)vt + 0x5C);
    s32 ret = fn((u8 *)arg0 + off);
    NodeFA8 *child = arg0->first;
    if (child != NULL) {
        do {
            s32 r = func_001F7FA8(child);
            func_001DF2B0(ret, r, 0);
            child = child->next;
        } while (child != NULL);
    }
    return ret;
}

typedef struct Node8B60 {
    struct Node8B60 *first;
    struct Node8B60 *next;
    u8 pad[8];
    void *vtable;
} Node8B60;

void func_001F8B60(Node8B60 *arg0, void *arg1) {
    void *loc = (u8 *)arg0 + 0x14;
    if (func_001D24B8(loc, 0, func_001CE2F8(loc), arg1) == -1) {
        Node8B60 *p = arg0->first;
        if (p != NULL) {
            do {
                Node8B60 *next = p->next;
                func_001F8B60(p, arg1);
                p = next;
            } while (p != NULL);
        }
    } else if (arg0 != NULL) {
        void *vt = arg0->vtable;
        s16 off = *(s16 *)((u8 *)vt + 8);
        void (*fn)(void *, s32) = *(void (**)(void *, s32))((u8 *)vt + 0xC);
        fn((u8 *)arg0 + off, 3);
    }
}
