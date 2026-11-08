extern s32 func_0024C568(s32, s32);

typedef struct Node5 {
    struct Node5 *next;
    struct Node5 *prev;
    s32 data;
    u8 padC[0x14];
} Node5;

typedef struct List5 {
    Node5 *head;
    u8 pad[0xC];
    Node5 **field10;
    Node5 **field14;
} List5;

s32 func_00255748(s32 arg1, List5 *arg2) {
    Node5 **start = arg2->field10;
    Node5 *cur = *start;
    Node5 *head = *arg2->field14;
    if (cur == head) return 0;
    do {
        Node5 *next = cur->next;
        if (arg1 == func_0024C568(cur->data, next->data)) {
            return 1;
        }
        cur = next;
    } while (cur != head);
    return 0;
}

typedef struct A18 {
    u8 pad[0x30];
    s32 field30;
} A18;

typedef struct A {
    u8 pad[0x18];
    A18 *field18;
    A18 *field1C;
} A;

typedef struct B {
    A **fieldC;
    A **field10;
} B;

s32 func_00254558(B *arg1) {
    A **start = arg1->fieldC;
    A **end = arg1->field10;
    s32 cnt = (end - start) >> 2;
    s32 i = 0;
    if (cnt <= 0) return 1;
    do {
        A *a = start[i];
        if (a->field18->field30 == 0) {
            if (a->field1C->field30 == 0) {
                i++;
                if (i >= cnt) return 1;
                continue;
            }
        }
        if (a->field18->field30 != 0) {
            return 0;
        }
        if (a->field1C->field30 != 0) {
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
