/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIForceTransitioningDelegate.h>

@class UIInteractionProgress, NSString;

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate> {

	UIInteractionProgress* interactionProgressForPresentation;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
@end

