typedef struct {
    u16 *begin;
    u16 *finish;
    u16 *cap;
} V16;

u16 *func_002FAC50(u16 *, u16 *, u16 *, s32);
u16 *func_002FBE00(u16 *, s32, u16 *, s32);
void func_002FBDC8(u16 *, u16 *, u16 *);
void *func_002B1FC0(u32);
void *func_003D2910(u32);
void *func_00152D28(s32, ...);
void func_002B2028(void *);
extern u8 D_0040E618[];

void func_0037BB08(V16 *v, u16 *pos, u32 count, u16 *val) {
    u16 tmp;
    u16 *finish;
    if (count == 0)
        return;
    finish = v->finish;
    if ((u32)(((u8 *)v->cap - (u8 *)finish) >> 1) < count) {
        u32 n = (u32)(((u8 *)finish - (u8 *)v->begin) >> 1);
        u32 add = (n < count) ? n : count;
        u32 newcap = n + add;
        u32 bytes = newcap << 1;
        u16 *newbuf;
        if (bytes != 0) {
            newbuf = func_002B1FC0(bytes);
            if (newbuf == NULL)
                newbuf = func_003D2910(bytes);
        } else {
            u32 head = *(u32 *)(D_0040E618 - 4);
            if (head != 0) {
                newbuf = (u16 *)head;
                *(u32 *)(D_0040E618 - 4) = *(u32 *)head;
            } else {
                newbuf = func_00152D28(0);
            }
        }
        {
            u16 *q = func_002FAC50(v->begin, pos, newbuf, 0);
            u16 *newfinish;
            q = func_002FBE00(q, count, val, 0);
            newfinish = func_002FAC50(pos, v->finish, q, 0);
            {
                u32 capn = (u32)(((u8 *)v->cap - (u8 *)v->begin) >> 1);
                if (capn != 0) {
                    u32 capbytes = capn << 1;
                    if (capbytes != 0)
                        func_002B2028(v->begin);
                    else {
                        *(u32 *)v->begin = *(u32 *)(D_0040E618 - 4);
                        *(u32 *)(D_0040E618 - 4) = (u32)v->begin;
                    }
                }
            }
            v->finish = newfinish;
            v->cap = (u16 *)((u8 *)newbuf + bytes);
            v->begin = newbuf;
        }
    } else {
        u32 k = (u32)(((u8 *)finish - (u8 *)pos) >> 1);
        tmp = *val;
        if (count < k) {
            func_002FAC50(finish - count, finish, finish, 0);
            {
                u16 *dst = finish;
                u16 *src = finish - count;
                u32 n = (u32)(((u8 *)src - (u8 *)pos) >> 1);
                v->finish = finish + count;
                while (n > 0) {
                    *--dst = *--src;
                    n--;
                }
            }
            func_002FBDC8(pos, pos + count, &tmp);
        } else {
            func_002FBE00(finish, count - k, &tmp, 0);
            v->finish = finish + (count - k);
            func_002FAC50(pos, finish, v->finish, 0);
            v->finish += k;
            func_002FBDC8(pos, finish, &tmp);
        }
    }
}
