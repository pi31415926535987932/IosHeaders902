/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, _UIDatePickerMode;

@interface UIDatePickerContentView : UIView {

	struct {
		unsigned isAmPm : 1;
	}  _datePickerContentViewFlags;
	char _isModern;
	UILabel* _titleLabel;
	float _titleLabelMaxX;
	int _titleAlignment;
	_UIDatePickerMode* _mode;

}

@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) float titleLabelMaxX;                  //@synthesize titleLabelMaxX=_titleLabelMaxX - In the implementation block
@property (assign,nonatomic) char isAmPm; 
@property (assign,nonatomic) int titleAlignment;                    //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (assign,nonatomic) char isModern;                         //@synthesize isModern=_isModern - In the implementation block
@property (nonatomic,retain) _UIDatePickerMode * mode;              //@synthesize mode=_mode - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)_canBeReusedInPickerView;
-(UILabel *)titleLabel;
-(void)setMode:(_UIDatePickerMode *)arg1 ;
-(_UIDatePickerMode *)mode;
-(id)initWithMode:(id)arg1 ;
-(char)isAmPm;
-(void)setIsAmPm:(char)arg1 ;
-(void)setTitleLabelMaxX:(float)arg1 ;
-(void)setTitleAlignment:(int)arg1 ;
-(float)titleLabelMaxX;
-(int)titleAlignment;
-(char)isModern;
-(void)setIsModern:(char)arg1 ;
@end

