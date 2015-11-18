/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 5:00:32 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBSStatusBarStyleOverridesAssertionData, NSString;

@interface SBSStatusBarStyleOverridesAssertion : NSObject {

	SBSStatusBarStyleOverridesAssertionData* _assertionData;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) int statusBarStyleOverrides; 
@property (nonatomic,readonly) int pid; 
@property (getter=isExclusive,nonatomic,readonly) char exclusive; 
@property (nonatomic,readonly) char showsWhenForeground; 
@property (nonatomic,copy) NSString * statusString; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,retain) SBSStatusBarStyleOverridesAssertionData * assertionData;              //@synthesize assertionData=_assertionData - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                                 //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
+(id)assertionWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(char)arg3 showsWhenForeground:(char)arg4 ;
+(id)backgroundLocationAssertionForPID:(int)arg1 ;
-(void)setStatusString:(NSString *)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(NSString *)uniqueIdentifier;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(char)arg3 showsWhenForeground:(char)arg4 ;
-(void)acquireWithHandler:(/*^block*/id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(NSString *)statusString;
-(char)isExclusive;
-(id)initWithStatusBarStyleOverridesAssertionData:(id)arg1 ;
-(int)statusBarStyleOverrides;
-(char)showsWhenForeground;
-(void)acquireWithHandler:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(SBSStatusBarStyleOverridesAssertionData *)assertionData;
-(void)setAssertionData:(SBSStatusBarStyleOverridesAssertionData *)arg1 ;
-(int)pid;
@end
