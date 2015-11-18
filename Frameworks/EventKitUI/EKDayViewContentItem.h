/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineViewItem.h>

@class NSDate, EKEvent, EKDayOccurrenceView, EKCalendarDate, NSString;

@interface EKDayViewContentItem : NSObject <CUIKSingleDayTimelineViewItem> {

	CGRect _unPinnedViewFrame;
	unsigned _eventIndex;
	EKDayOccurrenceView* _view;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	float _topPinningProximity;
	float _bottomPinningProximity;
	double _travelTime;

}

@property (nonatomic,readonly) unsigned eventIndex;                                             //@synthesize eventIndex=_eventIndex - In the implementation block
@property (nonatomic,retain) EKDayOccurrenceView * view;                                        //@synthesize view=_view - In the implementation block
@property (nonatomic,copy) EKCalendarDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) EKCalendarDate * startDateIncludingTravelTime; 
@property (nonatomic,copy) EKCalendarDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) double travelTime;                                                 //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) float topPinningProximity;                                         //@synthesize topPinningProximity=_topPinningProximity - In the implementation block
@property (assign,nonatomic) float bottomPinningProximity;                                      //@synthesize bottomPinningProximity=_bottomPinningProximity - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) char hideTravelTime; 
@property (nonatomic,readonly) float enoughHeightForOneLine; 
@property (nonatomic,readonly) float viewMaxNaturalTextHeight; 
@property (nonatomic,readonly) EKEvent * event; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) char visibleHeightLocked; 
+(float)barToBarHorizontalDistanceIncludingBarWidth;
-(unsigned)eventIndex;
-(void)setBottomPinningProximity:(float)arg1 ;
-(EKCalendarDate *)startDateIncludingTravelTime;
-(float)enoughHeightForOneLine;
-(float)viewMaxNaturalTextHeight;
-(char)visibleHeightLocked;
-(void)setStagedFrame:(CGRect)arg1 ;
-(CGRect)stagedFrame;
-(void)setTravelTimeHeight:(float)arg1 ;
-(NSDate *)startWithTravelTime;
-(char)hideTravelTime;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1 ;
-(id)initWithEventIndex:(unsigned)arg1 ;
-(float)topPinningProximity;
-(void)setTopPinningProximity:(float)arg1 ;
-(float)bottomPinningProximity;
-(EKCalendarDate *)startDate;
-(EKCalendarDate *)endDate;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(EKDayOccurrenceView *)view;
-(void)setView:(EKDayOccurrenceView *)arg1 ;
-(NSDate *)start;
-(NSDate *)end;
-(EKEvent *)event;
-(char)isPinned;
-(void)setVisibleHeight:(float)arg1 ;
-(double)travelTime;
-(void)setTravelTime:(double)arg1 ;
-(void)setEndDate:(EKCalendarDate *)arg1 ;
-(void)setStartDate:(EKCalendarDate *)arg1 ;
@end

