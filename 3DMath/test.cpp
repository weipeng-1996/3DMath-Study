#include"test.h"
using namespace MathTest;

namespace MathTest{

void test1( )
{
	// ��

	Vector2 a( 0.0f, 0.0f );
	Vector2 b( 1.0f, 0.0f );
	AABB< Vector2 > aabb( Vector2( -5.0f, -5.0f ), Vector2( 10.0f, 5.0f ) );
	
	Vector2 c;
	Vector2 d;
	aabb.intersect( a, b, &c, &d );
	cout<<c<<d;

	// TODO : ����������ԣ��߶���aabb�ڲ�������true�������ⲿ������false����һ�������غϵȿռ��������д�������ܶ������

	// TODO : Vector3�ཻ����
}

//void test2( )
//{
//	// ����˷�
//
//	Matrix mt;
//	mt.translate( Vector3( 0.0f, 0.0f, 10.0f ) );
//	Matrix mr;
//	mr.rotate( Vector3( 0.0f, 0.0f, 1.0f ), 3.1415926f * 0.5f ); 
//
//	// ����ռ���һ����
//	Vector4 v;
//
//	// TODO : ���Ծ�������в���
//	
//	Vector4 vt = mt * v;
//	Vector4 vr = mr * v;
//
//	// cout<<vt<<vr<<endl;
//}

}

void main()
{
	test1( );
	//test2( );

	int a;
	std::cin>>a;
}