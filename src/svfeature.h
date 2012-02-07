/**
 * @file   svfeature.h
 * @author Liangfu Chen <chenclf@gmail.com>
 * @date   Tue Feb  7 17:14:59 2012
 * 
 * @brief  
 * 
 * 
 */

#ifndef __SV_FEATURE_H__
#define __SV_FEATURE_H__

#include "cv.h"
#include "highgui.h"

// void extractSURFFeature();
void extractFeatureSURF(CvArr * pImage, bool saveImage = true);
void extractFeatureKLT(const CvArr * imgA, const CvArr * imgB);
	
#endif // __SV_FEATURE_H__