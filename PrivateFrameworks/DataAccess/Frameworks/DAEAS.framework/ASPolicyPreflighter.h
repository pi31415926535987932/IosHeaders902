/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ASPolicyPreflighterDelegate;
@class ASAccount, ASPolicy, NSString, ASTaskManager;

@interface ASPolicyPreflighter : NSObject {

	char _invalidated;
	ASAccount* _account;
	id<ASPolicyPreflighterDelegate> _delegate;
	id _contextInfo;
	ASPolicy* _policy;
	ASPolicy* _acknowledgedPolicy;
	NSString* _originalKey;
	ASTaskManager* _taskManager;

}

@property (assign,nonatomic,__weak) ASAccount * account;                                   //@synthesize account=_account - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyPreflighterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id contextInfo;                                        //@synthesize contextInfo=_contextInfo - In the implementation block
@property (nonatomic,retain) ASPolicy * policy;                                            //@synthesize policy=_policy - In the implementation block
@property (nonatomic,retain) ASPolicy * acknowledgedPolicy;                                //@synthesize acknowledgedPolicy=_acknowledgedPolicy - In the implementation block
@property (nonatomic,copy) NSString * originalKey;                                         //@synthesize originalKey=_originalKey - In the implementation block
@property (nonatomic,retain) ASTaskManager * taskManager;                                  //@synthesize taskManager=_taskManager - In the implementation block
@property (assign,nonatomic) char invalidated;                                             //@synthesize invalidated=_invalidated - In the implementation block
-(void)setPolicy:(ASPolicy *)arg1 ;
-(ASPolicy *)policy;
-(void)setDelegate:(id<ASPolicyPreflighterDelegate>)arg1 ;
-(void)dealloc;
-(id<ASPolicyPreflighterDelegate>)delegate;
-(void)invalidate;
-(id)contextInfo;
-(void)setContextInfo:(id)arg1 ;
-(ASTaskManager *)taskManager;
-(void)setTaskManager:(ASTaskManager *)arg1 ;
-(void)setOriginalKey:(NSString *)arg1 ;
-(ASPolicy *)acknowledgedPolicy;
-(NSString *)originalKey;
-(void)setAcknowledgedPolicy:(ASPolicy *)arg1 ;
-(id)initWithAccount:(id)arg1 policyKey:(id)arg2 ;
-(id)_originalKey;
-(void)provisionTask:(id)arg1 failedWithError:(id)arg2 ;
-(void)provisionTask:(id)arg1 wipeRequested:(char)arg2 policies:(id)arg3 status:(int)arg4 ;
-(void)startPreflight;
-(void)acknowledgePolicyCompliance;
-(void)acknowledgeIntentionToRemoteWipe;
-(void)cancelPendingPreflightRequest;
-(char)invalidated;
-(void)setInvalidated:(char)arg1 ;
-(void)setAccount:(ASAccount *)arg1 ;
-(ASAccount *)account;
@end

