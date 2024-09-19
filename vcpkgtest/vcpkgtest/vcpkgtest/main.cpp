#include <iostream>
#include <glm/glm.hpp>
using namespace std;

int main(int arrgc, char* agrv[]) {

	glm::vec3 a(1, 2, 3);
	glm::vec3 b(4, 5, 6);

	auto sum = a + b;

	cout << "Sum is (" << sum.x << ',' << sum.y << ',' << sum.z << ')' << endl;
	return EXIT_SUCCESS; 
}