/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:06 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@interface FCRImageConversionUtils : NSObject
+(char*)convertCGImageToBufferUsingDataProvider:(CGImageRef)arg1 usingGCD:(char)arg2 dispatchQueue:(id)arg3 ;
+(char*)convertCGImageToBufferUsingRGBDevice:(CGImageRef)arg1 usingGCD:(char)arg2 dispatchQueue:(id)arg3 cacheContext:(char)arg4 ;
+(char*)convertCGImageToBufferUsingGrayDevice:(CGImageRef)arg1 ;
+(char*)convertCGImageToGrayscale:(CGImageRef)arg1 usingGCD:(char)arg2 cacheContext:(char)arg3 ;
@end

