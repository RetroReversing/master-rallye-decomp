extern f32 func_003F3038(f32);
extern s32 func_003F61D0(f32 *q, f32 *y, s32 e0, s32 nx, s32 prec, s32 *ipio2);

extern s32 D_0048B870[];
extern s32 D_0048BB88[];

s32 func_003F5B60(f32 *y, f32 x) {
    s32 hx;
    s32 ix;
    s32 n;
    f32 *yp;
    yp = y;

    {
        union { f32 f; s32 i; } u;
        u.f = x;
        hx = u.i;
    }
    ix = hx & 0x7FFFFFFF;

    if (ix <= 0x3F490FD8) {
        yp[0] = x;
        yp[1] = 0.0f;
        return 0;
    }

    if (ix <= 0x4016CBE3) {
        union { u32 i; f32 f; } pio2hi;
        pio2hi.i = 0x3FC90F80u;
        if (hx > 0) {
            x -= pio2hi.f;
            if ((ix & 0xFFFFFFF0) != 0x3FC90FD0) {
                union { u32 i; f32 f; } uc;
                f32 c, y1;
                uc.i = 0x37354443u;
                c = uc.f;
                y1 = x - c;
                yp[0] = y1;
                yp[1] = (x - y1) - c;
            } else {
                union { u32 i; f32 f; } uc1, uc2;
                f32 c1, c2, y1;
                uc1.i = 0x37354400u;
                uc2.i = 0x2E85A308u;
                c1 = uc1.f;
                c2 = uc2.f;
                x -= c1;
                y1 = x - c2;
                yp[0] = y1;
                yp[1] = (x - y1) - c2;
            }
            return 1;
        } else {
            x += pio2hi.f;
            if ((ix & 0xFFFFFFF0) != 0x3FC90FD0) {
                union { u32 i; f32 f; } uc;
                f32 c, y1;
                uc.i = 0x37354443u;
                c = uc.f;
                y1 = x + c;
                yp[0] = y1;
                yp[1] = (x - y1) + c;
            } else {
                union { u32 i; f32 f; } uc1, uc2;
                f32 c1, c2, y1;
                uc1.i = 0x37354400u;
                uc2.i = 0x2E85A308u;
                c1 = uc1.f;
                c2 = uc2.f;
                x += c1;
                y1 = x + c2;
                yp[0] = y1;
                yp[1] = (x - y1) + c2;
            }
            return -1;
        }
    }

    if (ix <= 0x43490F80) {
        f32 ax = func_003F3038(x);
        f32 fn = ax * 0.6366197723675814f + 0.5f;
        f32 r, w, y1;
        {
            union { f32 f; s32 i; } cv;
            cv.f = fn;
            n = cv.i;
        }
        {
            f32 fnf = (f32)n;
            r = ax - fnf * 1.570796251296997f;
            w = fnf * 6.077100506303966e-11f;
            y1 = r - w;
            if (n < 32) {
                if ((ix & 0xFFFFFF00) == D_0048BB88[n - 1]) {
                    yp[0] = y1;
                    yp[1] = (r - y1) - w;
                    goto done;
                }
            }
            {
                s32 j = ix >> 23;
                union { f32 f; u32 ui; } uy;
                uy.f = y1;
                yp[0] = y1;
                if ((j - ((s32)(uy.ui >> 23) & 0xFF)) > 8) {
                    f32 c1 = 6.077099609375e-11f;
                    f32 c2 = 6.123233995736766e-17f;
                    f32 t = r;
                    f32 r2 = t - fnf * c1;
                    w = fnf * c2 - (t - r2 - fnf * c1);
                    y1 = r2 - w;
                    uy.f = y1;
                    yp[0] = y1;
                    if ((j - ((s32)(uy.ui >> 23) & 0xFF)) > 25) {
                        f32 c1b, c2b;
                        union { u32 i; f32 f; } u1b;
                        union { u32 i; f32 f; } u2b;
                        u1b.i = 0x2E85A300u;
                        u2b.i = 0x248D3132u;
                        c1b = u1b.f;
                        c2b = u2b.f;
                        t = r2;
                        r = t - fnf * c1b;
                        w = fnf * c2b - (t - r - fnf * c1b);
                        y1 = r - w;
                        yp[0] = y1;
                    }
                }
            }
            yp[1] = (r - yp[0]) - w;
        }
    done:
        if (hx < 0) { yp[0] = -yp[0]; n = -n; yp[1] = -yp[1]; }
        return n;
    }

    if (ix > 0x7F7FFFFF) {
        yp[0] = x - x;
        yp[1] = x - x;
        return 0;
    }

    {
        f32 tx[3];
        s32 e0 = (ix >> 23) - 134;
        s32 i0 = ix - (e0 << 23);
        s32 i, j;
        f32 two24;
        {
            union { u32 i; f32 f; } u2_24; u2_24.i = 0x4B800000u;
            two24 = u2_24.f;
        }
        x = (f32)i0;
        for (i = 0; i <= 1; i++) {
            union { f32 f; s32 w; } cv;
            cv.f = x;
            tx[i] = (f32)cv.w;
            x = (x - tx[i]) * two24;
        }
        tx[2] = x;
        j = 3;
        while (j > 0 && tx[j - 1] == 0.0f) j--;
        n = func_003F61D0(tx, yp, e0, j, 2, D_0048B870);
        if (hx < 0) { yp[0] = -yp[0]; yp[1] = -yp[1]; n = -n; }
        return n;
    }
}
