/* identical to func_001D94C0 (matched), with its names changed by decompdecomp */
extern unsigned int D_0040E618[];

typedef struct {
    void *next_free;
    unsigned int field4;
    unsigned int refcount;
    unsigned int fieldC;
} ObjHeader;

typedef struct {
    void *ptr;
    unsigned int unk4;
} Entry;

extern void func_002B2028(void *);

void func_002A6EF0(Entry *arg0, Entry *arg1, Entry *arg2) {
    Entry *var_16 = arg0;
    if (var_16 == arg1) {
        return;
    }
    do {
        if (arg2 != var_16) {
            void *obj = var_16->ptr;
            ObjHeader *hdr = (ObjHeader *)((unsigned char *)obj - 0x10);
            hdr->refcount--;
            if (hdr->refcount == 0) {
                if (hdr->field4 + 0x10) {func_002B2028(hdr);} else {hdr->next_free=(void*)D_0040E618[-1];D_0040E618[-1]=(unsigned)hdr;}
            }
            {
                void *src_obj = arg2->ptr;
                ObjHeader *shdr = (ObjHeader *)((unsigned char *)src_obj - 0x10);
                void *new_obj;
                if (shdr->fieldC != 0) {
                    new_obj = func_00151930(shdr);
                } else {
                    shdr->refcount++;
                    new_obj = src_obj;
                }
                var_16->ptr = new_obj;
            }
        }
        var_16->unk4 = arg2->unk4;
        var_16++;
    } while (var_16 != arg1);
}
