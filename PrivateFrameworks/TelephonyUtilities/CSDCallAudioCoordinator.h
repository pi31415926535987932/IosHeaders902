/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CSDCallAudioCoordinator : NSObject {

	NSMutableArray* _pendingRequests;

}

@property (nonatomic,retain) NSMutableArray * pendingRequests;              //@synthesize pendingRequests=_pendingRequests - In the implementation block
-(void)_processRequests;
-(int)_audioTypeForCall:(id)arg1 ;
-(void)_requestAudioForAudioType:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAudioForCall:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAudioForDialRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleIsSendingAudioChanged:(id)arg1 ;
-(int)_audioTypeForDialRequest:(id)arg1 ;
-(id)init;
-(NSMutableArray *)pendingRequests;
-(void)setPendingRequests:(NSMutableArray *)arg1 ;
-(void)handleCallStatusChanged:(id)arg1 ;
@end

