extern void func_003F9590(void);
extern void func_003F9598(void *arg0);
extern void func_003F7CF0(void *arg0, u32 arg1, void *arg2, void *arg3);

extern u32 D_004404E0[];
extern u64 D_004404E8;
extern u64 D_004408E8;
extern u32 D_004408F0;

typedef struct Block {
    struct Block *next;
    struct Block *prev;
    u32 size; /* low bit: used/free, etc */
} Block;

void func_003F79D0(void *arg0, void *arg1) {
    Block *blk;
    Block *nxt;
    Block *cur;
    u32 sz;
    u32 nsz;
    u32 csz;
    u32 t;
    Block *list;
    Block *p;
    
    if (arg1 == 0) {
        goto ret;
    }
    
    func_003F9590();
    
    cur = (Block *)((u8 *)arg1 - 8);
    sz = cur->size & 0xfffffffe;
    nxt = (Block *)((u8 *)cur + sz);
    csz = nxt->size & 0xfffffffc;
    
    list = (Block *)&D_004404E0[2]; /* D_004404E0+8 */
    
    if ((u32)nxt == (u32)list) {
        nsz = sz + csz;
        if ((cur->size & 1) == 0) {
            /* coalesce with previous */
            u32 psz = ((Block *)((u8 *)cur - 8))->size & 0xfffffffe;
            p = (Block *)((u8 *)cur - psz);
            /* unlink p */
            p->next->prev = p->prev;
            p->prev->next = p->next;
            cur = p;
            nsz += psz;
        }
        D_004404E0[2] = (u32)cur;
        cur->size = nsz | 1;
        if (nsz <= 0x1ff) {
            /* go to small bin */
        } else {
            if ((u64)nsz >= D_004408E8) {
                func_003F7CF0(arg0, D_004408F0, nxt, (void *)cur);
            }
        }
        func_003F9598(arg0);
        return;
    } else {
        nxt->size = csz;
        t = 0;
        if ((cur->size & 1) == 0) {
            u32 psz = ((Block *)((u8 *)cur - 8))->size & 0xfffffffe;
            p = (Block *)((u8 *)cur - psz);
            nxt = (Block *)((u8 *)nxt + psz);
            nsz = sz + psz;
            if (p->next == list && p->prev == list) {
                t = 1;
            } else {
                p->next->prev = p->prev;
                p->prev->next = p->next;
            }
        } else {
            nsz = sz;
        }
        if (((Block *)((u8 *)nxt + csz))->size & 1) {
            /* not coalesced with next */
            if (t != 0) {
                nsz += csz;
                /* ... */
            }
            /* unlink from somewhere? */
        } else {
            /* coalesce with next */
            u32 nn = ((Block *)((u8 *)nxt + csz))->size & 0xfffffffe;
            if (t == 0) {
                /* ... */
            } else {
                /* add to free list */
            }
        }
        /* ... */
    }
ret:
    return;
}
