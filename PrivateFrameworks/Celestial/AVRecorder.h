/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVRecorder : NSObject {

	AVRecorderPrivate* _priv;

}
-(char)takePhoto;
-(id)attributeForKey:(id)arg1 ;
-(char)autoFocusAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isActive;
-(void)stop;
-(char)start;
-(void)deactivate;
-(void)setFilePath:(id)arg1 ;
-(id)filePath;
-(double)recordedDuration;
-(void)implNotification:(id)arg1 ;
-(char)activate:(id*)arg1 ;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3 ;
-(float)micVolume;
-(void)setMicVolume:(float)arg1 ;
-(long long)recordedFileSizeInBytes;
-(unsigned)audioNumDeviceChannels;
-(char)audioCurrentAverageVolumeLevels:(float*)arg1 andPeakVolumeLevels:(float*)arg2 ;
-(char)audioCurrentAverageDecibelLevels:(float*)arg1 andPeakDecibelLevels:(float*)arg2 ;
-(char)isRecording;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
@end

