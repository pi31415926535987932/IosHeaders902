/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADEmbeddedMediaFile.h>

@interface OADWavAudioFile : OADEmbeddedMediaFile {

	float mDuration;
	char mHasDuration;

}

@property (assign,nonatomic) float duration; 
@property (assign,nonatomic) char hasDuration; 
-(float)duration;
-(void)setDuration:(float)arg1 ;
-(char)isAudioOnly;
-(void)setIsAudioOnly:(char)arg1 ;
-(char)hasDuration;
-(void)setHasDuration:(char)arg1 ;
@end

