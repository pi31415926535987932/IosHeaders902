/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HLPReachabilityManagerDelegate;
@class HLPReachability, NSString;

@interface HLPReachabilityManager : NSObject {

	char _notifying;
	char _hostActive;
	char _reachabilityInitialized;
	char _connected;
	char _internetActive;
	id<HLPReachabilityManagerDelegate> _delegate;
	HLPReachability* _internetReachability;
	HLPReachability* _hostReachability;
	NSString* _hostName;

}

@property (assign,nonatomic) char reachabilityInitialized;                                    //@synthesize reachabilityInitialized=_reachabilityInitialized - In the implementation block
@property (assign,nonatomic) char connected;                                                  //@synthesize connected=_connected - In the implementation block
@property (assign,nonatomic) char internetActive;                                             //@synthesize internetActive=_internetActive - In the implementation block
@property (assign,nonatomic,__weak) id<HLPReachabilityManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HLPReachability * internetReachability;                          //@synthesize internetReachability=_internetReachability - In the implementation block
@property (nonatomic,retain) HLPReachability * hostReachability;                              //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                             //@synthesize hostName=_hostName - In the implementation block
-(NSString *)hostName;
-(void)setDelegate:(id<HLPReachabilityManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<HLPReachabilityManagerDelegate>)delegate;
-(void)setHostName:(NSString *)arg1 ;
-(void)reachabilityChanged:(id)arg1 ;
-(char)isNetworkError:(id)arg1 ;
-(void)setReachabilityInitialized:(char)arg1 ;
-(char)reachabilityInitialized;
-(char)internetActive;
-(void)setInternetActive:(char)arg1 ;
-(HLPReachability *)internetReachability;
-(void)setInternetReachability:(HLPReachability *)arg1 ;
-(HLPReachability *)hostReachability;
-(void)setHostReachability:(HLPReachability *)arg1 ;
-(void)startNotifier;
-(void)stopNotifier;
-(void)setConnected:(char)arg1 ;
-(char)connected;
@end

