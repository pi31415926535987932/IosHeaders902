/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol UIViewControllerAnimatedTransitioning;
@class NSString;

@interface _UISimpleTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {

	id<UIViewControllerAnimatedTransitioning> _animator;
	char __suppressCrossFadeNavigationBarAnimation;

}

@property (assign,setter=_setSuppressCrossFadeNavigationBarAnimation:,nonatomic) char _suppressCrossFadeNavigationBarAnimation;              //@synthesize _suppressCrossFadeNavigationBarAnimation=__suppressCrossFadeNavigationBarAnimation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnimator:(id)arg1 ;
-(void)_setSuppressCrossFadeNavigationBarAnimation:(char)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(char)_navigationControllerShouldCrossFadeNavigationBar:(id)arg1 ;
-(char)_suppressCrossFadeNavigationBarAnimation;
@end
