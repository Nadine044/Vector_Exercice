#include <iostream>
#include "Vector3.h"

using namespace std;

int main() {

	vec3 Vector1;
	vec3 Vector2(1, 0, 2);
	vec3 Vector3;
	vec3 Vector4(1, 1, 1);
	vec3 Vector5;
	vec3 Vector6(3, 2, 1);
	vec3 Vector7;
	vec3 Vector8(8, 8, 8);
	vec3 Vector9(10, 5, 2);

	cout << Vector1.getX() << ", " << Vector1.getY() << ", " << Vector1.getZ() << endl;
	cout << Vector2.getX() << ", " << Vector2.getY() << ", " << Vector2.getZ() << endl;

	Vector3.setX(4);
	Vector3.setY(7);
	Vector3.setZ(10);

	cout << Vector3.getX() << ", " << Vector3.getY() << ", " << Vector3.getZ() << endl;

	Vector5 = Vector3 + Vector4;

	cout << Vector5.getX() << ", " << Vector5.getY() << ", " << Vector5.getZ() << endl;

	Vector7 = Vector6 - Vector4;

	cout << Vector7.getX() << ", " << Vector7.getY() << ", " << Vector7.getZ() << endl;

	Vector2 = Vector6;

	cout << Vector2.getX() << ", " << Vector2.getY() << ", " << Vector2.getZ() << endl;

	Vector8.zero();

	cout << Vector8.getX() << ", " << Vector8.getY() << ", " << Vector8.getZ() << endl;

	Vector9.distance(Vector3, Vector4);

	cout << Vector9.distance() << endl;

	system("pause");
	return 0;

}