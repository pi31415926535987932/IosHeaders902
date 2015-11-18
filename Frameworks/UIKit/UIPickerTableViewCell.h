/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UITapGestureRecognizer, UIPickerTableView;

@interface UIPickerTableViewCell : UITableViewCell {

	UITapGestureRecognizer* _tap;
	UIPickerTableView* pickerTable;

}

@property (assign,nonatomic) UIPickerTableView * pickerTable; 
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)_setIsCenterCell:(char)arg1 shouldModifyAlphaOfView:(char)arg2 ;
-(UIPickerTableView *)pickerTable;
-(void)setPickerTable:(UIPickerTableView *)arg1 ;
@end

