/* func_001B28E8 */
void func_001B28E8(void *arg0, f32 *arg1, s32 arg2){
    *(f32*)((s8*)arg0 + 0x60) = arg1[0];
    *(s32*)((s8*)arg0 + 0x68) = arg2;
    *(f32*)((s8*)arg0 + 0x64) = arg1[1];
}

/* func_001B1280 */
extern s32 func_001B12C8(void);
extern s32 func_001B1380(s32);
extern s32 func_001B1408(s32, s32);

void func_001B1280(s32 arg0, s32 arg1){
    func_001B12C8();
    func_001B1380(arg0);
    func_001B1408(arg0, arg1);
}

/* func_001B1030 */
extern void func_001D4040(void*, const char*);
extern char D_00472CC0[];
extern char D_00473B90[];

typedef struct{
    s32 unk0;
    s32 unk4;
    s32 *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    void *unk20;
    s32 unk24;
} S_func_0023A4E8_arg0;

void func_001B1030(void *arg0){
    func_001D4040(arg0, &D_00472CC0);
    ((S_func_0023A4E8_arg0 *)arg0)->unk0 = -1;
    ((S_func_0023A4E8_arg0 *)arg0)->unk8 = (s32 *)&D_00473B90;
    ((S_func_0023A4E8_arg0 *)arg0)->unkC = 0;
    ((S_func_0023A4E8_arg0 *)arg0)->unk10 = 0;
    ((S_func_0023A4E8_arg0 *)arg0)->unk14 = 0;
    ((S_func_0023A4E8_arg0 *)arg0)->unk18 = 0;
    ((S_func_0023A4E8_arg0 *)arg0)->unk20 = NULL;
    ((S_func_0023A4E8_arg0 *)arg0)->unk24 = 0;
}

/* func_001B0F88 */
void func_001B0F88(void *arg0, void *arg1){
    f32 *f_arg1 = (f32 *)arg1;
    f32 f0 = f_arg1[0];
    f32 f1 = f_arg1[1];
    f32 f2 = f_arg1[2];
    f32 f3 = f_arg1[3];
    f32 f4 = f_arg1[4];
    f32 f5 = f_arg1[5];
    f32 f6 = f_arg1[6];
    f32 f7 = f_arg1[7];
    f32 sp0 = f0 + f4;
    f32 sp4 = f1 * f3;
    f32 sp8 = f2;
    f32 sp10 = f0;
    f32 sp14 = f2 * f3;
    f32 sp18 = f0 * f3;
    f32 sp20 = f4 * f3;
    f32 sp24 = f1 * f3;
    f32 sp28 = f5 * f3;
    /* store results */
    ((f32*)arg0)[0] = sp0;
    ((f32*)arg0)[1] = sp4;
    ((f32*)arg0)[2] = sp8;
    ((f32*)arg0)[3] = sp10;
    ((f32*)arg0)[4] = sp14;
    ((f32*)arg0)[5] = sp18;
    ((f32*)arg0)[6] = sp20;
    ((f32*)arg0)[7] = sp24;
    ((f32*)arg0)[8] = sp28;
}
