#include<stdio.h>
int main()
{
	float h,r,l,s,sq,vq,v,vz;
	float pi=3.141526;
	printf("������Բ�İ뾶r,Բ�ĸ�h:");
	scant("%f,%f",&r,&h);
	l=2*pi*r;
	s=r*r*pi;
	sq=4*pi*r*r;
	vq=3.0/4.0*pi*r*r*r;
	vz=pi*r*r*h;
	printf("Բ���ܳ�Ϊ��l=%6.2f\n",l);
	printf("Բ�ı����Ϊ��s=%6.2f\n",s);
	printf("Բ��ı����Ϊ��sq=%6.2f\n",sq);
	printf("Բ������Ϊ��v=%6.2f\n",v);
	printf("Բ�����Ϊ��vz=%6.2f\n",vz);
	
	return 0;
}
