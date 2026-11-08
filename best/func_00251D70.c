extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    D_0043C3B0[1] = arg1;
    D_0043C3B0[2] = arg2;
    D_0043C3B0[3] = arg0;
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
    func_0025C650(arg1 - 1); /* pass sp area as first arg? target passes $sp as first arg to func_0025C650; in our calling convention need to match */
    /* target does: daddu $4, $29, $0; jal func_0025C650 with $17 = $5 */
    head = *arg1;
    n = head->next;
    if (n != head) {
        do {
            func_0025C680(arg1 - 1, n->unk8);
            n = n->next;
        } while (n != head);
    }
    func_0025C658(arg1 - 1, 2);
}

typedef struct Node3 {
    struct Node3 *prev;
    struct Node3 *next;
    void *unk8;
} Node3;

typedef struct Node3b {
    u32 unk0[6];
    void *unk18;
    void *unk1C;
    void *unk20;
    void *unk24;
    void *unk30;
    void *unk34;
} Node3b;

extern void func_0024C548(void *, u32);

void func_00253538(Node3 **arg1) {
    Node3 *head;
    Node3 *n;
    Node3b *p;
    void *a;
    void *b;
    
    head = *arg1;
    n = head->next;
    if (n != head) {
        p = (Node3b *)n->unk8;
        do {
            a = p->unk20;
            b = p->unk24;
            func_0024C548(a, *(u32 *)(p->unk18 + 0x30));
            func_0024C548(a, *(u32 *)(p->unk1C + 0x30));
            func_0024C548(b, *(u32 *)(p->unk18 + 0x34));
            func_0024C548(b, *(u32 *)(p->unk1C + 0x34));
            n = n->next;
            if (n == head) break;
            p = (Node3b *)n->unk8;
        } while (1);
    }
}

extern s32 func_0024C788(void *);

typedef struct Vec2 {
    void **begin;
    void **end;
    void *cap;
} Vec2;

s32 func_00251D70(Vec2 *arg1) {
    Vec2 *v = (Vec2 *)((char *)arg1 + 0xC);
    s32 n = (s32)((u32)v->end - (u32)v->begin) >> 2;
    s32 i = 0;
    if (n > 0) {
        u32 base;
        do {
            base = (u32)v->begin;
            if (func_0024C788(*(void **)(base + (i << 2))) == 0) {
                i++;
                continue;
            } else {
                return 1;
            }
        } while (i < n);
    }
    return 0;
}
