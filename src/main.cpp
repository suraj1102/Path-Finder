#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char** argv )
{
    Mat image;
    image = imread("./assets/10-10.png");
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    cout << image.size() << endl;

    int height = image.size().height;
    int width = image.size().width;

    unsigned int x1 = 0;
    unsigned int y1 = 0;
    unsigned int x2 = 4;
    unsigned int y2 = 4;

    

    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    
    waitKey(0);
    return 0;
}