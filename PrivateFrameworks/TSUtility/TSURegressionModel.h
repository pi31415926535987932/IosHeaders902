/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSURegressionModel : NSObject {

	char mModelValid;
	int mErrorType;

}
-(id)formattedStringWithCoefficient:(double)arg1 ;
-(id)initAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 ;
-(id)initNonAffineWithMappings:(int)arg1 xs:(double*)arg2 ys:(double*)arg3 xDimension:(int)arg4 desiredIntercept:(double)arg5 ;
-(int)regressionType;
-(int)numCoefficients;
-(double)coefficientAtIndex:(int)arg1 ;
-(double)rSquared;
-(double)estimateForX:(double*)arg1 ;
-(id)getEquationStringAndBuildSuperscriptRangesArray;
-(int)errorType;
-(char)isModelValid;
-(int)numSuperscriptRanges;
-(NSRange)superscriptRangeAtIndex:(int)arg1 ;
-(id)equationString;
@end

