/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView {

	UIColor* _patternColor;
	float _scale;
	UIColor* _checkerColor;

}

@property (nonatomic,retain) UIColor * checkerColor;              //@synthesize checkerColor=_checkerColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(char)_canDrawContent;
-(void)updatePatternColor;
-(void)setCheckerColor:(UIColor *)arg1 ;
-(UIColor *)checkerColor;
@end
