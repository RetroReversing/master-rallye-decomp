typedef signed char s8;
typedef unsigned char u8;
typedef signed short s16;
typedef unsigned short u16;
typedef signed int s32;
typedef unsigned int u32;
typedef signed long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef int BOOL;

#ifndef NULL
#define NULL ((void *)0)
#endif

extern void func_0026FFC8(void *arg);
extern void D_002AD390(s32 arg);

struct ListNode {
    struct ListNode *next;
    struct ListNode *prev;
    s32 unk8;
};

struct Vec12 {
    struct ListNode *head;
    struct ListNode *tail;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    s32 unk14;
};

void func_002296D0(struct Vec12 *arg0) {
    struct ListNode *node;
    
    node = arg0->head->next;
    while (node != arg0->head) {
        if (node->unk8 != 0) {
            D_002AD390(node->unk8);
        }
        node = node->next;
    }
    
    func_0026FFC8(arg0);
    
    node = arg0->tail->next;
    while (node != arg0->tail) {
        if (node->unk8 != 0) {
            D_002AD390(node->unk8);
        }
        node = node->next;
    }
    
    func_0026FFC8((char*)arg0 + 4);
}

void func_00229658(struct Vec12 *arg0, s32 arg1) {
    void *temp;
    
    temp = (char*)arg0 + 4;
    func_0026FFC8(arg0);
    func_0026FFC8(temp);
    func_0026FFC8(temp);
    func_002B2028(arg0->tail);
    func_0026FFC8(arg0);
    func_002B2028(arg0->head);
    
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

extern void *func_002B1FC0(s32 size);
extern void *func_003D2910(s32 size);
extern f32 D_00426508[4];

void *func_00229280(struct Vec12 *arg0) {
    struct ListNode *head;
    struct ListNode *tail;
    void *ptr;
    
    head = func_002B1FC0(0xC);
    if (head == NULL) {
        head = func_003D2910(0xC);
    }
    arg0->head = head;
    head->next = head;
    head->prev = head;
    
    tail = func_002B1FC0(0xC);
    if (tail == NULL) {
        tail = func_003D2910(0xC);
    }
    arg0->tail = tail;
    tail->next = tail;
    tail->prev = tail;
    
    ptr = (char*)arg0 + 8;
    tail->prev = tail;
    tail->next = arg0->tail;
    
    arg0->unk8 = D_00426508[0];
    ((f32*)ptr)[1] = D_00426508[1];
    ((s32*)ptr)[4] = -1;
    ((f32*)ptr)[2] = D_00426508[2];
    ((s32*)ptr)[3] = 0;
    
    return arg0;
}

extern void *D_002AD408(s32 size);

struct Struct2 {
    struct ListNode *unk0;
    struct ListNode *unk4;
    void *unk8;
    f32 unkC;
    f32 unk10;
};

void func_00229B28(struct Vec12 *arg0, f32 *arg1) {
    struct Struct2 *var;
    struct ListNode *temp;
    struct ListNode *head;
    void *ptr;
    
    var = D_002AD408(0xC);
    var->unkC = arg1[0];
    var->unk10 = arg1[1];
    ((f32*)var)[2] = arg1[2];
    
    head = arg0->head;
    temp = func_002B1FC0(0xC);
    ptr = (char*)temp + 8;
    if (temp == NULL) {
        temp = func_003D2910(0xC);
        ptr = (char*)temp + 8;
    }
    if (ptr != NULL) {
        temp->unk8 = var;
    }
    
    temp->next = head;
    temp->prev = head->prev;
    head->prev->next = temp;
    head->prev = temp;
}
