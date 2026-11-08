typedef struct B {
    void **fieldC;
    void **field10;
} B;

typedef struct D {
    u8 pad[0x28];
    s32 field28;
} D;

s32 func_002544B8(B *arg1) {
    D **start = (D**)arg1->fieldC;
    D **end = (D**)arg1->field10;
    s32 cnt = (end - start) >> 2;
    s32 i = 0;
    if (cnt <= 0) return 1;
    do {
        if (start[i]->field28 != 0) {
            return 0;
        }
        i++;
        if (i >= cnt) return 1;
    } while (1);
}

typedef struct C {
    u8 pad[0x20];
    s32 field20;
} C;

s32 func_00254508(B *arg1) {
    C **start = (C**)arg1->fieldC;
    C **end = (C**)arg1->field10;
    s32 cnt = (end - start) >> 2;
    s32 i = 0;
    if (cnt <= 0) return 1;
    do {
        if (start[i]->field20 != 0) {
            return 0;
        }
        i++;
        if (i >= cnt) return 1;
    } while (1);
}

typedef struct Node {
    struct Node *next;
} Node;

typedef struct S {
    Node *field0;
    Node *field4;
} S;

void func_00251AC8(S *arg0) {
    Node *a = arg0->field0;
    Node *start = a;
    do {
        a = a->next;
    } while (a != start);
    a = arg0->field4;
    start = a;
    do {
        a = a->next;
    } while (a != start);
}

typedef struct Node2 {
    struct Node2 *next;
    u8 pad4[4];
    struct Node2 *field8;
} Node2;

typedef struct S2 {
    Node2 *field0;
} S2;

s32 func_00251898(S2 *arg0) {
    Node2 *head = arg0->field0;
    Node2 *cur = head->next;
    if (cur == head) return 0;
    do {
        if (cur->field8->next == 0) return 0;
        cur = cur->next;
        if (cur == head) break;
    } while (1);
    return cur->field8->next;
}
