typedef struct {
    void *begin;
    void *end;
    void *cap;
} Vec;

extern void *func_00152D28(s32);
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_003F93CC(void *dst, void *src, s32 size);

extern u32 D_0040E618[];

void *func_00156E00(Vec *arg0, Vec *arg1, Vec *arg2) {
    Vec *v19 = arg0;
    Vec *v20 = arg1;
    Vec *v18 = arg2;
    if (v19 == v20) {
        return v18;
    }
    do {
        if (v18 != NULL) {
            v18->begin = NULL;
            v18->end = NULL;
            v18->cap = NULL;
            s32 diff = (s32)((u8 *)v19->end - (u8 *)v19->begin);
            s32 count = diff >> 2;
            void *mem = NULL;
            s32 bytes = 0;
            if (count != 0) {
                bytes = count << 2;
                if (bytes != 0) {
                    mem = func_002B1FC0(bytes);
                    if (mem == NULL) {
                        mem = func_003D2910(bytes);
                    }
                } else {
                    if (D_0040E618[-1] != 0) {
                        mem = (void *)D_0040E618[-1];
                        D_0040E618[-1] = *(u32 *)mem;
                    } else {
                        mem = func_00152D28(0);
                    }
                }
            } else {
                mem = NULL;
                bytes = 0;
            }
            v18->begin = mem;
            v18->cap = (void *)((u8 *)mem + bytes);
            v18->end = mem;
            {
                void *src_begin = v19->begin;
                void *src_end = v19->end;
                s32 size = ((s32)((u8 *)src_end - (u8 *)src_begin) >> 2) << 2;
                func_003F93CC(mem, src_begin, size);
                v18->end = (void *)((u8 *)mem + ((u8 *)src_end - (u8 *)src_begin));
            }
        }
        v19 = (Vec *)((u8 *)v19 + 12);
        v18 = (Vec *)((u8 *)v18 + 12);
    } while (v19 != v20);
    return v18;
}
