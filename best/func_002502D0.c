typedef struct Node4 {
    struct Node4 *next;
    struct Node4 *prev;
    u32 unk8;
} Node4;

typedef struct Node4h {
    Node4 *head;
    Node4 *unk4;
} Node4h;

s32 func_002502D0(Node4h *arg0, u32 arg1) {
    Node4 *head;
    Node4 *cur;

    head = arg0->head;
    cur = head->next;
    if (cur == head) {
        return 0;
    }
    do {
        if (cur->unk8 != arg1) {
            cur = cur->next;
            continue;
        }
        return 1;
    } while (cur != head);
    return 0;
}

typedef struct S3 {
    u32 pad[7];
    s32 **unk1C;
    s32 unk20;
} S3;

s32 func_00250310(S3 *arg0, s32 arg1) {
    s32 **p;
    s32 n;
    s32 i;

    p = arg0->unk1C;
    n = (arg0->unk20 - (s32)p) >> 2;
    i = 0;
    if (n <= 0) {
        return 0;
    }
    do {
        i++;
        if (p[0][0] == arg1) {
            return 1;
        }
        p++;
    } while (i < n);
    return 0;
}

typedef struct Vec3 {
    void **begin;
    void **end;
} Vec3;

typedef struct Elem {
    void *pad0;
    void *unk4;
} Elem;

s32 func_00251D20(Vec3 *arg1) {
    Elem **p;
    s32 n;
    s32 i;

    n = (s32)((u32)arg1->end - (u32)arg1->begin) >> 2;
    i = 0;
    if (n <= 0) {
        return 0;
    }
    p = (Elem **)arg1->begin;
    do {
        i++;
        if (p[0]->unk4 != NULL) {
            return 1;
        }
        p++;
    } while (i < n);
    return 0;
}

typedef struct N4 {
    struct N4 *next;
    struct N4 *prev;
} N4;

typedef struct N4h {
    N4 *head;
} N4h;

typedef struct Ref {
    s32 count;
    void *data;
} Ref;

extern void func_00258F80(s32 *, void *, void *);

void func_0024F770(N4h *arg0, void *arg1, void *arg2) {
    N4 *head;
    N4 *cur;
    N4 *next;
    Ref *ref;
    Ref *r;
    s32 *sp;

    head = arg0->head;
    cur = head->next;
    if (cur == head) {
        return;
    }
    do {
        next = cur->next;
        ref = *(Ref **)((char *)cur + 8);
        r = ref;
        if (r != NULL) {
            r->count++;
        }
        sp = (s32 *)r;
        func_00258F80(sp, arg1, arg2);
        if (r != NULL) {
            r->count--;
            if (r->count == 0) {
                void (*fn)(void *, s32, void *);
                void *vtable;
                vtable = r->data;
                fn = *(void (**)(void *, s32, void *))(vtable + 0xC);
                fn((void *)((char *)r + *(s16 *)(vtable + 8)), 3, r);
            }
        }
        cur = next;
    } while (cur != head);
}
