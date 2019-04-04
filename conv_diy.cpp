#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

int your_conv( cv::Mat src,
               cv::Mat dst,
               cv::Mat kernel,
               int stride,
               int padding
               )
{
    int src_height = src.rows;
    int src_width = src.cols;

    int kernel_height = kernel.rows;
    int kernel_width = kernel.cols;

    int dst_height;
    int dst_width;

    // src.ptr<unsigned char>(i)[ calculate INDEX ]

    // MAKE YOUR OWN CONVOLUTION PROCESS
	
		
  for(src.rows=0; src.rows<dst->h ; src.rows++)				// 메트 세로
	{for(src.cols=0; src.cols<dst->w ;src.cols++)				// 메트 가로
		{	
		float result = 0.0f;		
		for(kernel.rows=0; kernel.rows<dst->h;kernel.rows++)  		// 필터 세로
			{for(kernel.cols=0; kernel.cols<dst->w; kernel.cols++)  // 필터 가로
				{ int w = src.cols * conv_layer -> stride[0] - conv_layer ->padding[0] + kernel_cols;
				  int h = src.rows * conv_layer -> stride[1] - conv_later ->padding[2] + kernel.rows;
					if(w<0 || w>=frame->w)
					continue;
					if(h<0 || h>=frame->h)
					continue;

					float 


    // if success
    return 0;

    // if fail - in the case of wrong parameters...
    // return -1
}

int main ( int argc, char** argv )
{
    if (argc < 2) {
        std::cout << "no filename given." << std::endl;
        std::cout << "usage: " << argv[0] << " image" << std::endl;
        return -1;
    }

    cv::Mat src, kernel, dst;

    // Load an image
    src = cv::imread( argv[1] );
    if( !src.data )  { return -1; }

    // Make filter
    kernel = (cv::Mat_<float>(3, 3) << -1, -1, -1, -1, 8, -1, -1, -1, -1);


    // Run 2D filter
    //cv::filter2D(src, dst, -1 , kernel, cv::Point( -1, -1 ), 0, cv::BORDER_DEFAULT );

    // ---------------------------
    your_conv(src,dst,kernel,1,0);
    // ---------------------------

    cv::namedWindow( "filter2D Demo", cv::WINDOW_AUTOSIZE );
    cv::imshow( "filter2D Demo", dst );

    cv::waitKey(0);
    return 0;
}
