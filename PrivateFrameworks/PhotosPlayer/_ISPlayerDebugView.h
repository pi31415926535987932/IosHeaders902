/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/_ISTargetView.h>

@class UILabel, UIView, NSString, UIColor;

@interface _ISPlayerDebugView : _ISTargetView {

	UILabel* _label;
	UIView* _crosshairHorizontalLineView;
	UIView* _crosshairVerticalLineView;
	NSString* _text;
	float _crosshairRelativePosition;
	UIColor* _crosshairColor;

}

@property (nonatomic,retain) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) float crosshairRelativePosition;              //@synthesize crosshairRelativePosition=_crosshairRelativePosition - In the implementation block
@property (nonatomic,retain) UIColor * crosshairColor;                     //@synthesize crosshairColor=_crosshairColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setCrosshairRelativePosition:(float)arg1 ;
-(void)setCrosshairColor:(UIColor *)arg1 ;
-(float)crosshairRelativePosition;
-(UIColor *)crosshairColor;
@end

