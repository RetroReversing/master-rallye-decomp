float func_003F6B20(float x,float y,int iy){
 union{float f;int i;} u;int ix;float z,v,r,result;
 u.f=x;ix=u.i&0x7fffffff;
 if(ix<0x32000000){if((int)x==0)return x;}
 z=x*x;v=z*x;
 r=0.008333334f+z*(-0.0001984127f+z*(0.0000027557314f+z*(-2.505076e-8f+z*1.589691e-10f)));
 if(iy==0){result=x+v*(-0.16666667f+z*r);}else{result=x-((z*(0.5f*y-v*r)-y)-v*(-0.16666667f));}return result;
}
