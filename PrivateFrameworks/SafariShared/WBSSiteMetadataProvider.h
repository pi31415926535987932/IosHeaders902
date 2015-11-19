/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WBSSiteMetadataProviderDelegate;
@class NSMutableDictionary;

@interface WBSSiteMetadataProvider : NSObject {

	NSMutableDictionary* _keyStringsToRequests;
	id<WBSSiteMetadataProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(id)init;
-(id<WBSSiteMetadataProviderDelegate>)delegate;
-(char)requiresSubrequestsToFulfillRequest:(id)arg1 ;
-(id)registerRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)responseForRequest:(id)arg1 responseType:(int*)arg2 ;
-(void)cancelSubrequestsWithToken:(id)arg1 ;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(char)canHandleRequest:(id)arg1 ;
-(id)operationForRequest:(id)arg1 withProcessPool:(id)arg2 ;
-(id)keyStringForRequest:(id)arg1 ;
-(void)_enumerateRequestsForKeyString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)stopWatchingUpdatesForRequests:(id)arg1 ;
-(void)registerRequest:(id)arg1 ;
-(void)notifyDidReceiveUpdateForKeyString:(id)arg1 ;
-(void)notifyDidFinishRequestWithoutReceivingNewDataForKeyString:(id)arg1 ;
@end

