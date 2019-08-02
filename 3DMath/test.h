#include<iostream>
using namespace std;

namespace MathTest {

// ����2ά����
class Vector2
{
public:
	float x, y;
	Vector2( ) { }
	Vector2( float x_, float y_ )
		: x( x_ ), y( y_ ) { }
};

// ����3ά����
class Vector3
{
public:
	float x, y, z;
	Vector3( ) { }
	Vector3( float x_, float y_, float z_ )
		: x( x_ ), y( y_ ), z( z_ ) { }
};

// ���2ά����
ostream& operator << ( ostream &out, const Vector2 &v )
{
	cout<<"Vector2:"<<(&v)<<"\tx:"<<v.x<<"\ty:"<<v.y<<endl;
	return out;
}

// ���3ά����
ostream& operator << ( ostream &out, const Vector3 &v )
{
	cout<<"Vector3:"<<(&v)<<"x:"<<v.x<<"\ty:"<<v.y<<"\tz:"<<v.z<<endl;
	return out;
}

// ����������Χ��AABBģ����
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

// TODO : ����2ά�ཻ����
// ����ֵ��ʾ�Ƿ��н�����ab���ڲ�����true
// c,d��Ϊ��ʱ����ʾ�û���Ҫ��ȡ���㣬���У�c�Ǹ�����a�Ľ��㣬d�Ǹ�����b�Ľ���
bool AABB< Vector2 >::intersect( const Vector2& a, const Vector2& b, Vector2* c, Vector2* d ) const
{
	return false;
}

// TODO : ����3ά�ཻ���ԣ�ϸ��ͬ��
bool AABB< Vector3 >::intersect( const Vector3& a, const Vector3& b, Vector3* c, Vector3* d ) const
{
	return false;
}

//// TODO : ����4ά������3ά�������������������;�����ˣ�
//class Vector4
//{
//};
//
//// TODO : ����4x4���󡢹��졢����˷���������������ռ����
//class Matrix
//{
//public:
//	float m[16];
//
//	Matrix operator * ( const Matrix& mat );
//	Vector4 operator * ( const Vector4& vec );
//
//	// ���������Ϣ����ԭ��ƽ�Ƶ�v��
//	void translate( const Vector3& v );
//	// ���������Ϣ���Ʒ���d��ת����r
//	void rotate( const Vector3& d, float r );
//	// ���������Ϣ��xyz������s
//	void scale(  const Vector3& s );
//	
//	// ����Ϊ�����ռ�������󣬽���ʾһ�ֲ��������ϲ���ʹ�ó˷����
//	// �磺����ת��ƽ�ƣ�Mr��ת����Mtƽ�ƾ���MΪ���Ͼ���
//	// Mr.rotate(xxx); Mt.translate(xxx); M = Mr * Mt;
//};

void test1( );
void test2( );

}