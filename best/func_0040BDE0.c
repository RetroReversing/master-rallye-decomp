extern unsigned char D_0048CCF0[];

s64 func_0040BDE0(s64 a, s64 b)
{
    s32 sign;
    u32 ah, al, bh, bl;
    u32 n1, n0, n2;
    u32 d, dh, dl;
    u32 q1, q0, qh;
    u32 r, t, s;
    u64 q;

    sign = 0;
    if ((s32)((u64)a >> 32) < 0) {
        a = -a;
        sign = -1;
    }
    if ((s32)((u64)b >> 32) < 0) {
        b = -b;
        sign = ~sign;
    }

    ah = (u32)((u64)a >> 32);
    al = (u32)((u64)a);
    bh = (u32)((u64)b >> 32);
    bl = (u32)((u64)b);

    if (bh == 0) {
        if (ah < bl) {
            d = bl;
            if (d > 0xFFFFU) {
                if (d > 0xFFFFFFU) s = 24;
                else s = 16;
            } else {
                if (d >= 0x100U) s = 8;
                else s = 0;
            }
            s = 32 - (s + D_0048CCF0[d >> s]);
            if (s == 0) {
                n1 = ah;
                n0 = al;
            } else {
                d = bl << s;
                n1 = (ah << s) | (al >> (32 - s));
                n0 = al << s;
            }
            dh = d >> 16; dl = d & 0xFFFF;
            q1 = n1 / dh;
            r = (n1 % dh << 16) | (n0 >> 16);
            t = q1 * dl;
            if (r < t) { r += d; q1--; if (r >= d) { if (r < t) { r += d; q1--; } } }
            r -= t;
            q0 = r / dh;
            r = (r % dh << 16) | (n0 & 0xFFFF);
            t = q0 * dl;
            if (r < t) { r += d; q0--; if (r >= d) { if (r < t) q0--; } }
            q = ((u64)q1 << 32) | q0;
        } else {
            d = bl;
            if (d == 0) d = 1 / d;
            if (d > 0xFFFFU) {
                if (d > 0xFFFFFFU) s = 24;
                else s = 16;
            } else {
                if (d >= 0x100U) s = 8;
                else s = 0;
            }
            s = 32 - (s + D_0048CCF0[d >> s]);
            if (s == 0) {
                n1 = ah - d;
                n0 = al;
                qh = 1;
            } else {
                d = bl << s;
                n2 = ah >> (32 - s);
                n1 = (ah << s) | (al >> (32 - s));
                n0 = al << s;
                dh = d >> 16; dl = d & 0xFFFF;
                qh = n2 / dh;
                r = (n2 % dh << 16) | (n1 >> 16);
                t = qh * dl;
                if (r < t) { r += d; qh--; if (r >= d) { if (r < t) { r += d; qh--; } } }
                r -= t;
                q1 = r / dh;
                r = (r % dh << 16) | (n1 & 0xFFFF);
                t = q1 * dl;
                if (r < t) { r += d; q1--; if (r >= d) { if (r < t) { r += d; q1--; } } }
                r -= t;
                n1 = r;
                qh = (qh << 16) | q1;
            }
            dh = d >> 16; dl = d & 0xFFFF;
            q1 = n1 / dh;
            r = (n1 % dh << 16) | (n0 >> 16);
            t = q1 * dl;
            if (r < t) { r += d; q1--; if (r >= d) { if (r < t) { r += d; q1--; } } }
            r -= t;
            q0 = r / dh;
            r = (r % dh << 16) | (n0 & 0xFFFF);
            t = q0 * dl;
            if (r < t) { r += d; q0--; if (r >= d) { if (r < t) q0--; } }
            if (s == 0) q = ((u64)1 << 32) | ((u64)q1 << 32) | q0;
            else q = ((u64)qh << 32) | ((u64)q1 << 32) | q0;
        }
    } else {
        if (ah < bh) {
            q = 0;
        } else {
            if (bh > 0xFFFFU) {
                if (bh > 0xFFFFFFU) s = 24; else s = 16;
            } else {
                if (bh >= 0x100U) s = 8; else s = 0;
            }
            s = 32 - (s + D_0048CCF0[bh >> s]);
            if (s == 0) {
                if (ah < bh) q = 0;
                else if (ah > bh) q = 1;
                else if (al < bl) q = 0;
                else q = 1;
            } else {
                u32 d1 = (bh << s) | (bl >> (32 - s));
                u32 d0 = bl << s;
                n2 = ah >> (32 - s);
                n1 = (ah << s) | (al >> (32 - s));
                n0 = al << s;
                dh = d1 >> 16; dl = d1 & 0xFFFF;
                q1 = n2 / dh;
                r = (n2 % dh << 16) | (n1 >> 16);
                t = q1 * dl;
                if (r < t) { r += d1; q1--; if (r >= d1) { if (r < t) { r += d1; q1--; } } }
                r -= t;
                {
                    u64 p = (u64)q1 * d0;
                    u32 ph = (u32)(p >> 32);
                    u32 pl = (u32)p;
                    if (ph > r || (ph == r && pl > n0)) q1--;
                }
                q = q1;
            }
        }
    }

    if (sign) q = -q;
    return (s64)q;
}
