typedef struct Node0020 {
    struct Node0020 *next;
    struct Node0020 *prev;
    s32 key;
} Node0020;

typedef struct Obj70 {
    char pad[0x70];
    Node0020 *head;
} Obj70;

s32 func_00202050(Obj70 *arg0, s32 arg1) {
    Node0020 *sp[4];
    Node0020 *head;
    Node0020 *cur;

    head = arg0->head;
    cur = head->next;
    sp[0] = head;
    sp[1] = head;
    if (cur != head) {
        Node0020 *h = head;
        sp[2] = h;
        do {
            if (cur->key == arg1) return 1;
            cur = cur->next;
            sp[0] = h;
            sp[1] = h;
        } while (cur != h);
    }
    return 0;
}

extern void func_002B2028(void *);

void func_002020A0(void *arg0, s32 arg1, Node0020 **arg2) {
    Node0020 *sp[8];
    Node0020 *head;
    Node0020 *cur;

    (void)arg0;
    head = *arg2;
    cur = head->next;
    sp[2] = head;
    sp[0] = cur;
    if (cur == head) return;
    while (1) {
        Node0020 *s0 = sp[0];
        if (s0->key == arg1) {
            Node0020 *next = s0->next;
            Node0020 *prev = s0->prev;
            sp[4] = s0;
            prev->next = next;
            next->prev = prev;
            func_002B2028(sp[4]);
            sp[0] = next;
            sp[2] = next;
            return;
        } else {
            Node0020 *nhead = *arg2;
            sp[6] = s0;
            sp[2] = nhead;
            sp[0] = s0->next;
            if (sp[0] == nhead) return;
        }
    }
}

extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);

void func_00202120(void *arg0, s32 arg1, Node0020 **arg2) {
    Node0020 *sp[4];
    Node0020 *head;
    Node0020 *node;
    s32 *keyptr;

    (void)arg0;
    head = *arg2;
    sp[2] = head;
    node = (Node0020 *)func_002B1FC0(0xC);
    keyptr = (s32 *)((char *)node + 8);
    if (node == NULL) {
        node = (Node0020 *)func_003D2910(0xC);
        keyptr = (s32 *)((char *)node + 8);
    }
    if (keyptr != NULL) {
        *keyptr = arg1;
    }
    node->next = sp[2];
    node->prev = sp[2]->prev;
    sp[2]->prev->next = node;
    sp[2]->prev = node;
    sp[0] = node;
}

extern void func_00156C38(char *, char *);
extern void func_00202A50(void *);
extern void func_00202BA0(void *, s32);

typedef struct Vec12 {
    char *begin;
    char *end;
    char *cap;
} Vec12;

void *func_00202808(Vec12 *arg0, Vec12 *arg1) {
    s32 count;
    s32 n;
    s32 off;

    arg0->begin = 0;
    arg0->end = 0;
    arg0->cap = 0;
    count = (s32)((arg1->end - arg1->begin) * 0xAAAAAAAB) >> 2;
    func_00202A50(arg0);
    func_00202BA0(arg0, count);
    if (count > 0) {
        n = count;
        off = 0;
        do {
            func_00156C38(arg0->begin + off, arg1->begin + off);
            n--;
            off += 0xC;
        } while (n != 0);
    }
    return arg0;
}
