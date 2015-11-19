/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AVPingTest : NSObject {

	NSString* ipAsString;
	char usingWifi;
	NSString* interfaceNameToTest;
	float min;
	float max;
	float avg;
	float stddev;
	float packetLossRate;
	int lastReturnedError;

}

@property (nonatomic,readonly) char usingWifi; 
@property (nonatomic,readonly) float min; 
@property (nonatomic,readonly) float max; 
@property (nonatomic,readonly) float avg; 
@property (nonatomic,readonly) float stddev; 
@property (nonatomic,readonly) float packetLossRate; 
-(float)max;
-(float)min;
-(void)dealloc;
-(id)description;
-(int)start;
-(float)packetLossRate;
-(void)calculateInterfaceName;
-(int)parseResults:(char*)arg1 secondLastLine:(char*)arg2 ;
-(id)initWithIPAsString:(id)arg1 usingWifi:(char)arg2 ;
-(char)usingWifi;
-(float)avg;
-(float)stddev;
-(char)parsePingLineForBadInterface:(char*)arg1 ;
-(char)parsePingLineForBadCommand:(char*)arg1 ;
-(char)parsePingLineForPLR:(char*)arg1 ;
-(char)parsePingLineForLatencyStats:(char*)arg1 ;
@end

