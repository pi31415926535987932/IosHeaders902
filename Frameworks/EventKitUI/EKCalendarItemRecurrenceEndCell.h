/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:03 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIButton, UIDatePicker, NSDate;

@interface EKCalendarItemRecurrenceEndCell : UITableViewCell {

	UIButton* _neverButton;
	UIDatePicker* _datePicker;

}

@property (nonatomic,readonly) UIButton * neverButton;                 //@synthesize neverButton=_neverButton - In the implementation block
@property (nonatomic,readonly) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (nonatomic,retain) NSDate * date; 
-(UIDatePicker *)datePicker;
-(UIButton *)neverButton;
-(id)init;
-(void)layoutSubviews;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

