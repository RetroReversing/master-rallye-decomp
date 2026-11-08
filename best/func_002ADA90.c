extern int func_002AD918(void);
extern void *(*D_00426AC4)(void);

typedef struct Node {
    struct Node *next;
    void (*fn)(void *, int, void **);
    void *ctx;
} Node;

typedef struct Header {
    void *p0;
    Node *chain;
} Header;

typedef struct Frame {
    void *f0;
    void *f4;
    void *f8;
} Frame;

typedef int jmp_buf[37]; /* guess */

void func_002ADA90(void) {
    jmp_buf env;
    void **sp640;
    Node **sp644;
    void *sp648;
    Frame sp0;
    void *tmp;
    Header *h;

    (void)env;
    tmp = D_00426AC4();
    sp640 = (void **)((char *)tmp + 4);
    h = (Header *)*(void **)((char *)tmp + 4);
    sp644 = (Node **)((char *)h + 4);
    if (h->chain != 0) {
        Node *n;
        sp0.f0 = h;
        sp0.f4 = 0;
        sp0.f8 = &sp0;
        *(void **)((char *)&sp0.f4) = (void *)((char *)func_002ADA90 + 0xA8);
        sp648 = &sp0;
        *(void **)((char *)&sp0.f8) = &sp0;
        *sp640 = sp648;
        n = *sp644;
        if (n != 0) {
            do {
                Node *next = n->next;
                *sp644 = next;
                n->fn(n->ctx, 2, (void **)sp644);
                n = *sp644;
            } while (n != 0);
        }
        *sp640 = *(void **)sp648;
    }
    *sp640 = **(void ***)sp640;
    func_002AD918();
}
