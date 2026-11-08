extern void func_002B2028(void *p);
extern void func_002A1D30(s32, s32);
extern void func_001D4040(void *a0, char *s);
extern void *D_002AD408(int size);
extern void func_001D3310(void *p);
extern void func_002A1A00(void *a0, void *a1);
extern void func_002A23C8(void *a0, void *a1, void *a2);
extern char D_0047C3B8[];
extern char D_0047C6B8[];

/* func_002A6D88: clear a circular doubly-linked list (free each node, then
 * head->next = head->prev = head). Project default compiler. */
void func_002A6D88(void **arg0) {
    void *head = *arg0;
    void *n = *(void **)head;

    if (n != head) {
        do {
            void *next = *(void **)n;
            func_002B2028(n);
            n = next;
        } while (n != head);
    }
    *(void **)head = head;
    *((void **)head + 1) = head;
}

/* func_002A2208: EE-GCC 2.95.2 -O2 -G0 range. */
void func_002A2208(void *arg0, void *arg1, int arg2) {
    void *p;
    int sp0 = 0;

    *(int *)((char *)arg0 + 8) = arg2;
    func_002A23C8(arg0, arg1, &sp0);
    p = D_002AD408(0x24);
    func_001D3310(p);
    *(void **)((char *)p + 0x14) = D_0047C6B8;
    func_002A1A00(p, &sp0);
}

/* func_002A1D10: EE-GCC 2.95.2 -O2 -G0 range. */
void func_002A1D10(void) {
    func_002A1D30(1, 1);
}

/* func_002A1CD8: EE-GCC 2.95.2 -O2 -G0 range. Constructor: zero two fields,
 * then init with the "Default" string key. */
void *func_002A1CD8(void *arg0) {
    *(s32 *)arg0 = 0;
    *(s32 *)((char *)arg0 + 4) = 0;
    func_001D4040(arg0, D_0047C3B8);
    return arg0;
}
