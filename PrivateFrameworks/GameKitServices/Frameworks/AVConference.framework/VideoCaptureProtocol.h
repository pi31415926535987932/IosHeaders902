/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VideoCaptureProtocol
@optional
-(long)getCamera:(unsigned*)arg1;
-(long)getCameraType:(int*)arg1;
-(long)setFrameRatePercentage:(double)arg1 newFramerate:(int*)arg2;
-(long)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(char)arg3;
-(long)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
-(long)setCameraType:(int)arg1;
-(long)setCamera:(unsigned long)arg1;

@required
-(long)stop:(BOOL)arg1;
-(long)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(long)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(long)copyColorInfo:(const _CFDictionary*)arg1;
-(char)isPreviewRunning;
-(long)startPreview;

@end

