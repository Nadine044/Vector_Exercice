#include <iostream>
#include "Vector.h"

using namespace std;

int main() {

	Vector Vector1;
	Vector Vector2(1, 0, 2);
	Vector Vector3;
	Vector Vector4(1, 1, 1);
	Vector Vector5;
	Vector Vector6(3, 2, 1);
	Vector Vector7;

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

	system("pause");
	return 0;

}