#include "context.h"

typedef struct TreeNode {
    u32 pad0;
    struct TreeNode *parent;
    struct TreeNode *left;
    struct TreeNode *right;
    s32 key;
} TreeNode;

void **func_001ED858(void **arg0, void **arg1, s32 *arg2) {
    TreeNode *h = *(TreeNode **)arg1;
    TreeNode *p = h->parent;
    if (p != 0) {
        s32 key = *arg2;
        do {
            if (!(p->key < key)) {
                h = p;
                p = h->left;
            } else {
                p = p->right;
            }
        } while (p != 0);
    }
    {
        TreeNode *e = *(TreeNode **)arg1;
        volatile void *sp0 = h;
        volatile void *sp10 = e;
        if (h != e) {
            if (*arg2 < h->key) {
                *arg0 = e;
            } else {
                *arg0 = h;
            }
        } else {
            *arg0 = e;
        }
    }
    return arg0;
}

void **func_001ED8C0(void **arg0, void **arg1, s32 *arg2) {
    TreeNode *h = *(TreeNode **)arg1;
    TreeNode *p = h->parent;
    if (p != 0) {
        s32 key = *arg2;
        do {
            if (!(p->key < key)) {
                h = p;
                p = h->left;
            } else {
                p = p->right;
            }
        } while (p != 0);
    }
    *arg0 = h;
    return arg0;
}
