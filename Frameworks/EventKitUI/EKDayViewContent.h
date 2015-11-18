/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CUIKSingleDayTimelineLayoutScreenUtils.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol EKDayViewContentDelegate;
@class EKDayGridView, UIView, EKEvent, NSMutableArray, EKDayViewContentGeometryDelegate, EKCalendarDate, NSCalendar, UIColor, NSTimeZone, NSString;

@interface EKDayViewContent : UIView <CUIKSingleDayTimelineLayoutScreenUtils, UIGestureRecognizerDelegate> {

	EKDayGridView* _grid;
	UIView* _saturdayDarkeningView;
	UIView* _sundayDarkeningView;
	unsigned _daysToDisplay;
	char* _dayWasLaidOut;
	char _loadingOccurrences;
	char _putSelectionOnTop;
	char _hasCustomOccurrenceMargin;
	char _hasCustomOccurrencePadding;
	EKEvent* _selectedEvent;
	NSMutableArray* _dayStarts;
	NSMutableArray* _itemsByDay;
	NSMutableArray* _itemsByDayByEndDate;
	CGRect _latestVisibleRect;
	float* _visiblePinnedStackHeightAbove;
	float* _visiblePinnedStackHeightBelow;
	EKDayViewContentGeometryDelegate* _geometryDelegate;
	char _offscreenOccurrencePinningEnabled;
	char _allowsOccurrenceSelection;
	char _eventsFillGrid;
	char _usesSmallText;
	char _darkensWeekends;
	char _reduceLayoutProcessingForAnimation;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	NSCalendar* _calendar;
	id<EKDayViewContentDelegate> _delegate;
	float _fixedDayWidth;
	UIColor* _occurrenceTitleColor;
	UIColor* _occurrenceTimeColor;
	UIColor* _occurrenceLocationColor;
	UIColor* _occurrenceTextBackgroundColor;
	int _occurrenceBackgroundStyle;
	EKEvent* _dimmedOccurrence;
	UIEdgeInsets _occurrenceMargin;
	UIEdgeInsets _occurrencePadding;

}

