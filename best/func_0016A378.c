void *func_00168378(s32);
f32 func_001684B8(s32);
f32 func_00168960(s32);
f32 func_001CE820(s32);
f32 func_001CE850(s32);
inline f32 *inline_fn(char *arg0)
{
  return (f32 *) (arg0 + 0x18);
}

f32 func_0016A378(s32 unused, f32 x, s32 obj, f32 y)
{
  f32 max;
  f32 result;
  f32 delta;
  f32 speed;
  max = (func_001684B8(obj) > 0.0001f) ? (func_001684B8(obj)) : (0.0001f);
  result = 0.0f;
  delta = max - (x + (*inline_fn((char *) func_00168378(obj))));
  if (delta > 0.0f)
  {
    result = delta / max;
    if (result > 0.9f)
    {
      result = 0.9f;
    }
    result *= 1.0f - __builtin_fabsf(y);
    speed = func_00168960(obj);
    {
      s32 flag = func_001CE820(obj) < speed;
      if (flag)
      {
        speed = func_00168960(obj);
        {
          s32 flag = func_001CE850(obj) < speed;
          if (flag)
          {
            result = 0.0f;
          }
          else
          {
            result *= func_00168960(obj);
          }
        }
      }
 do { } while (0);
    }
  }
  return result;
}
