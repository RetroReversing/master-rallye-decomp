extern void func_001D4040(void *, const char *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E3D10(s32, void *, s32);
extern void func_001E33C8(s32, void *, s32);
extern float func_001E3610(s32, void *);
extern s32 func_00194C40(void);
extern s32 func_00193EB0(s32);
extern s32 func_00193C48(s32);
extern s32 func_00194A28(s32);
extern void func_00193BA8(s32, s32);
extern void func_00193C10(s32, s32);
extern void func_00193E28(s32, s32);
extern volatile unsigned short func_001D2458(void *, const char *);
extern void func_001D2900(void *, u32);
extern void D_002AD390(u32);
extern void func_00100FA0(void *, s32, s32);
extern s32 func_002A2458(void);
extern s32 func_001189C0(void);
extern void func_002A1D30(s32, void *, s32, s32);
extern void func_00118538(void *, s32, s32);
extern void func_003F9698(const char *, ...);
extern void func_001107D0(void);
extern void func_001100F0(s32);
extern void func_00110238(s32, s32);
extern s32 func_00110430(void);
extern char D_00444880[];
extern char D_00444970[];
extern char D_00444988[];
extern char D_004449B0[];
extern char D_00444A18[];
extern char D_00444A60[];
extern char D_00444A78[];
extern char D_00444AD0[];
typedef struct 
{
  float v;
  float fade;
  int unused;
  int active;
  u32 track;
  char pad[16];
  float setting;
  int reset;
} Music;
extern Music *func_002003C0(void);
extern void func_00200250(Music *);
extern void func_00200270(Music *);
inline static void *key(void *p, const char *s)
{
  func_001D4040(p, s);
  return p;
}

inline static void *handle(void *p, const char *s)
{
  func_001D2458(p, s);
  return p;
}

inline static s64 logdouble(double d)
{
  union 
  {
    double f;
    s64 bits;
  } u;
  u.f = d;
  return u.bits;
}

void func_001006C0(s32 o)
{
  u32 str[4];
  u32 h1[1];
  u32 h2[1];
  s32 r;
  u32 tmp[4];
  s32 mode;
  Music *m;
  func_001E3EC0(func_001E4280(), key(str, D_00444970), 9);
  func_001E3D10(func_001E4280(), key(str, D_00444988), 0);
  func_001E33C8(func_001E4280(), key(str, D_00444988), 0);
  func_003F9698(D_004449B0, D_00444A18, 255);
  func_002003C0()->reset = 0;
  func_001D2458(str, D_00444A60);
  mode = func_00193EB0(func_00194C40());
  if (mode)
  {
    u32 tmp[4];
    func_00100FA0(tmp, o, mode);
    func_001D2900(str, tmp[0]);
    D_002AD390(tmp[0]);
    func_002A1D30(func_002A2458(), key(tmp, (char *) str[0]), 0, 1);
    func_00193BA8(func_00194C40(), 1);
    func_00193C10(func_00194C40(), 1);
    m = func_002003C0();
    m->setting = func_001E3610(func_001E4280(), key(tmp, D_00444880));
    func_002003C0()->v = 0.8f;
    m = func_002003C0();
    func_00118538(h1, func_001189C0(), 1);
    func_001D4040(tmp, (char *) h1[0]);
    m->track = tmp[0];
    D_002AD390(h1[0]);
    {
      char *fmt;
      func_002003C0()->active = 1;
      func_00200250(func_002003C0());
      fmt = D_00444A78;
      func_00118538(tmp, func_001189C0(), 1);
      func_003F9698(fmt, (char *) tmp[0], logdouble((double) 0.8f), D_00444A18, 284);
      D_002AD390(tmp[0]);
    }
    func_00193E28(func_00194C40(), 0);
    func_001107D0();
    func_001100F0(func_00110430());
    func_00110238(func_00110430(), 39);
  }
  else
    if (!func_00193C48(func_00194C40()))
  {
    func_002003C0()->reset = 0;
    func_002003C0()->fade = 0.85f;
    func_002003C0()->v = 0.85f;
    func_00200270(func_002003C0());
    {
      u32 tmp[4];
      Music *n = func_002003C0();
      func_00118538(h2, func_001189C0(), 2);
      func_001D4040(tmp, (char *) h2[0]);
      n->track = tmp[0];
      D_002AD390(h2[0]);
    }
    func_002003C0()->active = 1;
    func_00193BA8(func_00194C40(), 1);
    func_00193C10(func_00194C40(), 1);
    {
      if (func_00194A28(func_00194C40()))
      {
        func_001E3D10(func_001E4280(), key(tmp, D_00444AD0), 1);
        func_00100FA0(tmp, o, 1);
        func_001D2900(str, tmp[0]);
        D_002AD390(tmp[0]);
      }
      else
      {
        func_00100FA0(tmp, o, 16);
        func_001D2900(str, tmp[0]);
        D_002AD390(tmp[0]);
      }
      func_002A1D30(func_002A2458(), key(tmp, (char *) str[0]), 0, 1);
    }
  }
  D_002AD390(str[0]);
}

