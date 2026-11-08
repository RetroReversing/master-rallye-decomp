/* try to influence register allocation for F0B30 */
extern s32 D_0043C3B0[];

void func_003F0B30(s32 a, s32 b, s32 c) {
    D_0043C3B0[3] = a;
    D_0043C3B0[1] = b;
    D_0043C3B0[2] = c;
}

/* func_003FF820 - try switch matching m2c style more closely */
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

/* func_003FF9D8 - match target control flow */
s32 func_003FF9D8(s32 *arg1, u8 *arg2, s32 arg3) {
    s32 local;
    s32 *dst;
    s32 val;

    dst = &local;
    if (arg2 == 0) goto ret0;
    if (arg1) dst = arg1;
    if (arg3 == 0) goto retm1;
    val = *arg2;
    *dst = val;
    return (val != 0);
ret0:
    return 0;
retm1:
    return -1;
}

/* func_003FFA18 */
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

void *func_004029F8(s32, s32, s32);

PoolNode *func_003FFA18(PoolOwner *arg0, s32 arg1) {
    PoolNode **list;
    PoolNode *node;
    s32 count;

    list = arg0->freeList;
    if (list == 0) {
        list = func_004029F8(4, 0, 0x10);
        if (list == 0) {
            return 0;
        }
        arg0->freeList = list;
    }
    node = list[arg1];
    if (node != 0) {
        list[arg1] = node->next;
        node->unk10 = 0;
        node->unkC = 0;
        return node;
    }
    count = 1 << arg1;
    node = func_004029F8((s32)arg0, 1, (count * 4) + 0x14);
    if (node == 0) {
        return 0;
    }
    node->unk4 = arg1;
    node->unk8 = count;
    node->unk10 = 0;
    node->unkC = 0;
    return node;
}
