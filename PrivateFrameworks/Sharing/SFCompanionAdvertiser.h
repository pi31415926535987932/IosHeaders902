/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SFCompanionAdvertiserDelegate;
@class NSString, NSData;

@interface SFCompanionAdvertiser : NSObject {

	char _supportsStreams;
	id<SFCompanionAdvertiserDelegate> _delegate;
	NSString* _serviceType;

}

@property (assign) id<SFCompanionAdvertiserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char supportsStreams;                                    //@synthesize supportsStreams=_supportsStreams - In the implementation block
@property (copy,readonly) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) NSData * serviceEndpointData; 
-(id)initWithServiceType:(id)arg1 ;
-(void)setDelegate:(id<SFCompanionAdvertiserDelegate>)arg1 ;
-(void)dealloc;
-(id<SFCompanionAdvertiserDelegate>)delegate;
-(void)stop;
-(void)start;
-(NSString *)serviceType;
-(char)supportsStreams;
-(void)setSupportsStreams:(char)arg1 ;
-(NSData *)serviceEndpointData;
-(void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

