#include "context.h"

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
    s32 v3 = arg0->unkC;
    s32 v2 = arg1->unkC;
    s32 neg1 = -1;
    s32 t;
    s32 a0v;

    if (v3 != v2) goto ret0;
    v2 = arg0->unk0;
    if (v2 != neg1) goto L22c;
    if (arg1->unk0 == neg1) goto L238;
ret0:
    return 0;
L22c:
    if (v2 == arg1->unk0) goto ret0;
L238:
    v3 = arg0->unk10;
    if (v3 != neg1) goto L258;
    if (arg1->unk10 != v3) goto ret0;
    goto L268;
L258:
    if (arg1->unk10 == neg1) goto ret0;
L268:
    a0v = arg0->unk28;
    if (a0v != neg1) goto L288;
    if (arg1->unk28 != a0v) goto ret0;
    goto ret1;
L288:
    if (arg1->unk28 == neg1) goto ret0;
ret1:
    return 1;
}
