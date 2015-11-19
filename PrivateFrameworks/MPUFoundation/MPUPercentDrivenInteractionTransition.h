/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class CADisplayLink, NSUUID, NSArray;

@interface MPUPercentDrivenInteractionTransition : UIPercentDrivenInteractiveTransition {

	CADisplayLink* _displayLink;
	NSUUID* _transitionUUID;
	NSArray* _persistentAnimationLayers;

}

@property (nonatomic,retain) NSArray * persistentAnimationLayers;              //@synthesize persistentAnimationLayers=_persistentAnimationLayers - In the implementation block
-(void)dealloc;
-(void)cancelInteractiveTransition;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)_cleanup;
-(NSArray *)persistentAnimationLayers;
-(void)setPersistentAnimationLayers:(NSArray *)arg1 ;
-(void)stopInteractiveTransition;
-(void)finalizeInteractiveTransition;
-(void)tick:(id)arg1 ;
@end

