#include <opencv/highgui.h>
int main()
{
    IplImage * img = cvLoadImage("c:/duffy.jpg");
    cvShowImage("Duffy",img);
    cvWaitKey(0);

}
