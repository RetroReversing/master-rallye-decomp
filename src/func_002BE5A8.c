/* shared externs used by multiple functions in this batch */
extern void *D_002AD408(int);
extern unsigned int D_00428D90;
extern unsigned int D_00428D94;
extern int D_00428D98;
extern void *D_00428D9C;
extern char D_00480AF0[];

/* func_002BEA60 */
extern int func_002BEA40(int);

int func_002BEA60(void) {
    int ret;
    int val;

    ret = 1;
    val = D_00428D98;
    if (val != 0) {
        ret = func_002BEA40(val);
        if (ret != 0) {
            D_00428D98 = 0;
        }
    }
    return ret;
}

/* func_002BE5A8 */
extern void func_0040AF58(void);
extern void func_00405268(unsigned int, void *, int);
extern void func_0040AFA0(void);
extern void func_003F9698(char *, unsigned int, unsigned int);
extern void func_002BE010(void);

int func_002BE5A8(int a0, unsigned int arg1, int arg2) {
    unsigned int limit;

    limit = D_00428D94;
    if (arg1 < limit) {
        func_0040AF58();
        func_00405268(arg1, func_002BE010, arg2);
        func_0040AFA0();
    } else {
        func_003F9698(D_00480AF0, arg1, limit);
    }
    return 0;
}

/* func_002BE550 */
void *func_002BE550(void) {
    void *ret;

    ret = D_00428D9C;
    if (ret == 0) {
        ret = D_002AD408(4);
        D_00428D94 = 0;
        D_00428D90 = 0;
        D_00428D98 = 0;
        D_00428D9C = ret;
    }
    return ret;
}

/* func_002BE498 */
extern void func_002BE050(int, int, void *);
extern void func_002BE070(int, int, void *);
extern void *func_002BE0A8(int, int, int);

typedef struct {
    char pad[8];
    int unk8;
    int unkC;
} S_node;

void func_002BE498(int arg0, int arg1) {
    int p14;
    int p18;
    S_node *node;

    p14 = arg0 + 0x14;
    node = func_002BE0A8(arg0, p14, arg1);
    if (node != 0) {
        func_002BE070(arg0, p14, node);
    } else {
        p18 = arg0 + 0x18;
        node = func_002BE0A8(arg0, p18, arg1);
        if (node != 0) {
            func_002BE070(arg0, p18, node);
        }
    }
    if (node != 0) {
        node->unk8 = 0;
        node->unkC = 0;
        func_002BE050(arg0, arg0 + 0x10, node);
    }
}
