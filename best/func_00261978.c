extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern f32 *func_00155D50(s32, s32, s32);
extern void func_00261AB0(void*, void*, void*);

typedef struct Node2 {
    struct Node2 *next;
    struct Node2 *prev;
    u8 pad8[8];
    f32 f1, f2, f3;
    u8 pad18[8];
} Node2;

typedef struct List2 {
    Node2 *head;
} List2;

void func_002623F0(List2 *list, s32 *arg1) {
    Node2 *head = list->head;
    Node2 *n = func_002B1FC0(0x18);
    Node2 *n2;
    if (n == NULL) {
        n = func_003D2910(0x18);
    }
    n2 = (Node2*)((u8*)n + 8);
    if (n2 != NULL) {
        *(s32*)((u8*)n2 + 8) = *arg1;
        n2->f1 = 1.0f;
        n2->f2 = 1.0f;
        n2->f3 = 0.0f;
    }
    n->next = head;
    n->prev = head->prev;
    if (head->prev != NULL) {
        head->prev->next = n;
    }
    head->prev = n;
    n->next = head;
}

void func_002624A0(List2 *list, s32 *arg1, f32 f1, f32 f2) {
    Node2 *head = list->head;
    Node2 *n = func_002B1FC0(0x18);
    Node2 *n2;
    if (n == NULL) {
        n = func_003D2910(0x18);
    }
    n2 = (Node2*)((u8*)n + 8);
    if (n2 != NULL) {
        *(s32*)((u8*)n2 + 8) = *arg1;
        n2->f1 = f1;
        n2->f2 = f2;
        n2->f3 = 0.0f;
    }
    n->next = head;
    n->prev = head->prev;
    if (head->prev != NULL) {
        head->prev->next = n;
    }
    head->prev = n;
    n->next = head;
}

f32 func_00261938(s32 *arg0, s32 *arg1, s32 *arg2) {
    if (*arg0 == 0) {
        return 0.00001f;
    }
    return *func_00155D50(*arg0, *arg1, *arg2);
}

typedef struct S {
    s32 *field0;
} S;

f32 func_00261978(S *arg0) {
    s32 sp0 = 0;
    s32 sp4 = 0;
    if (*arg0->field0 == 0) {
        return 0.00001f;
    }
    func_00261AB0(arg0, &sp0, &sp4);
    return *func_00155D50(*arg0->field0, sp0, sp4);
}
