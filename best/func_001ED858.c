#include "context.h"

typedef struct TreeNode {
    u32 pad0;
    struct TreeNode *parent;
    struct TreeNode *left;
    struct TreeNode *right;
    s32 key;
} TreeNode;

typedef struct { TreeNode *n; char pad[12]; } TN;

void **func_001ED858(void **arg0, void **arg1, s32 *arg2) {
    TreeNode *h = *(TreeNode **)arg1;
    TreeNode *p = h->parent;
    if (p != 0) {
        s32 key = *arg2;
        do {
            if (p->key < key) {
                p = p->right;
            } else {
                h = p;
                p = h->left;
            }
        } while (p != 0);
    }
    {
        TreeNode *e = *(TreeNode **)arg1;
        volatile TN found;
        volatile TN end;
        found.n = h;
        end.n = e;
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
