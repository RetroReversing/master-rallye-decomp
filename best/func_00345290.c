extern void func_003F94D0(void *, int);
extern void func_003411D0(void *);

extern int D_0042E4B0[7];
extern char D_0042E4E0[];

void func_003D1290(void *arg0, char *arg1) {
    func_003F94D0(arg0, (int)*arg1);
}

void *func_0034D6F0(void *arg0) {
    ((float *)arg0)[3] = 0.122499995f;   /* 0xC */
    ((float *)arg0)[4] = 0.1f;            /* 0x10 */
    ((float *)arg0)[5] = 0.040000003f;    /* 0x14 */
    ((float *)arg0)[6] = 3.0f;            /* 0x18 */
    ((float *)arg0)[7] = 2.0f;            /* 0x1C */
    ((int *)arg0)[10] = 1;                /* 0x28 */
    ((int *)arg0)[0] = 0;                 /* 0x0 */
    ((int *)arg0)[1] = 0;                 /* 0x4 */
    ((int *)arg0)[8] = 1;                 /* 0x20 */
    ((int *)arg0)[9] = 1;                 /* 0x24 */
    return arg0;
}

typedef struct S34C778Node {
    struct S34C778Node *next;
    unsigned int val;
} S34C778Node;

typedef struct S34C778Inner {
    void *unk0;
    unsigned int *begin;
    unsigned int *end;
} S34C778Inner;

typedef struct S34C778Arg0 {
    S34C778Node *cur;
    S34C778Inner *inner;
} S34C778Arg0;

void *func_0034C778(S34C778Arg0 *arg0) {
    S34C778Node *node;
    S34C778Inner *in;
    unsigned int *begin, *end;
    unsigned int idx, count;
    unsigned int *p;

    node = arg0->cur;
    arg0->cur = node->next;
    if (node->next == 0) {
        in = arg0->inner;
        begin = in->begin;
        end = in->end;
        count = ((unsigned int)end - (unsigned int)begin) >> 2;
        idx = (node->val % count) + 1;
        if (idx < count) {
            do {
                p = (unsigned int *)((char *)begin + (idx * 4));
                arg0->cur = (S34C778Node *)*p;
                if (*p != 0)
                    break;
                idx++;
                end = in->end;
                begin = in->begin;
                count = ((unsigned int)end - (unsigned int)begin) >> 2;
            } while (idx < count);
        }
    }
    return arg0;
}

void func_00345290(int arg0, int arg1) {
    int i;
    float *p;

    if (arg1 != 0xFFFF) {
        return;
    }
    if (arg0 == 0) {
        return;
    }
    D_0042E4B0[0] = -1;
    D_0042E4B0[6] = -1;
    D_0042E4B0[1] = -1;
    D_0042E4B0[2] = -1;
    D_0042E4B0[3] = -1;
    D_0042E4B0[4] = -1;
    D_0042E4B0[5] = -1;
    func_003411D0(D_0042E4B0);
    p = (float *)(D_0042E4E0 + 0x2C);
    i = 7;
    do {
        ((int *)p)[-11] = 1;
        ((float *)p)[-10] = 1e9f;
        ((float *)p)[-7] = 1.0f;
        ((float *)p)[-6] = 1.0f;
        ((float *)p)[-5] = 1.0f;
        ((int *)p)[-4] = 0;
        ((int *)p)[-3] = 0;
        ((int *)p)[-2] = 0;
        ((float *)p)[-1] = 1.0f;
        ((int *)p)[0] = 0;
        ((int *)p)[1] = 0;
        ((int *)p)[2] = 0;
        p += 16;
        i--;
    } while (i != -1);
}
