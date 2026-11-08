extern void *func_002BFBD8(s32 arg0, s32 arg1);
extern void func_003F9698(char *fmt, ...);
extern char D_00480270[];

typedef struct {
    /* 0x00 */ u8 pad0[8];
    /* 0x08 */ struct {
        /* 0x00 */ u8 pad0[0x78];
        /* 0x78 */ s16 unk78;
        /* 0x7A */ u8 pad7A[2];
        /* 0x7C */ s32 (*unk7C)(void *arg);
    } *unk8;
    /* 0x0C */ u8 padC[4];
    /* 0x10 */ s32 unk10;
} BBC58_Obj;

typedef struct { s32 v; } __attribute__((packed)) UnalignedS32;

s32 func_002BBC58(BBC58_Obj *arg0, s32 arg1) {
    s32 var_s3;
    s32 temp_s1;
    u8 *res;

    var_s3 = 0;
    temp_s1 = arg0->unk8->unk7C((void *)((u8 *)arg0 + arg0->unk8->unk78));
    res = (u8 *)func_002BFBD8(arg0->unk10, temp_s1);
    if (res != NULL) {
        var_s3 = ((UnalignedS32 *)(res + 8))->v;
    } else {
        func_003F9698(D_00480270, arg1, temp_s1);
    }
    return var_s3;
}

extern s32 func_002BB070(void *arg0);
extern u8 D_00428978[];
extern char D_00480238[];

s32 func_002BBBD0(void *arg0, s32 arg1) {
    s32 var_s2;
    u8 *entry;
    u8 *ptr;

    var_s2 = 0;
    if (func_002BB070(D_00428978) != 0) {
        entry = D_00428978 + arg1 * 12;
    } else {
        entry = NULL;
    }
    if (entry != NULL) {
        ptr = *(u8 **)entry;
        var_s2 = ((UnalignedS32 *)(ptr + 8))->v;
    } else {
        func_003F9698(D_00480238);
    }
    return var_s2;
}
