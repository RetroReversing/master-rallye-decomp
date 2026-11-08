typedef struct { s32 type, sign; s32 exp; u32 pad; u64 mant; } Parts;
u64 func_002ABAB8(Parts *p) {
union { u64 bits; struct { u64 fraction:52; u64 exponent:11; u64 sign:1; } f; } result;
s32 type=p->type; u32 exponent=0; s32 sign=p->sign;
u64 mant=p->mant;
if((u32)type<2) { exponent=2047; mant|=0x0008000000000000ULL; }
else if((type ^ 4)==0) { exponent=2047; mant=0; }
else if((type ^ 2)==0) mant=0;
else if(mant) {
type=p->exp;
if(type < -1022) { s32 shift=-1022-type; if(shift>=57) { mant=0; } else { mant >>=shift; goto shift8; } goto shift8; }
else if(type>=1024) { exponent=2047; mant=0; }
else {
exponent=type+1023;
if((mant&255)==128) { if(mant&256) mant+=128; } else mant+=127;
if(mant>0x1fffffffffffffffULL) { mant>>=1; exponent++; }
shift8: mant>>=8;
}
}
result.f.fraction=mant; result.f.exponent=exponent; result.f.sign=sign; return result.bits;
}
