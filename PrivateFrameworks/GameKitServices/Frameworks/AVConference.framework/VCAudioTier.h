/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VCAudioPayload;

@interface VCAudioTier : NSObject {

	unsigned long networkBitrate;
	unsigned long audioBitrate;
	unsigned long packetsPerBundle;
	VCAudioPayload* payload;

}

@property (readonly) unsigned long networkBitrate; 
@property (readonly) unsigned long audioBitrate; 
@property (readonly) unsigned long packetsPerBundle; 
@property (readonly) VCAudioPayload * payload; 
-(VCAudioPayload *)payload;
-(unsigned long)networkBitrate;
-(unsigned long)audioBitrate;
-(unsigned long)packetsPerBundle;
-(id)initWithNetworkBitrate:(unsigned long)arg1 audioBitrate:(unsigned long)arg2 packetsPerBundle:(unsigned long)arg3 payload:(id)arg4 ;
@end

