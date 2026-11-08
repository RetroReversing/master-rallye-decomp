extern s32 func_00191710(s32);
extern s32 func_00193B60();
extern s32 func_00194738(s32);
extern s32 func_00194C40(void);
extern void func_00194CD0(s32, s32, s32);
extern s32 func_00194D58(s32, s32);
extern void func_00195C68(s32, f32, s32);
extern f32 func_00195CF0(s32, s32);
extern s32 func_00196028();
extern f32 func_001969A0(s32, s32);
extern s32 func_00196B40(s32, s32);
extern s32 func_00196E10(void);
extern void func_001D4040(void *, char *);
extern s32 func_001E3650(s32, s32);
extern s32 func_001E4280(void);
extern char D_00445DC0[];
void func_0010FB20(void)
{
  char buf[16];
  s32 var_16;
  s32 var_17;
  s32 E;
  s32 E2;
  s32 G;
  s32 H;
  s32 acc;
  s32 I;
  s32 K;
  s32 L;
  s32 M;
  f32 N;
  f32 P;
  f32 N2;
  f32 P2;
  var_16 = 0;
  var_17 = func_00196B40(func_00196E10(), 0);
  if (func_00194738(func_00194C40()) != 0)
  {
    var_16 = func_00196B40(func_00196E10(), 1);
  }
  if (var_16 > 0)
  {
    if (var_16 < var_17)
    {
      var_17 = var_16;
    }
  }
  if (((u32) (var_17 - 1)) < 3U)
  {
    E = func_001E4280();
    func_001D4040(buf, D_00445DC0);
    E2 = func_001E3650(E, (s32) buf);
    G = func_00191710(func_00193B60(E2));
    acc = E2 * 11;
    acc = acc + 61;
    acc = acc + G;
    H = func_00196028(G);
    I = func_00194D58(H, acc);
    if ((var_17 < I) || (I == 0))
    {
 do { func_00194CD0(func_00196028((s32) (var_17 < I)), acc, var_17); } while (0);
    }
  }
  K = func_00193B60();
  L = func_00191710(0);
  M = func_00196028(L);
  N = func_00195CF0(M, M);
  P = func_001969A0(func_00196E10(), 0);
  if (P <= N)
  {
    func_00195C68(func_00196028(), P, M);
  }
  if (func_00194738(func_00194C40()) != 0)
  {
    N2 = func_00195CF0(func_00196028(), M);
    P2 = func_001969A0(func_00196E10(), 1);
    if (P2 <= N2)
    {
      func_00195C68(func_00196028(), P2, M);
    }
  }
}
