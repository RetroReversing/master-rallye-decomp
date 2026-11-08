typedef struct {
    s32 a;
    s32 b;
    s32 c;
    u16 d;
} El;

typedef struct {
    El *begin;
    El *finish;
    El *cap;
} Vec;

El *func_0037C040(El *, El *, El *, s32);
void *func_002B1FC0(u32);
void *func_003D2910(u32);
void *func_00152D28(s32, ...);
void func_002B2028(void *);
void *memcpy(void *, const void *, unsigned int);
extern u8 D_0040E618[];

void func_0037BDD0(Vec *v, El *pos, El *val) {
    El *finish = v->finish;
    if (finish != v->cap) {
        El tmp;
        if (finish != NULL) {
            finish->a = finish[-1].a;
            finish->b = finish[-1].b;
            finish->c = finish[-1].c;
            finish->d = finish[-1].d;
        }
        v->finish = finish + 1;
        tmp = *val;
        {
            long n = (long)((u8 *)(finish - 1) - (u8 *)pos) >> 4;
            El *dst = finish;
            El *src = finish - 1;
            while (n > 0) {
                dst--;
                src--;
                memcpy(dst, src, 16);
                n--;
            }
        }
        memcpy(pos, &tmp, 16);
        return;
    }
    {
        s32 n = (s32)((u8 *)v->finish - (u8 *)v->begin) >> 4;
        s32 newcap = n ? n * 2 : 1;
        u32 bytes = (u32)newcap << 4;
        El *newbuf;
        if (bytes) {
            newbuf = func_002B1FC0(bytes);
            if (newbuf == NULL)
                newbuf = func_003D2910(bytes);
        } else {
            u32 head = *(u32 *)(D_0040E618 - 4);
            if (head) {
                newbuf = (El *)head;
                *(u32 *)(D_0040E618 - 4) = *(u32 *)head;
            } else {
                newbuf = func_00152D28(0);
            }
        }
        {
            El *q = func_0037C040(v->begin, pos, newbuf, 0);
            if (q) {
                q->a = val->a;
                q->b = val->b;
                q->c = val->c;
                q->d = val->d;
            }
            {
                El *newfinish = func_0037C040(pos, v->finish, q + 1, 0);
                s32 capn = (s32)((u8 *)v->cap - (u8 *)v->begin) >> 4;
                if (capn != 0) {
                    s32 capbytes = capn << 4;
                    if (capbytes != 0)
                        func_002B2028(v->begin);
                    else {
                        *(u32 *)v->begin = *(u32 *)(D_0040E618 - 4);
                        *(u32 *)(D_0040E618 - 4) = (u32)v->begin;
                    }
                }
                v->finish = newfinish;
                v->cap = (El *)((u8 *)newbuf + bytes);
                v->begin = newbuf;
            }
        }
    }
}
