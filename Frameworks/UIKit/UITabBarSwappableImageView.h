/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:26 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UITabBar;

@interface UITabBarSwappableImageView : UIImageView {

	id _value;
	id _alternate;
	float _scale;
	char _showAlternate;
	char _flipped;
	int _currentAnimation;
	UITabBar* _tabBar;
	int _buttonTag;

}
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)showAlternateImage:(char)arg1 ;
-(void)setCurrentImage;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 ;
-(void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3 ;
-(void)setAlternateImage:(id)arg1 ;
@end

