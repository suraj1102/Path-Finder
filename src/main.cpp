#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

const string assetPath = "/Users/suraj/Documents/Coding/forUni/final/Path-Finder/assets/";

int main(int argc, char** argv )
{
    // Load Image
    const string filename = "10-10.png";
    Mat image;
    image = imread(assetPath + filename);
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    cout << image.size() << endl;

    // Declare Height and Width of Image
    int height = image.size().height;
    int width = image.size().width;

    // startPoint: (x1, y1) , goalPoint: (x2, y2)
    unsigned int x1 = 0;
    unsigned int y1 = 0;
    unsigned int x2 = 4;
    unsigned int y2 = 4;

    
    // Display Image
    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    
    waitKey(0);
    return 0;
}