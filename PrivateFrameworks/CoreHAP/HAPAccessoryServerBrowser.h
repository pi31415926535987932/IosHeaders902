/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, HAPKeyStore;
@class NSObject;

@interface HAPAccessoryServerBrowser : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	int _linkType;
	id<HAPKeyStore> _keyStore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) int linkType;                                      //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,retain) id<HAPKeyStore> keyStore;                            //@synthesize keyStore=_keyStore - In the implementation block
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithQueue:(id)arg1 ;
-(id<HAPKeyStore>)keyStore;
-(void)setKeyStore:(id<HAPKeyStore>)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)startDiscoveringAccessoryServers;
-(void)stopDiscoveringAccessoryServers;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(int)linkType;
@end

