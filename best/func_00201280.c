/* func_00201280 */
extern void func_00200870(void *);

void func_00201280(void *arg0) {
    void **s2 = (void **)arg0;
    s32 s1 = 0;
    void **s0 = s2;
    s32 count = *(s32 *)((char *)s2 + 0x10);

    if (count > 0) {
        do {
            func_00200870(*s0);
            s1++;
            s0++;
            count = *(s32 *)((char *)s2 + 0x10);
        } while (s1 < count);
    }
}

/* func_00202050 - try to force stack frame/stores */
typedef struct Node0020 {
    struct Node0020 *next;
    struct Node0020 *prev;
    s32 key;
} Node0020;

s32 func_00202050(void *arg0, s32 arg1) {
    Node0020 *head;
    Node0020 *cur;
    Node0020 *sp[2];
    Node0020 *h;

    head = *(Node0020 **)((char *)arg0 + 0x70);
    cur = head->next;
    sp[0] = head;
    sp[1] = head;
    if (cur != head) {
        h = head;
        do {
            if (cur->key == arg1) {
                return 1;
            }
            cur = cur->next;
            sp[0] = h;
            sp[1] = h;
        } while (cur != h);
    }
    return 0;
}

/* func_002020A0 - match stack frame and structure */
extern void func_002B2028(void *);

void func_002020A0(void *arg0, s32 arg1, void *arg2) {
    Node0020 **pp = (Node0020 **)arg2;
    Node0020 *head;
    Node0020 *cur;
    Node0020 *sp0, *sp10, *sp20, *sp30;

    head = *pp;
    cur = head->next;
    sp10 = head;
    sp0 = cur;
    if (cur != head) {
        while (1) {
            Node0020 *s0 = sp0;
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
                nhead = *pp;
                sp10 = nhead;
                sp0 = s0->next;
                if (sp0 == nhead) break;
            }
        }
    }
}
