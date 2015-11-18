/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 5:19:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell {

	int _style;
	UILabel* _titleView;
	UILabel* _valueView;
	UILabel* _value2View;
	int _twoValueCellStyle;

}

@property (nonatomic,readonly) unsigned visibleItems; 
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(id)value2View;
-(unsigned)visibleItems;
-(id)initWithEvent:(id)arg1 editable:(char)arg2 platformStyle:(int)arg3 ;
-(int)twoValueCellStyle;
-(id)titleView;
-(char)update;
-(id)valueView;
@end

