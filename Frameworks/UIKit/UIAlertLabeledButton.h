/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertButton.h>

@class UILabel;

@interface UIAlertLabeledButton : UIAlertButton {

	UILabel* _typeLabel;
	float _titleOffset;

}

@property (nonatomic,readonly) UILabel * typeLabel; 
@property (assign,nonatomic) float titleOffset;                  //@synthesize titleOffset=_titleOffset - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(float)titleOffset;
-(void)setTitleOffset:(float)arg1 ;
-(UILabel *)typeLabel;
@end

