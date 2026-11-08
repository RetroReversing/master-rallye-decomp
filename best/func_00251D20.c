typedef struct Vec2 {
    void **begin;
    void **end;
} Vec2;

extern s32 func_0024C788(void *);

s32 func_00251D70(Vec2 *arg1) {
    Vec2 *v;
    s32 n;
    s32 i;
    void **base;

    v = (Vec2 *)((char *)arg1 + 0xC);
    n = (s32)((u32)v->end - (u32)v->begin) >> 2;
    i = 0;
    if (n <= 0) {
        return 0;
    }
    base = v->begin;
    do {
        if (func_0024C788(*(void **)(base + (i * 4))) == 0) {
            i++;
            if (i < n) {
                continue;
            }
            return 0;
        }
        return 1;
    } while (1);
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

typedef struct Node2 {
    struct Node2 *next;
    struct Node2 *prev;
    u32 unk8;
} Node2;

extern void func_0025C650(void *);
extern void func_0025C658(void *, s32);
extern void func_0025C680(void *, u32);

void func_002536C0(Node2 **arg1) {
    Node2 *head;
    Node2 *n;
    void *sp;

    sp = arg1 - 1;
    func_0025C650(sp);
    head = *arg1;
    n = head->next;
    if (n != head) {
        do {
            func_0025C680(sp, n->unk8);
            n = n->next;
            if (n == head) {
                break;
            }
        } while (1);
    }
    func_0025C658(sp, 2);
}

typedef struct Vec3 {
    void **begin;
    void **end;
} Vec3;

typedef struct Elem {
    u32 pad0;
    u32 unk4;
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
        if (p[0]->unk4 != 0) {
            return 1;
        }
        p++;
    } while (i < n);
    return 0;
}
