/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKTransition : NSObject <NSCopying> {

	SKCTransitionNode* _skcTransitionNode;
	char _pauseIncoming;
	char _pauseOutgoing;

}

@property (assign,nonatomic) char pausesIncomingScene;              //@synthesize pauseIncoming=_pauseIncoming - In the implementation block
@property (assign,nonatomic) char pausesOutgoingScene;              //@synthesize pauseOutgoing=_pauseOutgoing - In the implementation block
+(id)revealDownWithDuration:(double)arg1 ;
+(id)revealUpWithDuration:(double)arg1 ;
+(id)revealLeftWithDuration:(double)arg1 ;
+(id)revealRightWithDuration:(double)arg1 ;
+(id)moveInDownWithDuration:(double)arg1 ;
+(id)moveInUpWithDuration:(double)arg1 ;
+(id)moveInLeftWithDuration:(double)arg1 ;
+(id)moveInRightWithDuration:(double)arg1 ;
+(id)pushDownWithDuration:(double)arg1 ;
+(id)pushUpWithDuration:(double)arg1 ;
+(id)pushLeftWithDuration:(double)arg1 ;
+(id)pushRightWithDuration:(double)arg1 ;
+(id)revealWithDirection:(int)arg1 duration:(double)arg2 ;
+(id)moveInWithDirection:(int)arg1 duration:(double)arg2 ;
+(id)pushWithDirection:(int)arg1 duration:(double)arg2 ;
+(id)fadeWithDuration:(double)arg1 ;
+(id)fadeWithColor:(id)arg1 duration:(double)arg2 ;
+(id)crossFadeWithDuration:(double)arg1 ;
+(id)flipHorizontalWithDuration:(double)arg1 ;
+(id)flipVerticalWithDuration:(double)arg1 ;
+(id)doorsOpenHorizontalWithDuration:(double)arg1 ;
+(id)doorsOpenVerticalWithDuration:(double)arg1 ;
+(id)doorsCloseHorizontalWithDuration:(double)arg1 ;
+(id)doorsCloseVerticalWithDuration:(double)arg1 ;
+(id)doorwayWithDuration:(double)arg1 ;
+(id)transitionWithCIFilter:(id)arg1 duration:(double)arg2 ;
-(id)_filter;
-(char)pausesOutgoingScene;
-(char)pausesIncomingScene;
-(SKCTransitionNode*)_backingNode;
-(void)setPausesIncomingScene:(char)arg1 ;
-(void)setPausesOutgoingScene:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(float)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

