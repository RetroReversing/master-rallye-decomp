extern void func_001C6938(void *a, s32 b);
extern void func_002B2028(void *p);
extern void *func_002B1FC0(s32 size);
extern void *func_003D2910(s32 size);
extern void func_003F94D0(s32 dummy, s32 val);

typedef struct ListNode1 {
    struct ListNode1 *next;
    u8 pad4[4];
    s32 field_c;
} ListNode1;

void func_00270030(void *arg0, ListNode1 *arg1) {
    while (arg1 != NULL) {
        ListNode1 *next = arg1->next;
        func_001C6938(arg0, arg1->field_c);
        func_002B2028(arg1);
        arg1 = next;
    }
}

typedef struct ListNode2 {
    struct ListNode2 *next;
    struct ListNode2 *prev;
} ListNode2;

typedef struct ListNode2Head {
    ListNode2 *head;
} ListNode2Head;

void func_00271EB0(ListNode2Head *head, ListNode2 *begin, ListNode2 *end) {
    ListNode2 *cur = begin;
    while (cur != end) {
        ListNode2 *next = cur->next;
        ListNode2 *node = func_002B1FC0(0xC);
        if (node == NULL) {
            node = func_003D2910(0xC);
        }
        node->next = next;
        node->prev = cur->prev;
        if (cur->prev != NULL) {
            cur->prev->next = node;
        }
        cur->prev = node;
        node->next = cur;
        if (next == end) {
            /* no change needed */
        }
        cur = next;
    }
}

typedef struct NodeA {
    struct NodeA *next;
    struct NodeA *prev;
} NodeA;

typedef struct NodeB {
    struct NodeB *next;
    struct NodeB *prev;
} NodeB;

typedef struct ListA {
    NodeA *head;
} ListA;

typedef struct ListB {
    NodeB *head;
} ListB;

void func_00272BC0(ListA *out, ListB *src, NodeB *end) {
    NodeB *cur = src->head;
    NodeB *e = end;
    if (cur != e) {
        do {
            NodeB *next = cur->next;
            NodeB *p = cur->prev;
            NodeB *n = next;
            p->next = n;
            n->prev = p;
            func_002B2028(cur);
            cur = next;
        } while (cur != e);
    }
    out->head = e;
}

void func_003D1290(void *arg0, s8 *arg1) {
    func_003F94D0((s32)arg0, (s32)*arg1);
}
