/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/XPCServices/com.apple.siri.acousticsignature.xpc/com.apple.siri.acousticsignature
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <com.apple.siri.acousticsignature/com.apple.siri.acousticsignature-Structs.h>
@interface ASXExtractor : NSObject {

	int _sampleRate;
	SHAZAM_SIGX* _sigx;

}

@property (assign,nonatomic) int sampleRate;              //@synthesize sampleRate=_sampleRate - In the implementation block
-(SHAZAM_SIGX*)_sigx;
-(void)appendAcousticData:(id)arg1 sampleCount:(int)arg2 ;
-(id)currentSignature;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)setSampleRate:(int)arg1 ;
-(int)sampleRate;
@end

