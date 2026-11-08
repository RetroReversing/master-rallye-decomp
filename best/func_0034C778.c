typedef struct S34C778Node {
    struct S34C778Node *next;
    unsigned int val;
} S34C778Node;

typedef struct S34C778Inner {
    void *unk0;
    int *begin;
    int *end;
} S34C778Inner;

typedef struct S34C778Arg0 {
    S34C778Node *cur;
    S34C778Inner *inner;
} S34C778Arg0;

void *func_0034C778(S34C778Arg0 *arg0) {
    S34C778Node *node;
    S34C778Node *cur2;
    S34C778Inner *in;
    int *begin;
    int *endp;
    int *t0;
    int count;
    unsigned int idx;

    node = arg0->cur;
    cur2 = node->next;
    arg0->cur = cur2;
    if (cur2 == 0) {
        in = arg0->inner;
        begin = in->begin;
        t0 = (int *)((char *)in + 4);
        endp = *(int **)((char *)in + 8);
        count = (endp - begin);
        idx = (node->val % (unsigned int)count) + 1;
        if (idx < (unsigned int)count) {
            begin = in->begin;
loop:
            cur2 = (S34C778Node *)begin[idx];
            arg0->cur = cur2;
            if (cur2 == 0) {
                endp = *(int **)((char *)t0 + 4);
                idx++;
                begin = in->begin;
                count = (endp - begin);
                if (idx < (unsigned int)count) goto loop;
            }
        }
    }
    return arg0;
}
