/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SKUISeparatorView : UIView {

	UIColor* _color1;
	UIColor* _color2;
	int _separatorStyle;

}

@property (nonatomic,copy) UIColor * color1;                  //@synthesize color1=_color1 - In the implementation block
@property (nonatomic,copy) UIColor * color2;                  //@synthesize color2=_color2 - In the implementation block
@property (assign,nonatomic) int separatorStyle;              //@synthesize separatorStyle=_separatorStyle - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setColor1:(UIColor *)arg1 ;
-(void)setColor2:(UIColor *)arg1 ;
-(UIColor *)color1;
-(UIColor *)color2;
@end