@property (nonatomic,copy) EKCalendarDate * startDate;                                  //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) EKCalendarDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic,__weak) id<EKDayViewContentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char offscreenOccurrencePinningEnabled;                    //@synthesize offscreenOccurrencePinningEnabled=_offscreenOccurrencePinningEnabled - In the implementation block
@property (assign,nonatomic) char allowsOccurrenceSelection;                            //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) char showsLeftBorder; 
@property (assign,nonatomic) char eventsFillGrid;                                       //@synthesize eventsFillGrid=_eventsFillGrid - In the implementation block
@property (assign,nonatomic) char usesSmallText;                                        //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (assign,nonatomic) char darkensWeekends;                                      //@synthesize darkensWeekends=_darkensWeekends - In the implementation block
@property (assign,nonatomic) char reduceLayoutProcessingForAnimation;                   //@synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation - In the implementation block
@property (assign,nonatomic) float fixedDayWidth;                                       //@synthesize fixedDayWidth=_fixedDayWidth - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTitleColor;                            //@synthesize occurrenceTitleColor=_occurrenceTitleColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTimeColor;                             //@synthesize occurrenceTimeColor=_occurrenceTimeColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceLocationColor;                         //@synthesize occurrenceLocationColor=_occurrenceLocationColor - In the implementation block
@property (nonatomic,retain) UIColor * occurrenceTextBackgroundColor;                   //@synthesize occurrenceTextBackgroundColor=_occurrenceTextBackgroundColor - In the implementation block
@property (assign,nonatomic) int occurrenceBackgroundStyle;                             //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets occurrenceMargin;                             //@synthesize occurrenceMargin=_occurrenceMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets occurrencePadding;                            //@synthesize occurrencePadding=_occurrencePadding - In the implementation block
@property (nonatomic,readonly) double firstEventSecond; 
@property (setter=selectEvent:,nonatomic,retain) EKEvent * selectedEvent; 
@property (nonatomic,retain) EKEvent * dimmedOccurrence;                                //@synthesize dimmedOccurrence=_dimmedOccurrence - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowsOccurrenceSelection:(char)arg1 ;
-(void)setEventsFillGrid:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(int)arg2 backgroundColor:(id)arg3 opaque:(char)arg4 numberOfDaysToDisplay:(unsigned)arg5 ;
-(void)setUsesSmallText:(char)arg1 ;
-(id)occurrenceViews;
-(void)setViewsDimmed:(char)arg1 forEvent:(id)arg2 ;
-(void)setShowsLeftBorder:(char)arg1 ;
-(char)showsLeftBorder;
-(void)setFixedDayWidth:(float)arg1 ;
-(void)setHoursToPadTop:(float)arg1 ;
-(void)setReduceLayoutProcessingForAnimation:(char)arg1 ;
-(void)_computeDayStartsAndEnds;
-(void)_layoutDaysIfVisible;
-(char)offscreenOccurrencePinningEnabled;
-(void)_adjustViewsForPinning;
-(float)_dayWidth;
-(CGPoint)pointForDate:(double)arg1 ;
-(void)rectBecameVisible:(CGRect)arg1 ;
-(void)_layoutDay:(unsigned)arg1 ;
-(NSRange)_dayRangeForEventWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg1 ;
-(NSRange)_dayRangeForEvent:(id)arg1 ;
-(UIColor *)occurrenceTitleColor;
-(UIColor *)occurrenceTimeColor;
-(UIColor *)occurrenceLocationColor;
-(UIColor *)occurrenceTextBackgroundColor;
-(UIEdgeInsets)occurrenceMargin;
-(UIEdgeInsets)occurrencePadding;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(char)containsEvent:(id)arg1 ;
-(char)_doOffscreenOccurrences;
-(char)_getBottomPinRegion:(float*)arg1 dayIndex:(unsigned*)arg2 forPoint:(CGPoint)arg3 ;
-(double)dateForPoint:(CGPoint)arg1 ;
-(CGRect)RoundRectToScreenScaleForRect:(CGRect)arg1 ;
-(float)RoundToScreenScaleForFloat:(float)arg1 ;
-(float)RoundToScreenScale:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(int)arg2 ;
-(EKEvent *)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(void)setOccurrenceTitleColor:(UIColor *)arg1 ;
-(void)setOccurrenceTimeColor:(UIColor *)arg1 ;
-(void)setOccurrenceLocationColor:(UIColor *)arg1 ;
-(void)setOccurrenceTextBackgroundColor:(UIColor *)arg1 ;
-(void)setOccurrenceMargin:(UIEdgeInsets)arg1 ;
-(void)setOccurrencePadding:(UIEdgeInsets)arg1 ;
-(void)setStartDateWithDateComponents:(id)arg1 ;
-(void)dayOccurrenceViewClicked:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 onDate:(double)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)setDarkensWeekends:(char)arg1 ;
-(double)firstEventSecond;
-(id)_dayStarts;
-(id)lastDisplayedSecond;
-(void)configureOccurrenceViewForGestureController:(id)arg1 ;
-(void)setOccurrences:(id)arg1 ;
-(char)eventsIntersectRect:(CGRect)arg1 ;
-(void)setOffscreenOccurrencePinningEnabled:(char)arg1 ;
-(char)allowsOccurrenceSelection;
-(char)eventsFillGrid;
-(char)usesSmallText;
-(char)darkensWeekends;
-(char)reduceLayoutProcessingForAnimation;
-(float)fixedDayWidth;
-(EKEvent *)dimmedOccurrence;
-(EKCalendarDate *)startDate;
-(EKCalendarDate *)endDate;
-(void)setDelegate:(id<EKDayViewContentDelegate>)arg1 ;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<EKDayViewContentDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setOrientation:(int)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(void)_tapRecognized:(id)arg1 ;
-(id)grid;
-(void)setStartDate:(EKCalendarDate *)arg1 ;
@end

