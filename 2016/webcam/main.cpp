#include "opencv2/opencv.hpp"
#include "../opencv_lib/2702_proc.h"

using namespace cv;
int main(int argc, char** argv)
{
    VideoCapture cap;
    // open the default camera, use something different from 0 otherwise;
    // Check VideoCapture documentation.
    if(!cap.open(0))
        return -1;
    for(;;)
    {
        Mat frame;
        cap >> frame;
        if( frame.empty() ) break; // end of video stream
        process (&frame);
        waitKey(30);

    }
    // the camera will be closed automatically upon exit
    // cap.close();
    return 0;
}