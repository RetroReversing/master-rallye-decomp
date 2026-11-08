extern u32 D_0040E618[];
extern void func_0021C7E8(void *);
extern void func_00204BD8(void *);
extern void func_002B2028(void *);
extern void D_002AD390(void *);

struct D_00478DE8 {
    void *vtable;
    void *unk4; void *unk8; s32 unkC;
    void *unk10; s32 unk14;
    void *unk18;
    void *unk1C; void *unk20; s32 unk24;
    void func_0021CA00(s32);
};

void D_00478DE8::func_0021CA00(s32 arg1) {
    void *p;
    s32 n;
    
    this->vtable = (void *)0x478DE8;
    func_0021C7E8(this);
    func_00204BD8(this);
    
    p = this->unk1C;
    n = ((s32)this->unk24 - (s32)p) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(p);
        } else {
            u32 *head = &D_0040E618[-1];
            *(void **)p = (void *)*head;
            *head = (u32)p;
        }
    }
    
    p = this->unk10;
    n = ((s32)this->unk18 - (s32)p) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(p);
        } else {
            u32 *head = &D_0040E618[-1];
            *(void **)p = (void *)*head;
            *head = (u32)p;
        }
    }
    
    p = this->unk4;
    n = ((s32)this->unkC - (s32)p) >> 2;
    if (n != 0) {
        if ((n << 2) != 0) {
            func_002B2028(p);
        } else {
            u32 *head = &D_0040E618[-1];
            *(void **)p = (void *)*head;
            *head = (u32)p;
        }
    }
    
    if (arg1 & 1) {
        D_002AD390(this);
    }
}
