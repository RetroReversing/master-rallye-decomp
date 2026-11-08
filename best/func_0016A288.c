f32 func_001684B8(s32);
f32 func_00168960(s32);
f32 func_001CE850(s32);
f32 func_0016A288(s32 unused, s32 obj, f32 x)
{
  f32 limit;
  f32 value;
  f32 last;
  f32 result;
  s32 flag;
  if (func_001684B8(obj) > 0.0001f)
  {
 do { limit = func_001684B8(obj); } while (0);
  }
  else
  {
    limit = 0.0001f;
  }
  value = func_00168960(obj);
  if (value > 0.6f)
  {
    value = 0.0f;
  }
  if (limit < x)
  {
    x = 1.0f - value;
  }
  else
  {
    x = 0.0f;
  }
  last = func_00168960(obj);
  flag = func_001CE850(obj) < last;
  result = x;
  if (flag)
  {
    result = 1.0f;
  }
  return result;
}
