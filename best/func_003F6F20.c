extern double D_0048BD08[];
double func_002ABEC8(double,double);
double func_002ABF20(double,double);
typedef union {double d;u64 bits;} DoubleBits;
double func_003F6F20(double x){
 DoubleBits v,t; s32 hi,lo,j,exp;u32 sign,mask;double w,c;
 v.d=x;lo=(s32)v.bits;hi=(s32)((s64)v.bits>>32);
 exp=(hi>>20)&0x7ff;j=exp-0x3ff;sign=(u32)hi>>31;
 if(j<20){
 if(j<0){
 if(((hi&0x7fffffff)|lo)==0)return x;
 lo|=hi&0xfffff;hi&=0xfffe0000;hi|=((u32)(lo|-lo)>>12)&0x80000;
 v.bits=(v.bits&0xffffffffULL)|((u64)(u32)hi<<32);
 c=D_0048BD08[sign];w=func_002ABEC8(c,v.d);t.d=func_002ABF20(w,c);
 hi=(s32)((s64)t.bits>>32);hi=(hi&0x7fffffff)|(sign<<31);
 t.bits=(t.bits&0xffffffffULL)|((u64)(u32)hi<<32);return t.d;
 }else{
 mask=0xfffff>>j;if(((hi&mask)|lo)==0)return x;
 mask>>=1;if(((hi&mask)|lo)!=0){if(j==19)lo=0x40000000;else hi=(hi&~mask)|(0x20000>>j);}
 }
 }else if(j<52){
 j=exp-0x413;mask=0xffffffffU>>j;if(!(lo&mask))return x;
 mask>>=1;if(lo&mask)lo=(lo&~mask)|(0x40000000>>j);
 }else{if(j==0x400)return func_002ABEC8(x,x);return x;}
 v.bits=((u64)(u32)hi<<32)|(u32)lo;
 c=D_0048BD08[sign];w=func_002ABEC8(c,v.d);return func_002ABF20(w,c);
}
