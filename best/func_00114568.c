s32 func_001D4040(void *a0, void *a1);
s32 func_001E3650(s32 a0, void *a1);
void *func_001E37E8(s32 a0, void *a1);
s32 func_001E3FB0(s32 a0, void *a1, void *a2);
s32 func_001E4280(void);

extern u8 D_00444878[];

typedef struct {
    s32 *unk0;
    s32 unk4;
} Unk1;

void func_00114568(void *arg0) {
    void *sp10;
    void *temp2;
    s32 temp2_2;
    s32 temp16;
    s32 temp17;
    
    temp2 = func_001E37E8(func_001E4280(), (u8 *)arg0 + 0x3C);
    if (temp2 == NULL) {
        return;
    }
    
    temp2_2 = func_001E3650(func_001E4280(), (u8 *)arg0 + 0x40);
    if (temp2_2 < 0 || (u32)temp2_2 >= ((*(s32 *)((u8 *)temp2 + 4) - *(s32 *)temp2) >> 2)) {
        temp17 = func_001E4280();
        func_001D4040(&sp10, D_00444878);
        func_001E3FB0(temp17, (u8 *)arg0 + 0x44, &sp10);
    } else {
        temp16 = func_001E4280();
        func_001D4040(&sp10, *(void **)(*(s32 **)temp2 + temp2_2));
        func_001E3FB0(temp16, (u8 *)arg0 + 0x44, &sp10);
    }
}
