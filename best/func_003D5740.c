extern void D_002AD390(void *);
extern void D_002AD530(s32, s64 *, s16, s64, s32, s64 *, void *);
extern s64 D_00488F38;
extern s64 D_00488F48;
extern s64 D_00488F58;
extern s64 D_00489120;

void func_003D5740(void *arg0, s32 arg1) {
    s64 sp10;
    s64 sp18;
    s32 temp_4_2;
    s32 temp_8;
    void *temp_4;
    void *temp_7;

    temp_7 = *(void **)arg0;
    *(u32 *)((u8 *)temp_7 + 0x28) = (u32)&D_00488F38;
    if (arg1 == 0) {
        sp10 = D_00488F38;
        sp18 = D_00488F38;
        *(u32 *)((u8 *)temp_7 + 0x28) = (u32)&sp10;
        sp18 = D_00488F38 + (s64)((u8 *)arg0 - ((u8 *)temp_7 - 0x10));
    }
    temp_4 = *(void **)((u8 *)arg0 + 8);
    *(u32 *)((u8 *)temp_4 + 0x28) = (u32)&D_00488F58;
    *(u32 *)((u8 *)temp_4 + 0x28) = (u32)&sp10;
    temp_8 = arg1 & 2;
    *(u32 *)((u8 *)temp_7 + 0x28) = (u32)&D_00488F48;
    *(u32 *)((u8 *)temp_7 + 0x28) = (u32)&sp10;
    if (temp_8 != 0) {
        temp_4_2 = *(s32 *)((u8 *)temp_7 + 0x20);
        *(u32 *)((u8 *)temp_7 + 0x28) = (u32)&D_00489120;
        if (temp_4_2 != 0) {
            D_002AD530(temp_4_2, (s64 *)&D_00488F48, (s16)(D_00488F58 + 8 + ((u8 *)arg0 - (u8 *)temp_4 + 0x10)), (s32)D_00488F48, temp_8, (s64 *)&D_00488F48, temp_7);
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
