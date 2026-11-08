typedef struct {
    /* 0x00 */ u32 unk0;
    /* 0x04 */ u32 unk4;
    /* 0x08 */ u32 unk8;
} S_func_0023A4E8_sub;

typedef struct {
    /* 0x00 */ f32 unk_00;
    /* 0x04 */ S_func_0023A4E8_sub *unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0C */ s32 unk_0C;
    /* 0x10 */ S_func_0023A4E8_sub *unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1C */ S_func_0023A4E8_sub *unk_1C;
    /* 0x20 */ void *unk_20;
    /* 0x24 */ s32 unk_24;
} S_func_0023A4E8_arg0;

void func_0023A4E8(S_func_0023A4E8_arg0 *arg0) {
    S_func_0023A4E8_sub *v0;
    S_func_0023A4E8_sub *v1;
    S_func_0023A4E8_sub *v2;

    arg0->unk_04 = NULL;
    v0 = arg0->unk_04;
    v0->unk8 = 0;
    v1 = arg0->unk_10;
    v0->unk4 = 0;
    v2 = arg0->unk_1C;
    arg0->unk_10 = NULL;
    v1->unk8 = 0;
    v0 = arg0;
    v1->unk4 = 0;
    arg0->unk_1C = NULL;
    v2->unk8 = 0;
    v2->unk4 = 0;
}

s32 *func_0023B6E8(S_func_0023A4E8_arg0 *arg0, s32 arg1) {
    s32 **var_4;
    s32 *temp_3;
    s32 temp_7;
    s32 var_6;

    var_4 = (s32 **)arg0->unk_1C;
    temp_7 = ((s32 *)arg0->unk_20 - (s32 *)arg0->unk_1C) >> 2;
    var_6 = 0;
    if (temp_7 > 0) {
        do {
            temp_3 = *var_4;
            if (*temp_3 == arg1) {
                return temp_3;
            }
            var_6 += 1;
            var_4++;
        } while (var_6 < temp_7);
    }
    return NULL;
}

extern s32 func_002B2028(s32 *);
extern void D_002AD390(S_func_0023A4E8_arg0 *);
extern u32 D_0040E618;

typedef struct {
    s32 *unk0;
    s32 unk4;
    s32 *unk8;
    s32 unkC;
} S_func_0023B758_arg0;

void func_0023B758(S_func_0023B758_arg0 *arg0, s32 arg1) {
    s32 *temp_4;
    s32 temp_2;

    temp_4 = arg0->unk0;
    temp_2 = (arg0->unk8 - temp_4) >> 2;
    if (temp_2 != 0) {
        if ((temp_2 << 2) != 0) {
            func_002B2028(temp_4);
        } else {
            *temp_4 = (s32)&D_0040E618 - 4;
            ((s32 *)&D_0040E618)[-1] = (s32)temp_4;
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

extern void func_0023BBC8(S_func_0023A4E8_arg0 *, s32);
extern void func_0023C080(S_func_0023A4E8_arg0 *, s32);
extern void func_0023B8F8(S_func_0023A4E8_arg0 *, s32);

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} S_func_0023B7D8_arg0;

void func_0023B7D8(S_func_0023B7D8_arg0 *arg0, S_func_0023A4E8_arg0 *arg1) {
    func_0023BBC8((S_func_0023A4E8_arg0 *)arg0, (s32)arg1);
    func_0023C080((S_func_0023A4E8_arg0 *)arg0, (s32)arg1);
    func_0023B8F8((S_func_0023A4E8_arg0 *)arg0, (s32)arg1);
}
