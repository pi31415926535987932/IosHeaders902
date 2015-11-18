/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:24 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIAlertControllerBackgroundView.h>

@class UIVisualEffectView, NSString;

@interface _UIAlertControlleriOSActionSheetActionHighlightedBackgroundView : UIView <UIAlertControllerBackgroundView> {

	UIVisualEffectView* _effectView;

}

@property (nonatomic,retain) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) float cornerRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(UIVisualEffectView *)effectView;
-(void)setPressed:(char)arg1 animated:(char)arg2 ;
-(void)setEffectView:(UIVisualEffectView *)arg1 ;
@end

