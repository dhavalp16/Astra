#include <iostream>

int main() {
	//Image height & width
	int image_height = 256;
	int image_width = 256;

	//PPM Header
	std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

	for (int i = 0; i < image_height; i++) {
		for (int j = 0; j < image_width; j++) {

			auto r = double(j) / (image_width - 1);
			auto g = double(i) / (image_height - 1);
			auto b = 1 - r;

			int ir = (255.999 * r);
			int ig = (255.999 * g);
			int ib = (255.999 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';

		}
	}
}