#include<iostream>
using namespace std;

namespace MathTest {

// 定义2维向量
class Vector2
{
public:
	float x, y;
	Vector2( ) { }
	Vector2( float x_, float y_ )
		: x( x_ ), y( y_ ) { }
};

// 定义3维向量
class Vector3
{
public:
	float x, y, z;
	Vector3( ) { }
	Vector3( float x_, float y_, float z_ )
		: x( x_ ), y( y_ ), z( z_ ) { }
};

// 输出2维向量
ostream& operator << ( ostream &out, const Vector2 &v )
{
	cout<<"Vector2:"<<(&v)<<"\tx:"<<v.x<<"\ty:"<<v.y<<endl;
	return out;
}

// 输出3维向量
ostream& operator << ( ostream &out, const Vector3 &v )
{
	cout<<"Vector3:"<<(&v)<<"x:"<<v.x<<"\ty:"<<v.y<<"\tz:"<<v.z<<endl;
	return out;
}

// 定义轴对齐包围盒AABB模板类
template< class T >
class AABB
{
public:
	T min;
	T max;

	AABB( ) { }
	AABB( T a, T b )
		: min( a ), max( b ) { }
	
	bool intersect( const T& a, const T& b, T* c = nullptr, T* d = nullptr ) const;

};

// TODO : 定义2维相交测试
// 返回值表示是否有交集，ab在内部返回true
// c,d不为空时，表示用户想要获取交点，其中：c是更靠近a的交点，d是更靠近b的交点
bool AABB< Vector2 >::intersect( const Vector2& a, const Vector2& b, Vector2* c, Vector2* d ) const
{
	return false;
}

// TODO : 定义3维相交测试，细节同上
bool AABB< Vector3 >::intersect( const Vector3& a, const Vector3& b, Vector3* c, Vector3* d ) const
{
	return false;
}

//// TODO : 定义4维向量（3维向量的齐次向量，方便和矩阵相乘）
//class Vector4
//{
//};
//
//// TODO : 定义4x4矩阵、构造、矩阵乘法、矩阵乘向量、空间操作
//class Matrix
//{
//public:
//	float m[16];
//
//	Matrix operator * ( const Matrix& mat );
//	Vector4 operator * ( const Vector4& vec );
//
//	// 清除所有信息，从原点平移到v点
//	void translate( const Vector3& v );
//	// 清除所有信息，绕方向d旋转弧度r
//	void rotate( const Vector3& d, float r );
//	// 清除所有信息，xyz轴缩放s
//	void scale(  const Vector3& s );
//	
//	// 以上为基础空间操作矩阵，仅表示一种操作，符合操作使用乘法组合
//	// 如：先旋转再平移：Mr旋转矩阵，Mt平移矩阵，M为复合矩阵。
//	// Mr.rotate(xxx); Mt.translate(xxx); M = Mr * Mt;
//};

void test1( );
void test2( );

}