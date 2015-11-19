/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVOfflineVideoStabilizerDataProvider <NSObject>
@required
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(int)arg1 outputSampleTime:(SCD_Struct_CM12*)arg2 stabilizer:(id)arg3;
-(id)copySourceStabilizationMetadataForFrameNumber:(int)arg1 outputSampleTime:(SCD_Struct_CM12*)arg2 stabilizer:(id)arg3;

@end

