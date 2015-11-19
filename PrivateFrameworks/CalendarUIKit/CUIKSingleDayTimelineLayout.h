/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils;
#import <CalendarUIKit/CalendarUIKit-Structs.h>
@class NSArray, NSMutableArray, NSDate, NSCalendar;

@interface CUIKSingleDayTimelineLayout : NSObject {

	NSArray* _occurrences;
	unsigned _currentOccurrenceIndex;
	id<CUIKSingleDayTimelineViewItem> _currentOccurrence;
	NSMutableArray* _partitions;
	NSMutableArray* _occurrenceBuckets;
	NSMutableArray* _collidingOccurrences;
	NSDate* _startOfDay;
	NSDate* _endOfDay;
	double _startOfDayAbsoluteTime;
	double _endOfDayAbsoluteTime;
	CGRect _frame;
	NSCalendar* _calendar;
	id<CUIKSingleDayTimelineGeometryDelegate> _geometryDelegate;
	id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;

}
-(id)initWithOccurrences:(id)arg1 startOfDay:(id)arg2 endOfDay:(id)arg3 geometryDelegate:(id)arg4 screenUtilsDelegate:(id)arg5 calendar:(id)arg6 ;
-(void)applyLayoutToOccurrences;
-(char)_inputIsInvalid;
-(void)_initializeFirstGridStripe;
-(void)_calculateVerticalFrameAspectsForOccurrence:(id)arg1 ;
-(void)_generateNewPartitions;
-(void)_mergePartitions;
-(void)_findCollidingOccurrences;
-(void)_putCollidingOccurrencesIntoBuckets;
-(void)_reclaimSpaceFromStackedOccurrences;
-(void)_stampOccurrenceFrames;
-(void)_capVisibleTextForBucket:(id)arg1 ;
-(CGRect)_rectForStartSeconds:(int)arg1 endSeconds:(int)arg2 ;
-(double)_effectiveEndTimeForOccurrence:(id)arg1 ;
-(float)_endOfCollisionZoneForY:(float)arg1 occurrence:(id)arg2 ;
-(double)_adjustedStartTimeForOccurrence:(id)arg1 ;
-(void)_popOccurrencesInPartition:(id)arg1 endingBeforeTime:(double)arg2 ;
-(float)_combinedWidthOfPartitions;
-(double)_adjustedEndTimeForOccurrence:(id)arg1 ;
-(float)_topOfOccurrence:(id)arg1 ;
@end

