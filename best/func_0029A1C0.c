extern s32 func_00296710(void);
extern s32 func_00296530(s32, void *);
extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, s32);
extern void func_002060F8(s32);
extern void *func_00206588(s32);
extern void func_002063A0(s32, void *, f32, f32, s32);
extern void func_00205CE0(s32, s32);

typedef struct Node { struct Node *next; s16 field4; s16 field6; } Node;
typedef struct PObj { u32 unk0; Node **begin; Node **end; u8 _pad[8]; void *arr; } PObj;
typedef struct A { u8 _[0x10]; s32 unk_10; s32 unk_14; f32 unk_18; s32 unk_1C; s32 unk_20; s32 unk_24; s32 unk_28; } A;
typedef struct B { u8 _[0x4C]; s32 unk_4C; } B;
typedef struct Frame { f32 sp0; f32 sp4; s32 sp8; u8 _p0C[4]; s16 sp10; u8 _p12[14]; s32 sp20; void *sp24; u8 _p28[8]; s32 sp30; s32 sp34; s32 sp38; s32 sp3C; } Frame;

void func_0029A1C0(A *arg0, B *arg1) {
    Frame fr;
    s32 t, v21, t18, t20, var16, var16_2, n, idx, idx2, f1, temp18_2;
    Node *var3, *var4;
    PObj *P2, *P3;
    t = func_00296710();
    if (func_00296530(t, (void *)arg1) == 0) return;
    v21 = func_001E3650(func_001E4280(), (s32)arg0 + 0xC);
    if (arg0->unk_28 == v21) return;
    arg0->unk_28 = v21;
    if (arg0->unk_20 != 0) {
        t18 = arg1->unk_4C;
        func_002060F8(t18);
        fr.sp30 = 0;
        fr.sp34 = 0;
        var3 = NULL;
        if (func_00206588(arg1->unk_4C) != 0) {
            P2 = (PObj *)func_00206588(arg1->unk_4C);
            var3 = *P2->begin;
            if (var3 != NULL && var3->field4 != 0) {
                var3 = var3->next;
                while (var3 != NULL && var3->field4 != 0)
                    var3 = var3->next;
            }
            if (var3 != NULL) {
                idx = var3->field6 * 8;
                fr.sp30 = *((s32 *)((u8 *)P2->arr + idx));
                fr.sp34 = *((s32 *)((u8 *)P2->arr + idx + 4));
            }
            fr.sp20 = 0;
            fr.sp24 = (void *)P2;
        }
        var16 = 0;
        if (arg0->unk_24 > 0) {
            do {
                fr.sp8 = 0;
                fr.sp4 = (f32)arg0->unk_18;
                fr.sp0 = (f32)(arg0->unk_14 + var16 * fr.sp30);
                func_002063A0(t18, (void *)&fr, (f32)(arg0->unk_14 + var16 * fr.sp30), (f32)arg0->unk_18, 0);
                if (var16 < v21) func_00205CE0(t18, 1);
                else func_00205CE0(t18, 0);
                var16++;
            } while (var16 < arg0->unk_24);
        }
    } else {
        t20 = arg1->unk_4C;
        var16_2 = 0;
        func_002060F8(t20);
        func_00205CE0(t20, 0);
        if (v21 > 0) {
            do {
                temp18_2 = var16_2 + 1;
                fr.sp38 = 0;
                fr.sp3C = 0;
                var4 = NULL;
                if (func_00206588(arg1->unk_4C) != 0) {
                    P3 = (PObj *)func_00206588(arg1->unk_4C);
                    n = (P3->end - P3->begin) >> 2;
                    var4 = (n != 0) ? P3->begin[(u32)temp18_2 % (u32)n] : NULL;
                    if (var4 != NULL && var4->field4 != temp18_2) {
                        while (var4 != NULL && var4->field4 != temp18_2)
                            var4 = var4->next;
                    }
                    if (var4 != NULL) {
                        idx2 = var4->field6 * 8;
                        fr.sp38 = *((s32 *)((u8 *)P3->arr + idx2));
                        fr.sp3C = *((s32 *)((u8 *)P3->arr + idx2 + 4));
                    }
                    fr.sp20 = 0;
                    fr.sp24 = (void *)P3;
                }
                if (var16_2 > 0) {
                    f1 = arg0->unk_14 + (var16_2 + arg0->unk_1C) * fr.sp38 + arg0->unk_10;
                } else {
                    f1 = arg0->unk_14 + (var16_2 + arg0->unk_1C) * fr.sp38;
                }
                fr.sp0 = (f32)f1;
                fr.sp4 = (f32)arg0->unk_18;
                fr.sp8 = 0;
                func_002063A0(t20, (void *)&fr, (f32)f1, (f32)arg0->unk_18, 0);
                func_00205CE0(t20, temp18_2);
                var16_2 = temp18_2;
            } while (var16_2 < v21);
        }
    }
    return;
}
