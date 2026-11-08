#include "context.h"

extern int func_0024C788(int);
extern void func_002027E8(void *);
extern void func_00201620(void *);
extern void func_0023BC60(int);
extern void func_00201950(void *, void *, void *, void *);

typedef struct Node {
    struct Node *next;
    struct Node *prev;
    int unk8;
} Node;

typedef struct {
    Node *head;
} UnkC;

int func_0025C7A8(int arg0, UnkC *arg1) {
    Node *n = arg1->head->next;
    if (n == arg1->head) {
        return 0;
    }
    do {
        if (func_0024C788(n->unk8) != 0) {
            n = n->next;
            if (n == arg1->head) break;
            continue;
        }
        return 1;
    } while (1);
    return 0;
}

typedef struct {
    int unk0;
    int unk4;
    int unk8;
    char pad[0x10];
    int unk18;
    char pad2[4];
    int unk20;
    char pad3[4];
    int unk28;
    char pad4[0x70];
    float unkA0;
    float unkA4;
} UnkA;

void *func_0025C808(UnkA *arg0) {
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    func_002027E8((void *)((char *)arg0 + 0xC));
    arg0->unk18 = 0;
    *(int *)((char *)arg0 + 0x20) = 0;
    *(int *)((char *)arg0 + 0x1C) = 0;
    func_00201620((void *)((char *)arg0 + 0x24));
    *(float *)((char *)arg0 + 0xA0) = 0.0f;
    *(float *)((char *)arg0 + 0xA4) = 0.0f;
    return arg0;
}

void func_0025CE90(UnkA *arg0) {
    int *p = *(int **)((char *)arg0 + 0xA0);
    int *end = *(int **)((char *)arg0 + 0xA4);
    int count = (int)(end - p) >> 2;
    int i;
    for (i = 0; i < count; i++) {
        func_0023BC60(p[i]);
    }
}

void func_0025CF00(UnkA *arg0) {
    func_00201950((void *)((char *)arg0 + 0x24), (void *)((char *)arg0 + 0xC), (void *)((char *)arg0 + 0x18), arg0);
}
