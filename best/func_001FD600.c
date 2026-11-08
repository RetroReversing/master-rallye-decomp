extern void *D_002AD408(s32);
extern void func_001FD818(void *, void *, void *, void *);
extern u32 D_004787E0;

void func_001FD600(void *arg0) {
    void *p40 = (u8 *)arg0 + 0x40;
    s32 begin = *(s32 *)p40;
    s32 end = *(s32 *)((u8 *)p40 + 4);
    s32 n = ((end - begin) * (s32)0xCCCCCCCD) >> 4;
    if ((u32)n >= 2) {
        void *obj = D_002AD408(0x1C);
        f32 f0 = *(f32 *)((u8 *)arg0 + 0x30);
        void *p30 = (u8 *)arg0 + 0x30;
        void *p10 = (u8 *)obj + 0x10;
        void *p4 = (u8 *)obj + 4;
        *(u32 *)obj = (u32)&D_004787E0;
        *(f32 *)p4 = f0;
        *(f32 *)((u8 *)p4 + 4) = *(f32 *)((u8 *)p30 + 4);
        *(f32 *)((u8 *)p4 + 8) = *(f32 *)((u8 *)p30 + 8);
        *(f32 *)p10 = *(f32 *)arg0;
        *(f32 *)((u8 *)p10 + 8) = *(f32 *)((u8 *)arg0 + 8);
        *(f32 *)((u8 *)p10 + 4) = *(f32 *)((u8 *)arg0 + 4);
        func_001FD818(p40, obj, p30, p10);
    }
}
