#ifndef _VECTOR3_H_
#define _VECTOR3_H_

class vec3 {
private:
	//VECTOR VALUES
	float x, y, z;

public:
	//CONSTRUCTORS

	vec3() : x(0), y(0), z(0) {}
	vec3(const float x, const float y, const float z) : x(x), y(y), z(z) {}
	//~Vector();

	float getX() const { return x; }
	float getY() const { return y; }
	float getZ() const { return z; }

	void const setX(float x) { this->x = x; }
	void const setY(float y) { this->y = y; }
	void const setZ(float z) { this->z = z; }

	//OPERATORS

	vec3 const operator + (const vec3 vector) {
		vec3 Aux;

		Aux.x = this->x + vector.x;
		Aux.y = this->y + vector.y;
		Aux.z = this->z + vector.z;

		return Aux;
	}

	vec3 const operator - (const vec3 vector) {
		vec3 Aux;

		Aux.x = this->x - vector.x;
		Aux.y = this->y - vector.y;
		Aux.z = this->z - vector.z;

		return Aux;
	}

	vec3 const operator += (vec3 vector1) {

		this->x += vector1.x;
		this->y += vector1.y;
		this->z += vector1.z;
		
		return vector1;
	}

	vec3 const operator -= (vec3 vector1) {

		this->x -= vector1.x;
		this->y -= vector1.y;
		this->z -= vector1.z;

		return vector1;
	}


	vec3 const operator = (vec3 vector1) {

		this->x = vector1.x;
		this->y = vector1.y;
		this->z = vector1.z;

		return vector1;
	}

	bool const operator == (vec3 vector1) {

		if (this->x == vector1.x && this->y == vector1.y && this->z == vector1.z) { return true; }
		else { return false; }

	}
	
	//METHODS

	void normalize() {
		
		float modulo;

		modulo = sqrt(x*x + y*y + z*z);

		x = x / modulo;
		y = y / modulo;
		z = z / modulo;

	}

	vec3 zero(){

		x = y = z = 0;

		return *this;
	}
	
	float distance(vec3 vector1, vec3 vector2) {
				
		return sqrt((vector2.x - vector1.x)*(vector2.x - vector1.x) + (vector2.y - vector1.y)*(vector2.y - vector1.y) + (vector2.z - vector1.z)*(vector2.z - vector1.z));
		
	}
	
	//HACER -> vec3.distance.squared()


};





#endif // !_VECTOR_H_
