extern void func_002B2028(void *p);
extern void func_002A1D30(void *a0, void *a1, int a2, int a3);
extern void func_001D4040(void *a0, char *s);
extern void *D_002AD408(int size);
extern void func_001D3310(void *p);
extern void func_002A1A00(void *a0, void *a1);
extern void func_002A23C8(void *a0, void *a1, void *a2);
extern char D_0047C3B8[];
extern char D_0047C6B8[];

/* func_002A6D88: clear circular doubly-linked list. The free call clobbers v0,
 * so the head is reloaded from *arg0 in the loop condition and at both stores. */
void func_002A6D88(void **arg0) {
    void *head = *arg0;
    void *cur = *(void **)head;
    if (cur != head) {
        do {
            void *next = *(void **)cur;
            func_002B2028(cur);
            cur = next;
        } while (cur != head);
    }
    head = *arg0;
    *(void **)head = head;
    ((void **)head)[1] = head;
}

/* func_002A2208 */
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

/* func_002A1D10: forwards its two incoming args to func_002A1D30 plus 1,1 */
void func_002A1D10(void *a0, void *a1) {
    func_002A1D30(a0, a1, 1, 1);
}
