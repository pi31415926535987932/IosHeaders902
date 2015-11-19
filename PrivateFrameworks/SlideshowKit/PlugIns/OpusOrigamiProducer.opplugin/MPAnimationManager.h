/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPAnimationManager : NSObject {

	NSMutableDictionary* mAnimations;
	NSMutableDictionary* mAnimationSets;

}
+(void)loadAnimationManagerWithPaths:(id)arg1 ;
+(void)releaseSharedManager;
+(id)sharedManager;
-(id)animationDescriptionForAnimationSetID:(id)arg1 ;
-(id)animationDescriptionForAnimationID:(id)arg1 ;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
@end

