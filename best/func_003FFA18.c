/* func_003FF820 - revert to best structure I found (1610) */
extern s64 D_004408E8;
extern s64 D_004408F0;
void func_003F9590(void);
void func_003F9598(s32);

s32 func_003FF820(s32 arg0, s32 arg1, s64 arg2) {
    func_003F9590();
    switch (arg1) {
    case -1:
        D_004408E8 = arg2;
        func_003F9598(arg0);
        return 1;
    case -2:
        D_004408F0 = arg2;
        func_003F9598(arg0);
        return 1;
    case -3:
        func_003F9598(arg0);
        return 1;
    case -4:
        func_003F9598(arg0);
        return (u64)arg2 < 1;
    default:
        func_003F9598(arg0);
        return 0;
    }
}

/* func_003FFA18 - fix first call: func_004029F8(arg0, 4, 0x10) per target regs */
typedef struct PoolNode {
    struct PoolNode *next;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} PoolNode;

typedef struct PoolOwner {
    u8 pad[0x4C];
    PoolNode **freeList;
} PoolOwner;

void *func_004029F8(void *, s32, s32);

PoolNode *func_003FFA18(PoolOwner *arg0, s32 arg1) {
    PoolNode **list;
    PoolNode *node;
    s32 count;

    list = arg0->freeList;
    if (list == 0) {
        list = func_004029F8(arg0, 4, 0x10);
        if (list == 0) {
            return 0;
        }
        arg0->freeList = list;
    }
    node = list[arg1];
    if (node != 0) {
        list[arg1] = node->next;
    } else {
        count = 1 << arg1;
        node = func_004029F8(arg0, 1, (count * 4) + 0x14);
        if (node == 0) {
            return 0;
        }
        node->unk4 = arg1;
        node->unk8 = count;
    }
    node->unk10 = 0;
    node->unkC = 0;
    return node;
}
