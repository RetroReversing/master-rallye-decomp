void *D_002AD408(int);
s32 func_001D4010(void *);
void func_001D4040(void *, const char *);
void func_001DF2B0(void *, s32, void *);
s32 func_001E6638(void *, void *);
s32 func_003FA580(s32, s32);

extern const char D_00476FD0[];
extern void *D_0044DD18;

typedef struct {
    void *unk0;
    void *unk4;
} UnkArg1;

typedef struct {
    u32 pad[3];
    u32 unkC;
    void *unk8;
} UnkVar17;

typedef struct UnkVtable UnkVtable;

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    UnkVtable *unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
} UnkTemp2;

struct UnkVtable {
    void *unk0;
    void *unk4;
    void (*unkC)(void *, int);
    u16 unk8;
};

void *func_001E6470(void *arg0, UnkArg1 *arg1, void *arg2, u32 arg3) {
    UnkTemp2 *temp_2;
    UnkTemp2 *temp_3;
    UnkVar17 *var_17;
    s32 var_3;
    s32 temp_16;
    s32 temp_2_3;
    UnkVtable *vtable;
    void *sp0;

    temp_2 = (UnkTemp2 *)D_002AD408(0x24);
    temp_3 = (UnkTemp2 *)((u8 *)temp_2 + 0x14);
    temp_2->unk8 = 0;
    temp_2->unk10 = (UnkVtable *)&D_0044DD18;
    temp_2->unkC = 0;
    temp_2->unk4 = 0;
    temp_2->unk0 = 0;
    temp_2->unk14 = 0;
    temp_3->unk8 = 0;
    temp_3->unk4 = 0;
    temp_2->unk20 = 0;
    func_001D4040(&sp0, D_00476FD0);
    var_17 = (UnkVar17 *)arg1->unk0;
    temp_2->unk20 = sp0;
    if (var_17 == (UnkVar17 *)arg1->unk4) {
        return temp_2;
    }
loop_1:
    if ((u32)var_17->unk8 ^ 0xC) {
        var_3 = 1;
        if (arg3 < 5) {
            switch (arg3) {
            case 1:
                var_3 = 0;
                if (var_17->unkC & 1) {
                    temp_16 = func_001D4010((u8 *)var_17 + 0x18);
                    var_3 = func_003FA580(temp_16, func_001D4010(arg2)) == 0;
                }
                break;
            case 2:
                var_3 = ((u32)var_17->unkC >> 2) & 1;
                break;
            case 3:
                var_3 = ((u32)var_17->unkC >> 1) & 1;
                break;
            case 4:
                var_3 = 0;
                if (var_17->unkC & 1) {
                    var_3 = (var_17->unk8 == (void *)0xB) ? 0 : 1;
                }
                break;
            }
        }
        if (var_3) {
            temp_2_3 = func_001E6638(arg0, var_17);
            if (temp_2_3) {
                func_001DF2B0(temp_2, temp_2_3, 0);
                goto done;
            }
            if (temp_2) {
                vtable = temp_2->unk10;
                ((void (*)(void *, int))(vtable->unkC))((u8 *)temp_2 + vtable->unk8, 3);
            }
            return NULL;
        }
    }
    var_17 = (UnkVar17 *)((u8 *)var_17 + 0x1C);
    if (var_17 == (UnkVar17 *)arg1->unk4) {
        return temp_2;
    }
    goto loop_1;
done:
    return temp_2;
}
