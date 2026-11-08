#include "context.h"

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

int func_001F2480(int, int);
int func_001F24D8(int, int);
int func_001F2530(int, int);

typedef struct S_1F91F8 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
} S_1F91F8;

int func_001F91F8(S_1F91F8 *arg0, S_1F91F8 *arg1) {
    s32 a0c, a1c;
    s32 a00, a10;
    s32 a010, a110;
    s32 a028, a128;

    a0c = arg0->unkC;
    a1c = arg1->unkC;
    if (a0c != a1c) {
        return 0;
    }
    a00 = arg0->unk0;
    if (a00 != -1) {
        a10 = arg1->unk0;
        if (a00 != a10) {
            return 0;
        }
    } else {
        a10 = arg1->unk0;
        if (a10 != -1) {
            return 0;
        }
    }
    a010 = arg0->unk10;
    if (a010 != -1) {
        a110 = arg1->unk10;
        if (a110 == -1) {
            return 0;
        }
    } else {
        a110 = arg1->unk10;
        if (a110 != a010) {
            return 0;
        }
    }
    a028 = arg0->unk28;
    if (a028 != -1) {
        a128 = arg1->unk28;
        if (a128 == -1) {
            return 0;
        }
    } else {
        a128 = arg1->unk28;
        if (a128 == a028) {
            return 1;
        }
        return 0;
    }
    if (a028 == -1) {
        return 1;
    }
    a128 = arg1->unk28;
    if (a128 == -1) {
        return 0;
    }
    return 1;
}

typedef struct S_1F92A8_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} S_1F92A8_arg0;

typedef struct S_1F92A8_arg1 {
    u8 pad[0x20];
    void **unk20;
    s32 unk24;
} S_1F92A8_arg1;

int func_001F92A8(S_1F92A8_arg0 *arg0, S_1F92A8_arg1 *arg1) {
    s32 v;
    int i;
    s32 *p;

    v = arg0->unkC;
    if (v != -1) {
        if (func_001F2480(arg1->unk24, v) == 0) {
            goto check_unk0;
        }
        if (func_001F24D8(arg1->unk24, arg0->unkC) == 0) {
            goto check_unk0;
        }
        return 1;
    }
check_unk0:
    if (arg0->unk0 == -1) {
        return 0;
    }
    p = &arg0->unk0;
    for (i = 0; i < 3; i++) {
        s32 idx = p[i];
        f32 *base = (f32 *)arg1->unk20[0];
        if (*(f32 *)((u8 *)base + idx * 16 + 0xC) < 1.0f) {
            return 1;
        }
    }
    return 0;
}

typedef struct S_1F9368_arg0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} S_1F9368_arg0;

typedef struct S_1F9368_arg1 {
    u8 pad[0x24];
    s32 unk24;
} S_1F9368_arg1;

int func_001F9368(S_1F9368_arg0 *arg0, S_1F9368_arg1 *arg1) {
    s32 v = arg0->unkC;
    if (v == -1) {
        return 0;
    }
    if (func_001F2530(arg1->unk24, v) == 0) {
        return 0;
    }
    return 1;
}

void func_00208888(void *arg0, s32 arg1, s32 *arg2, f32 *arg3) {
    s32 temp = arg1 << 2;
    *arg2 = *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0xC) + temp);
    *arg3 = *(f32 *)((u8 *)*(void **)((u8 *)arg0 + 0x0) + temp);
}
