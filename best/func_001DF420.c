extern void *D_002AD408(s32);
extern void func_001D2488(void *, void *);
extern void func_001DF2B0(void *, void *, s32);
extern void func_001EAE78(void *, void *);
extern void func_001EB128(void *, void *);
extern char D_0044DD18[];

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char *)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0) {
        ret = *v;
    }
    return ret;
}

typedef struct Vec8 {
    void *begin;
    void *end;
    void *cap;
} Vec8;

typedef struct Obj1DF420 {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fC;
    void *vtable;
    Vec8 vec;
    u32 f20;
} Obj1DF420;

void *func_001DF420(void *arg0, void *arg1, void *arg2) {
    Obj1DF420 *obj = (Obj1DF420 *)arg0;
    void *sub = (char *)arg0 + 0x14;
    obj->vtable = D_0044DD18;
    obj->f8 = 0;
    obj->fC = 0;
    obj->f4 = 0;
    obj->f0 = 0;
    ((Vec8 *)sub)->begin = 0;
    ((Vec8 *)sub)->end = 0;
    ((Vec8 *)sub)->cap = 0;
    obj->f20 = 0;
    obj->f20 = *(u32 *)arg1;
    {
        void *end = ((Vec8 *)sub)->end;
        void *cap = ((Vec8 *)sub)->cap;
        if (end != cap) {
            if (end != 0) {
                *(u32 *)end = *(u32 *)arg2;
                func_001D2488((char *)end + 4, (char *)arg2 + 4);
            }
            ((Vec8 *)sub)->end = (char *)((Vec8 *)sub)->end + 8;
        } else {
            func_001EAE78(sub, end);
        }
    }
    return arg0;
}

typedef struct Node1DF4C8 {
    struct Node1DF4C8 *child;
    struct Node1DF4C8 *next;
    u32 f8;
    u32 fC;
    void *vtable;
    Vec8 vec;
    u32 f20;
} Node1DF4C8;

void *func_001DF4C8(void *arg0) {
    Node1DF4C8 *src = (Node1DF4C8 *)arg0;
    Node1DF4C8 *obj = (Node1DF4C8 *)D_002AD408(0x24);
    Vec8 *vec = &obj->vec;
    void *sub = &obj->vec;
    obj->f8 = 0;
    obj->vtable = D_0044DD18;
    obj->fC = 0;
    obj->next = 0;
    obj->child = 0;
    vec->begin = 0;
    vec->end = 0;
    vec->cap = 0;
    obj->f20 = 0;
    func_001EB128(sub, &src->vec);
    {
        u32 val = src->f20;
        Node1DF4C8 *cur = src->child;
        if (cur != 0) {
            obj->f20 = val;
            do {
                void *clone = func_001DF4C8(cur);
                func_001DF2B0(obj, clone, 0);
                cur = cur->next;
            } while (cur != 0);
        } else {
            obj->f20 = val;
        }
    }
    return obj;
}

void *func_001DF578(void **arg0, u32 *arg1) {
    Node1DF4C8 *node = (Node1DF4C8 *)*arg0;
    if (node != 0) {
        u32 target = *arg1;
        u32 val = node->f20;
        do {
            if (val == target) {
                return node;
            }
            node = node->next;
            if (node == 0) break;
            val = node->f20;
        } while (1);
    }
    return 0;
}
