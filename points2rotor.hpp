#pragma once

#include "pch.h"
#include <complex>
#include <opencv2/opencv.hpp>
#include <opencv2/core/types.hpp>


auto points2rotor(const cv::Point2i p1, const cv::Point2i p2)
{
	// Convert 2 cv::Point integer objects (x,y), (x,y) to the complex delta between them
    // MISRA C++ 2008 

	const std::complex<float> dz = {(float)p2.x - (float)p1.x,  // real component
                                    (float)p2.y - (float)p1.y};  // imaginary component
                                    
	return dz;  // 'rotor'
}