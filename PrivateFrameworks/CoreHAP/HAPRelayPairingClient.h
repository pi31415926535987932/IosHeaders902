/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HAPRelayPairingClientDelegate;
@class NSURL;

@interface HAPRelayPairingClient : NSObject {

	id<HAPRelayPairingClientDelegate> _delegate;
	NSURL* _accessoryBagURL;

}

@property (__weak) id<HAPRelayPairingClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * accessoryBagURL;                     //@synthesize accessoryBagURL=_accessoryBagURL - In the implementation block
-(void)setDelegate:(id<HAPRelayPairingClientDelegate>)arg1 ;
-(id<HAPRelayPairingClientDelegate>)delegate;
-(void)close;
-(void)open;
-(NSURL *)accessoryBagURL;
-(void)requestControllerIdentifier;
-(void)requestAccessTokenForAccessoryIdentifier:(id)arg1 pairingToken:(id)arg2 ;
@end

