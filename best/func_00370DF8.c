extern void *D_004868C0;
extern void *D_004880F0;
extern u32 D_0040E618[];
extern void func_00374AB8(void *, s32);
extern void func_002B2028(void *);
extern void D_002AD390(void *);
extern void func_002D1F28(void *, s32);
extern void func_00374288(void *, void *);
extern void func_00370708(void *, s32);
extern void func_003B7D60(void *, s32);
extern void func_003742E8(void *, s32);
extern void func_002441A0(void *, s32);
extern void func_00244760(void *, s32);
extern void func_00263390(void *, s32);
extern void func_001DF180(void *, s32);

struct Elem24 {
    u8 pad[0x18];
};

struct Elem48 {
    u8 pad[0x30];
};

struct Vec24 {
    struct Elem24 *begin;
    struct Elem24 *end;
    struct Elem24 *cap;
};

struct Vec48 {
    struct Elem48 *begin;
    struct Elem48 *end;
    struct Elem48 *cap;
};

struct Vec4 {
    u32 *begin;
    u32 *end;
    u32 *cap;
};

struct ListNode {
    void *val0;
    struct ListNode *next;
    struct ListNode *val1;
    struct ListNode *val2;
};

struct List {
    struct ListNode *node;
    u32 size;
};

struct VtableObj {
    void *vtable;
};

struct Vtable {
    u8 pad[0x10];
    s16 offset;
    s16 pad2;
    void (*fn)(void *, s32);
};

struct MyObj {
    u8 pad0[0x10];
    void *vtable;
    u8 pad1[4];
    struct Vec48 *vec48;
    struct Vec4 *vec4_c;
    void *unk20;
    void *unk24;
    void *unk28;
    void *unk2C;
    struct VtableObj *unk30;
    void *unk34;
    void *unk38;
    struct Vec24 *vec24;
    struct List *list;
    struct Vec4 *vec4_a;
    u8 pad2[0x1C];
    void *unk64;
    void *unk68;
};

void func_00370DF8(struct MyObj *arg0, s32 arg1) {
    arg0->vtable = &D_004868C0;
    if (arg0->vec24 != NULL) {
        struct Vec24 *v = arg0->vec24;
        struct Elem24 *end = v->end;
        struct Elem24 *it = v->begin;
        if (it < end) {
            do {
                func_00374AB8(it, 2);
                it++;
            } while (it < end);
        }
        {
            struct Elem24 *cap = v->cap;
            struct Elem24 *begin = v->begin;
            s32 n = cap - begin;
            if (n != 0) {
                if (n * 0x18 != 0) {
                    func_002B2028(begin);
                } else {
                    *(u32 *)begin = D_0040E618[-1];
                    D_0040E618[-1] = (u32)begin;
                }
            }
        }
        D_002AD390(v);
    }
    if (arg0->unk2C != NULL) {
        func_002D1F28(arg0->unk2C, 3);
    }
    if (arg0->list != NULL) {
        struct List *l = arg0->list;
        if (l->size != 0) {
            func_00374288(l, l->node->next);
            l->node->val1 = l->node;
            l->node->next = NULL;
            l->node->val2 = l->node;
            l->size = 0;
        }
        func_002B2028(l->node);
        D_002AD390(l);
    }
    if (arg0->unk20 != NULL) {
        func_00370708(arg0->unk20, 3);
    }
    if (arg0->unk24 != NULL) {
        func_003B7D60(arg0->unk24, 3);
    }
    if (arg0->unk28 != NULL) {
        func_003742E8(arg0->unk28, 3);
    }
    if (arg0->unk30 != NULL) {
        struct Vtable *vt = *(struct Vtable **)arg0->unk30;
        vt->fn((u8 *)arg0->unk30 + vt->offset, 3);
    }
    if (arg0->unk34 != NULL) {
        func_002441A0(arg0->unk34, 3);
    }
    if (arg0->unk38 != NULL) {
        func_00244760(arg0->unk38, 3);
    }
    if (arg0->unk68 != NULL) {
        func_00263390(arg0->unk68, 3);
    }
    if (arg0->vec4_a != NULL) {
        struct Vec4 *v = arg0->vec4_a;
        u32 *cap = v->cap;
        u32 *begin = v->begin;
        s32 n = cap - begin;
        if (n != 0) {
            if (n * 4 != 0) {
                func_002B2028(begin);
            } else {
                *(u32 *)begin = D_0040E618[-1];
                D_0040E618[-1] = (u32)begin;
            }
        }
        D_002AD390(v);
    }
    if (arg0->vec48 != NULL) {
        struct Vec48 *v = arg0->vec48;
        struct Elem48 *it = v->begin;
        struct Elem48 *end = v->end;
        if (it < end) {
            do {
                it++;
            } while (it < end);
        }
        {
            struct Elem48 *cap = v->cap;
            struct Elem48 *begin = v->begin;
            s32 n = cap - begin;
            if (n != 0) {
                if (n * 0x30 != 0) {
                    func_002B2028(begin);
                } else {
                    *(u32 *)begin = D_0040E618[-1];
                    D_0040E618[-1] = (u32)begin;
                }
            }
        }
        D_002AD390(v);
    }
    if (arg0->vec4_c != NULL) {
        struct Vec4 *v = arg0->vec4_c;
        u32 *cap = v->cap;
        u32 *begin = v->begin;
        s32 n = cap - begin;
        if (n != 0) {
            if (n * 4 != 0) {
                func_002B2028(begin);
            } else {
                *(u32 *)begin = D_0040E618[-1];
                D_0040E618[-1] = (u32)begin;
            }
        }
        D_002AD390(v);
    }
    D_002AD390(arg0->unk64);
    arg0->vtable = &D_004880F0;
    func_001DF180(arg0, arg1);
}
