typedef struct Node0020 {
    struct Node0020 *next;
    struct Node0020 *prev;
    s32 key;
} Node0020;

s32 func_00202050(void *arg0, s32 arg1) {
    Node0020 *head;
    Node0020 *cur;
    Node0020 *sp0;
    Node0020 *sp10;
    Node0020 *h;

    head = *(Node0020 **)((char *)arg0 + 0x70);
    cur = head->next;
    sp0 = head;
    sp10 = head;
    if (cur == head) {
        return 0;
    }
    h = head;
    do {
        if (cur->key == arg1) {
            return 1;
        }
        cur = cur->next;
        sp0 = h;
        sp10 = h;
    } while (cur != h);
    return 0;
}

extern void func_002B2028(void *);

void func_002020A0(void *arg0, s32 arg1, Node0020 **arg2) {
    Node0020 *head;
    Node0020 *cur;
    Node0020 *sp0;
    Node0020 *sp10;
    Node0020 *sp20;
    Node0020 *sp30;
    Node0020 *s0;

    (void)arg0;
    head = *arg2;
    cur = head->next;
    sp10 = head;
    sp0 = cur;
    if (cur == head) {
        return;
    }
loop:
    s0 = sp0;
    if (s0->key == arg1) {
        Node0020 *next;
        Node0020 *prev;
        sp20 = s0;
        prev = s0->prev;
        next = s0->next;
        prev->next = next;
        next->prev = prev;
        func_002B2028(sp20);
        sp0 = next;
        sp10 = next;
        return;
    } else {
        Node0020 *nhead;
        sp30 = s0;
        nhead = *arg2;
        sp10 = nhead;
        sp0 = s0->next;
        if (sp0 != nhead) goto loop;
    }
}

extern void *func_002B1FC0(u32);
extern void *func_003D2910(u32);

void func_00202120(void *arg0, s32 arg1, Node0020 **arg2) {
    Node0020 *head;
    Node0020 *node;
    Node0020 *keyptr;
    Node0020 *sp0;

    (void)arg0;
    head = *arg2;
    node = (Node0020 *)func_002B1FC0(0xC);
    keyptr = (Node0020 *)((char *)node + 8);
    if (node == NULL) {
        node = (Node0020 *)func_003D2910(0xC);
        keyptr = (Node0020 *)((char *)node + 8);
    }
    if (keyptr != NULL) {
        node->key = arg1;
    }
    node->next = head;
    node->prev = head->prev;
    head->prev->next = node;
    head->prev = node;
    sp0 = node;
    (void)sp0;
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
    s32 i;
    s32 off;

    arg0->begin = 0;
    arg0->end = 0;
    arg0->cap = 0;
    count = (s32)((arg1->end - arg1->begin) * 0xAAAAAAAB) >> 2;
    func_00202A50(arg0);
    func_00202BA0(arg0, count);
    if (count > 0) {
        i = count;
        off = 0;
        do {
            func_00156C38(arg0->begin + off, arg1->begin + off);
            i--;
            off += 0xC;
        } while (i != 0);
    }
    return arg0;
}
