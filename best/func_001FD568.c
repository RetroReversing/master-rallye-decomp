extern void *D_002AD408(s32);
extern void func_001FD818(void *, void *, void *);
extern u32 D_004787F8;

void func_001FD568(void *arg0) {
    void *p40 = (u8 *)arg0 + 0x40;
    s32 begin = *(s32 *)p40;
    s32 end = *(s32 *)((u8 *)p40 + 4);
    s32 n = ((end - begin) * (s32)0xCCCCCCCD) >> 4;
    if ((u32)n >= 2) {
        void *obj = D_002AD408(0x10);
        f32 f0 = *(f32 *)((u8 *)arg0 + 0x30);
        void *p30 = (u8 *)arg0 + 0x30;
        void *p4 = (u8 *)obj + 4;
        *(u32 *)obj = (u32)&D_004787F8;
        *(f32 *)p4 = f0;
        *(f32 *)((u8 *)p4 + 4) = *(f32 *)((u8 *)arg0 + 0x34);
        *(f32 *)((u8 *)p4 + 8) = *(f32 *)((u8 *)arg0 + 0x38);
        func_001FD818(p40, obj, p30);
    }
}
