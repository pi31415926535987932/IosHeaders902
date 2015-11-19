/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentAnalyzerQueue : NSObject {

	double _firstPingSinceReset;
	double _lastPingSinceReset;
	NSMutableSet* _momentListIdsToProcess;
	double _minimumInterval;
	double _maximumInterval;

}

@property (assign,nonatomic) double minimumInterval;                //@synthesize minimumInterval=_minimumInterval - In the implementation block
@property (assign,nonatomic) double maximumInterval;                //@synthesize maximumInterval=_maximumInterval - In the implementation block
@property (nonatomic,readonly) char hasWork; 
@property (nonatomic,readonly) char shouldProcessWork; 
-(void)dealloc;
-(id)init;
-(void)enqueueMomentListIds:(id)arg1 ;
-(char)hasWork;
-(char)shouldProcessWork;
-(id)dequeueMomentListIdsForProcessing;
-(void)setMinimumInterval:(double)arg1 ;
-(void)setMaximumInterval:(double)arg1 ;
-(double)minimumInterval;
-(double)maximumInterval;
@end

