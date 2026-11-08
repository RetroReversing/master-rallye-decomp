typedef struct { u16 lo; u16 hi; } D_1FF0000_elem;
extern D_1FF0000_elem D_1FF0000[];

s16 func_002B16D8(s32 arg0) {
    return (s16)((D_1FF0000[0].lo ^ arg0) | (D_1FF0000[1].lo ^ arg0) |
                 (D_1FF0000[2].lo ^ arg0) | (D_1FF0000[3].lo ^ arg0));
}
