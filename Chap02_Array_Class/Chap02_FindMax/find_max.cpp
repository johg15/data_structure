#include <cstdio>

// 1차원 배열에서 최대값을 찾는 함수
int findMaxValue(int a[], int len)
{
	int maxVal = a[0];
	for (int i = 1; i < len; i++) {
		if (maxVal < a[i])
			maxVal = a[i];
	}
	return maxVal;
}

// 2차원 영상(배열)에서 최대 밝기 값을 찾는 함수
int findMaxPixel(int a[][5], int h, int w)
{
	int maxVal = 0;
	// h는 영상의 height, w는 영상의 width
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (maxVal < a[i][j])
				maxVal = a[i][j];
		}
	}
	return maxVal;
}

int main()
{
	int arr[10] = { 3, 24, 82, 12, 34, 7, 53, 17, 26, 51 };

	int img[4][5] = { {3, 24, 82, 12, 22},
		{23, 124, 2, 2, 1},
		{29, 12, 12, 12, 1},
		{29, 12, 12, 12, 1}	};

	int maxVal = findMaxValue(arr, 10);
	printf("배열의 최대 값=%d\n", maxVal);

	int maxPixel = findMaxPixel(img, 4, 5);
	printf("영상의 최대 밝기=%d\n", maxPixel);

	return 0;

}