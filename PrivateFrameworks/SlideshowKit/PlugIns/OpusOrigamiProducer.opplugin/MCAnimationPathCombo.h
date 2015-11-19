/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAnimationPath.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>

@class NSSet, NSMutableSet, NSString;

@interface MCAnimationPathCombo : MCAnimationPath <MCAnimationPathSupport> {

	NSMutableSet* mAnimationPaths;
	NSString* mCombineOperation;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned countOfAnimationPaths; 
@property (copy) NSString * combineOperation; 
-(void)demolish;
-(void)setCombineOperation:(NSString *)arg1 ;
-(NSString *)combineOperation;
-(id)initWithImprint:(id)arg1 ;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(unsigned)countOfAnimationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(NSSet *)animationPaths;
-(void)removeAllAnimationPaths;
-(id)imprint;
@end

