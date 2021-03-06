/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OITSUProgressContext, TCProgressStage, NSDate, NSMutableArray;

@interface TCProgressContext : NSObject {

	OITSUProgressContext* m_parentProgressContext;
	TCProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	NSMutableArray* m_stackOfBranches;

}
+(void)setProgress:(double)arg1 ;
+(void)setMessage:(id)arg1 ;
+(void)removeProgressObserver:(id)arg1 ;
+(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
+(void)advanceProgress:(double)arg1 ;
+(double)currentPosition;
+(void)endStage;
+(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
+(void)removeContextForCurrentThread;
+(id)contextForCurrentThread;
+(id)stageForCurrentThread;
+(void)createContextForCurrentThreadWithParentContext:(id)arg1 ;
+(id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 ;
+(void)endBranch:(id)arg1 ;
+(void)pushBranch:(id)arg1 ;
+(void)popBranch;
+(void)advanceProgressInContext:(id)arg1 progress:(double)arg2 ;
+(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 ;
-(void)dealloc;
-(id)currentStage;
-(id)initWithParentContext:(id)arg1 ;
-(id)rootStage;
-(void)reportProgress:(double)arg1 ;
@end

