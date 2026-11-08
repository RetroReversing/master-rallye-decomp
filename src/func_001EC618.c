#include "context.h"

typedef struct Node618 {
    u8 pad0[8];
    struct Node618 *next;
    s32 val;
} Node618;

extern void func_001C6938(s32, s32);
extern void func_002B2028(void *);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001EC618(s32 arg0, Node618 *arg1) {
    while (arg1 != 0) {
        Node618 *next;
        func_001C6938(arg0, arg1->val);
        next = arg1->next;
        func_002B2028(arg1);
        arg1 = next;
    }
}

typedef struct TreeNode {
    u8 pad0[4];
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
        volatile void *sp0 = h;
        volatile void *sp10 = e;
        if (h != e) {
            if (*arg2 >= h->key) {
                *arg0 = h;
            } else {
                *arg0 = e;
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
            if (p->key < key) {
                p = p->right;
            } else {
                h = p;
                p = h->left;
            }
        } while (p != 0);
    }
    *arg0 = h;
    return arg0;
}
