/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMTimelapseJPEGReader : NSObject
+(id)_decodeOptionsWithMaxPixelSize:(int)arg1 applyTransform:(char)arg2 useBGRA:(char)arg3 ;
+(char)_hasExifRotation:(id)arg1 ;
+(CVBufferRef)createPixelBufferFromData:(id)arg1 applyTransform:(char)arg2 maxPixelSize:(int)arg3 useBGRA:(char)arg4 cleanApertureSize:(CGSize)arg5 ;
+(id)newDataFromFilePath:(id)arg1 ;
+(CVBufferRef)createPixelBufferFromData:(id)arg1 applyTransform:(char)arg2 maxPixelSize:(int)arg3 useBGRA:(char)arg4 ;
+(CGImageRef)createCGImageFromData:(id)arg1 applyTransform:(char)arg2 maxPixelSize:(int)arg3 useBGRA:(char)arg4 ;
@end

