#ifndef _VECTOR_H_
#define _VECTOR_H_

class Vector {
private:
	float x, y, z;

public:
	//CONSTRUCTORS

	Vector() : x(0), y(0), z(0) {}
	Vector(float x, float y, float z) : x(x), y(y), z(z) {}
	//~Vector();

	float getX() const { return x; }
	float getY() const { return y; }
	float getZ() const { return z; }

	void setX(float x) { this->x = x; }
	void setY(float y) { this->y = y; }
	void setZ(float z) { this->z = z; }

	//OPERATORS

	Vector operator + (const Vector vector) {
		//x.operator = (x) is like: Vector operator
		Vector Aux;

		Aux.x = this->x + vector.x;
		Aux.y = this->y + vector.y;
		Aux.z = this->z + vector.z;

		return Aux;
	}

	Vector operator - (const Vector vector) {
		Vector Aux;

		Aux.x = this->x - vector.x;
		Aux.y = this->y - vector.y;
		Aux.z = this->z - vector.z;

		return Aux;
	}

	Vector operator += (Vector vector1) {

		this->x += vector1.x;
		this->y += vector1.y;
		this->z += vector1.z;
		
		return vector1;
	}

	Vector operator -= (Vector vector1) {

		this->x -= vector1.x;
		this->y -= vector1.y;
		this->z -= vector1.z;

		return vector1;
	}


	Vector operator = (Vector vector1) {

		this->x = vector1.x;
		this->y = vector1.y;
		this->z = vector1.z;

		return vector1;
	}

	bool operator == (Vector vector1) {

		if (this->x == vector1.x && this->y == vector1.y && this->z == vector1.z) { return true; }
		else { return false; }

	}
	
	//METHODS


	



};





#endif // !_VECTOR_H_
