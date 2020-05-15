#include<opencv.hpp>
using namespace std;
using namespace cv;
//text1
/*int main() {
	Mat src = imread("E:\\Dignal Image\\face.jpg",0);
	unsigned char Lut[256];
	for (int i = 0; i < 256; i++) {
		float inten = (float)i;
		float a = inten / 255;
		float output = pow(a, 0.46);
		if (output > 1) {
			output = 1;
		}
		Lut[i] = output * 255;
		
	}
	int height = src.rows;
	int width = src.cols;
	for (int n = 0; n < height; n++) {
		for (int m = 0; m < width; m++) {

			int index = n * width + m;
			int data = (int)src.data[index];
			src.data[index] = Lut[data];
		}
	}
	imshow("src", src);
	cout << LUT << endl;
	waitKey(0);
}*/

//text2
int main() {
	Mat dst;
	Mat src = imread("E:\\Dignal Image\\face.jpg");
	Mat channels[3];
	split(src, channels);
	for (int n = 0; n < 3; n++) {
		equalizeHist(channels[n], channels[n]);
	}
	merge(channels, 3, dst);
	imshow("Ö±·½Í¼¾ùºâ", dst);
	waitKey(0);
}
//text3
/*int main() {
	Mat src = imread("E:\\Dignal Image\\gtest.jpg", 0);
	unsigned char Lut[256];
	for (int i = 0; i < 256; i++) {
		float inten = (float)i;
		float a = inten / 255;
		float output = pow(a, 0.35);
		if (output > 1) {
			output = 1;
		}
		Lut[i] = output * 255;

	}
	int height = src.rows;
	int width = src.cols;
	for (int n = 0; n < height; n++) {
		for (int m = 0; m < width; m++) {

			int index = n * width + m;
			int data = (int)src.data[index];
			src.data[index] = Lut[data];
		}
	}
	imshow("src", src);
	cout << LUT << endl;
	waitKey(0);
}*/