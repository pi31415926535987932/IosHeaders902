/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioPlayEventCollection;

@interface RadioPlayEventsRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	RadioPlayEventCollection* _playEventCollection;

}

@property (nonatomic,copy,readonly) RadioPlayEventCollection * playEventCollection;              //@synthesize playEventCollection=_playEventCollection - In the implementation block
-(id)init;
-(id)deviceName;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDeviceName:(id)arg1 ;
-(RadioPlayEventCollection *)playEventCollection;
-(id)initWithStationHash:(id)arg1 stationID:(long long)arg2 playEvents:(id)arg3 ;
-(id)initWithStation:(id)arg1 playEvents:(id)arg2 ;
-(id)initWithPlayEventCollection:(id)arg1 ;
@end
