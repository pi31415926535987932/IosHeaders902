/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class AnalyticsWorkspace, NSMutableDictionary, NSObject, NSDate;

@interface AnalyticsEngineCore : NSObject {

	AnalyticsWorkspace* workspace;
	NSMutableDictionary* spaces;
	NSObject*<OS_dispatch_source> mem_alerts;
	unsigned pending_mem_alerts;
	NSDate* lastWorkspaceReset;
	char _isHelper;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) char isHelper;                                     //@synthesize isHelper=_isHelper - In the implementation block
+(id)queue;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(void)shutdown;
-(void)_saveAndUnloadAllState;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)setOption:(id)arg1 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 connection:(id)arg4 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 connection:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)unsubscribeToNOIs:(id)arg1 connection:(id)arg2 ;
-(void)clientEvent:(id)arg1 isAddEvent:(char)arg2 ;
-(void)performQueryOnEntityCore:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)extractQueryStringFrom:(id)arg1 isGeneric:(BOOL*)arg2 ;
-(char)isHelper;
-(void)setIsHelper:(char)arg1 ;
@end
