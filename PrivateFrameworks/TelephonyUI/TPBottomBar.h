/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:09 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@interface TPBottomBar : UIView {

	int _orientation;
	int _style;

}
+(float)defaultHeightForOrientation:(int)arg1 ;
+(float)defaultHeight;
+(float)defaultHeightForStyle:(int)arg1 ;
+(float)defaultHeightForStyle:(int)arg1 orientation:(int)arg2 ;
+(int)fullscreenStyle;
+(int)overlayStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(int)arg1 ;
-(void)setOrientation:(int)arg1 updateFrame:(char)arg2 ;
@end
