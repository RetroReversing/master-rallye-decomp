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

typedef struct Node3 {
    struct Node3 *prev;
    struct Node3 *next;
    void *unk8;
} Node3;

typedef struct Node3b {
    void *unk18;
    void *unk1C;
    void *unk20;
    void *unk24;
} Node3b;

extern void func_0024C548(void *, u32);

void func_00253538(Node3 **arg1) {
    Node3 *head;
    Node3 *cur;
    Node3b *p;
    void *a;
    void *b;

    head = *arg1;
    cur = head->next;
    if (cur == head) {
        return;
    }
    p = (Node3b *)cur->unk8;
    do {
        a = p->unk20;
        b = p->unk24;
        func_0024C548(a, *(u32 *)(p->unk18 + 0x30));
        func_0024C548(a, *(u32 *)(p->unk1C + 0x30));
        func_0024C548(b, *(u32 *)(p->unk18 + 0x34));
        func_0024C548(b, *(u32 *)(p->unk1C + 0x34));
        cur = cur->next;
        if (cur == head) {
            break;
        }
        p = (Node3b *)cur->unk8;
    } while (1);
}

typedef struct S3 {
    u32 pad[7];
    void **unk1C;
    s32 unk20;
} S3;

s32 func_00250310(S3 *arg0, s32 arg1) {
    s32 **p;
    s32 n;
    s32 i;

    p = (s32 **)arg0->unk1C;
    n = (s32)(arg0->unk20 - (s32)p) >> 2;
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
        if (cur->unk8 == arg1) {
            return 1;
        }
        cur = cur->next;
    } while (cur != head);
    return 0;
}
