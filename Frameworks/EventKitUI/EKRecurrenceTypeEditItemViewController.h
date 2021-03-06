/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol EKRecurrenceTypeEditItemViewControllerDelegate;
@class NSString, UITableView, NSIndexPath, EKRecurrenceRule, NSDate, EKUICustomRecurrenceViewController, EKCalendarItem;

@interface EKRecurrenceTypeEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {

	NSString* _summaryString;
	int _repeatType;
	UITableView* _table;
	NSIndexPath* _checkedItem;
	EKRecurrenceRule* _recurrenceRule;
	NSDate* _suggestedStartDate;
	id<EKRecurrenceTypeEditItemViewControllerDelegate> _delegate;
	EKUICustomRecurrenceViewController* _customRecurrenceViewController;
	EKCalendarItem* _calendarItem;

}

@property (nonatomic,retain) EKRecurrenceRule * recurrenceRule;                                      //@synthesize recurrenceRule=_recurrenceRule - In the implementation block
@property (nonatomic,retain) NSDate * suggestedStartDate;                                            //@synthesize suggestedStartDate=_suggestedStartDate - In the implementation block
@property (__weak) id<EKRecurrenceTypeEditItemViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (retain) EKUICustomRecurrenceViewController * customRecurrenceViewController;              //@synthesize customRecurrenceViewController=_customRecurrenceViewController - In the implementation block
@property (assign,nonatomic) int repeatType;                                                         //@synthesize repeatType=_repeatType - In the implementation block
@property (retain) EKCalendarItem * calendarItem;                                                    //@synthesize calendarItem=_calendarItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKCalendarItem *)calendarItem;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(void)_checkItemAtIndexPath:(id)arg1 ;
-(id)_recurrenceCellForIndexPath:(id)arg1 ;
-(EKRecurrenceRule *)recurrenceRule;
-(void)setRecurrenceRuleFromRepeatType:(int)arg1 ;
-(void)setCustomRecurrenceViewController:(EKUICustomRecurrenceViewController *)arg1 ;
-(EKUICustomRecurrenceViewController *)customRecurrenceViewController;
-(void)setRecurrenceRule:(EKRecurrenceRule *)arg1 ;
-(void)setSuggestedStartDate:(NSDate *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 calendarItem:(id)arg3 ;
-(NSDate *)suggestedStartDate;
-(int)repeatType;
-(void)setRepeatType:(int)arg1 ;
-(void)setDelegate:(id<EKRecurrenceTypeEditItemViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<EKRecurrenceTypeEditItemViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
@end

