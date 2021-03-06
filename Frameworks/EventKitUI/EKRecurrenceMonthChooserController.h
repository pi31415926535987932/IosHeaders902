/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceGridChooserController.h>

@class NSMutableSet, NSArray;

@interface EKRecurrenceMonthChooserController : EKRecurrenceGridChooserController {

	NSMutableSet* _monthsOfTheYearSet;
	char _prohibitsMultipleMonthsInYearlyRecurrence;

}

@property (assign,nonatomic) char prohibitsMultipleMonthsInYearlyRecurrence;              //@synthesize prohibitsMultipleMonthsInYearlyRecurrence=_prohibitsMultipleMonthsInYearlyRecurrence - In the implementation block
@property (nonatomic,retain) NSArray * monthsOfTheYear; 
-(char)prohibitsMultipleMonthsInYearlyRecurrence;
-(void)setProhibitsMultipleMonthsInYearlyRecurrence:(char)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(void)refreshCells;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(id)cellLabels;
-(int)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(int)arg2 ;
-(NSArray *)monthsOfTheYear;
-(void)setMonthsOfTheYear:(NSArray *)arg1 ;
-(id)tableViewCell;
-(int)frequency;
-(void)prepareForDisplay;
@end

