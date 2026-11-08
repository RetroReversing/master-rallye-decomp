extern s32 func_0024C4B8(s32, s32, s32);
extern void func_00258590(void *, void *);
extern s32 func_00251830(s32);

typedef struct Node {
    struct Node *next;
} Node;

typedef struct Node2 {
    Node2 *next;
    Node2 *prev;
    s32 data;
    u8 padC[0x1C];
    s32 field28;
} Node2;

typedef struct List {
    Node *head;
} List;

typedef struct L {
    Node *head;
} L;

void func_00258560(void *arg0, void *arg1) {
    Node **a = (Node**)arg1;
    Node *start = *a;
    Node *cur = start;
    do {
        cur = cur->next;
    } while (cur != start);
}

void func_002584D8(void *arg0, void *arg2, void *arg3, void *arg4, void *arg5) {
    func_00258560(arg0, arg0);
    func_00258590(arg0, arg2);
    func_00258560(arg0, arg3);
    func_00258560(arg0, arg4);
    func_00258560(arg0, arg5);
}

s32 func_00258450(L *arg1, void *arg2, void *arg3) {
    Node2 *start = (Node2*)arg1->head->next;
    Node2 *cur = start;
    if ((Node*)cur == arg1->head) return 0;
    do {
        if (func_0024C4B8(cur->data, (s32)arg2, (s32)arg3)) {
            return cur->data;
        }
        cur = cur->next;
    } while ((Node*)cur != arg1->head);
    return 0;
}

typedef struct Node3 {
    Node3 *next;
    Node3 *prev;
    u8 pad[8];
    Node2 *field10;
} Node3;

typedef struct List3 {
    Node3 *head;
} List3;

s32 func_002581B0(List3 *arg1, List3 *arg2) {
    Node3 *start = arg1->head->next;
    Node3 *cur = start;
    Node3 *p2 = arg2->head->next;
    Node2 *v4 = p2->field10;
    Node2 *v4_base = v4;
    if ((Node3*)cur == arg1->head) return 1;
    do {
        Node2 *tmp = cur->field10;
        if (tmp->field28 == 0 && v4->field28 == 0 && func_00251830((s32)p2->field10) == 0) {
            cur = cur->next;
            v4 = p2->field10;
            p2 = p2->next;
            if ((Node3*)cur == arg1->head) break;
        } else {
            cur = cur->next;
            v4 = p2->field10;
            p2 = p2->next;
            if ((Node3*)cur == arg1->head) break;
        }
    } while (1);
    return 1;
}

typedef struct Node4 {
    Node4 *next;
    Node4 *prev;
    u8 pad[8];
    Node2 *field10;
} Node4;

typedef struct List4 {
    Node4 *head;
} List4;

s32 func_00258000(List4 *arg1) {
    Node4 *start = arg1->head->next;
    Node4 *cur = start;
    if ((Node4*)cur == arg1->head) return 1;
    Node2 *tmp = cur->field10;
    do {
        if (func_00251830((s32)tmp->field28) != 0) {
            return 0;
        }
        if (func_00251830((s32)((Node2*)((u8*)tmp + 4))->field28) != 0) {
            return 0;
        }
        cur = cur->next;
        if ((Node4*)cur == arg1->head) break;
        tmp = cur->field10;
    } while (1);
    return 1;
}
