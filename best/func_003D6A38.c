extern int func_003D8E78(int a, int b, void *c, int *flags);
extern int func_003D6988(void **p, int a, int b);

typedef struct {
    u8 pad[0x1A];
    u8 flags;
} unk1A_t;

typedef struct {
    int pad0;
    void *pad4, *pad8, *padC;
    void *pad10, *pad14, *pad18, *pad1C, *pad20;
    void *pad24, *pad28, *pad2C;
} unk20_t;

int func_003D6A38(int a, int b, void *c, unk1A_t *s) {
    int flags = 0;
    int r = func_003D8E78(a, b, c, &flags);
    if (s != NULL) {
        s->flags |= (u8)flags;
    }
    return r;
}
