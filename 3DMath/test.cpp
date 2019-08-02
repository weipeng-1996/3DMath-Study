#include"test.h"
using namespace MathTest;

namespace MathTest{

void test1( )
{
	// 求交

	Vector2 a( 0.0f, 0.0f );
	Vector2 b( 1.0f, 0.0f );
	AABB< Vector2 > aabb( Vector2( -5.0f, -5.0f ), Vector2( 10.0f, 5.0f ) );
	
	Vector2 c;
	Vector2 d;
	aabb.intersect( a, b, &c, &d );
	cout<<c<<d;

	// TODO : 其他情况测试：线段在aabb内部（返回true），在外部（返回false），一个顶点重合等空间情况，请写出尽可能多的种类

	// TODO : Vector3相交测试
}

//void test2( )
//{
//	// 矩阵乘法
//
//	Matrix mt;
//	mt.translate( Vector3( 0.0f, 0.0f, 10.0f ) );
//	Matrix mr;
//	mr.rotate( Vector3( 0.0f, 0.0f, 1.0f ), 3.1415926f * 0.5f ); 
//
//	// 定义空间中一个点
//	Vector4 v;
//
//	// TODO : 测试矩阵的所有操作
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