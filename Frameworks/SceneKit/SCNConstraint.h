/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:01 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SCNAnimatable.h>

@class SCNOrderedDictionary, NSString, NSArray;

@interface SCNConstraint : NSObject <NSCopying, NSSecureCoding, SCNAnimatable> {

	_C3DConstraint* _constraintRef;
	SCNOrderedDictionary* _animations;
	char _enabled;
	float _influenceFactor;

}

@property (assign,nonatomic) float influenceFactor; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
+(char)supportsSecureCoding;
-(void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(char)arg1 forKey:(id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(char)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(float)arg2 ;
-(void)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(char)isPausedOrPausedByInheritance;
-(_C3DConstraint*)constraintRef;
-(float)influenceFactor;
-(void)setInfluenceFactor:(float)arg1 ;
-(void)setConstraintRef:(_C3DConstraint*)arg1 ;
-(void)finalizeDecodeConstraint:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copy;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllAnimations;
-(void)addAnimation:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)scene;
@end

