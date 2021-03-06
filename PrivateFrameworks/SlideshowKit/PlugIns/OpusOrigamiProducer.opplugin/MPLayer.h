/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPFilterSupport.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>
#import <OpusOrigamiProducer/MPAudioSupport.h>
#import <OpusOrigamiProducer/MPActionableSupport.h>
#import <OpusOrigamiProducer/MPLayerableSupport.h>
#import <OpusOrigamiProducer/MPGeometrySupport.h>
#import <OpusOrigamiProducer/MPTimingSupport.h>
#import <OpusOrigamiProducer/MPActionSupport.h>

@class MCPlugParallel, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MCMontage, MPLayerInternal, NSString;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {

	MCPlugParallel* _plug;
	NSMutableDictionary* _attributes;
	NSMutableArray* _effectContainers;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	NSMutableDictionary* _actions;
	MPAudioPlaylist* _audioPlaylist;
	MCMontage* _montage;
	id _parent;
	MPLayerInternal* _internal;
	char _skipTimeCalculations;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) char isAudioLayer; 
@property (assign,nonatomic) int audioPriority; 
@property (nonatomic,copy) NSString * layerID; 
+(id)effectLayer;
+(id)sequentialLayer;
+(id)layer;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NSString *)layerID;
-(id)allSlides:(char)arg1 ;
-(float)yPosition;
-(void)resetStartTimes;
-(int)countOfFilters;
-(void)copyStruct:(id)arg1 ;
-(void)copyFilters:(id)arg1 ;
-(void)copyActions:(id)arg1 ;
-(void)setPlug:(id)arg1 ;
-(id)layerKey;
-(float)yRotationAngle;
-(float)xPosition;
-(float)xRotationAngle;
-(char)startsPaused;
-(char)isAudioLayer;
-(id)allSongs;
-(void)setYPosition:(float)arg1 ;
-(void)setIsAudioLayer:(char)arg1 ;
-(void)copyEffectContainers:(id)arg1 ;
-(void)updateMainDuration;
-(void)updateDurationPadding:(double)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(int)arg2 ;
-(void)insertObject:(id)arg1 inEffectContainersAtIndex:(int)arg2 ;
-(void)removeObjectFromEffectContainersAtIndex:(int)arg1 ;
-(id)objectInFiltersAtIndex:(int)arg1 ;
-(void)removeObjectFromFiltersAtIndex:(int)arg1 ;
-(void)replaceObjectInEffectContainersAtIndex:(int)arg1 withObject:(id)arg2 ;
-(char)skipTimeCalculations;
-(void)replaceObjectInFiltersAtIndex:(int)arg1 withObject:(id)arg2 ;
-(void)setXPosition:(float)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)moveEffectContainersFromIndices:(id)arg1 toIndex:(int)arg2 ;
-(void)setSkipTimeCalculations:(char)arg1 ;
-(void)setLayerID:(NSString *)arg1 ;
-(void)addEffectContainer:(id)arg1 ;
-(void)removeEffectContainersAtIndices:(id)arg1 ;
-(void)removeAllEffectContainers;
-(void)addEffectContainers:(id)arg1 ;
-(void)reconnectTransitionForEffectContainerAtIndex:(int)arg1 ;
-(void)insertEffectContainers:(id)arg1 atIndex:(int)arg2 ;
-(void)insertFilters:(id)arg1 atIndex:(int)arg2 ;
-(void)removeAllFilters;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(int)arg2 ;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)reconnectAllTransitions;
-(id)effectContainers;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(int)countOfEffectContainers;
-(id)objectInEffectContainersAtIndex:(int)arg1 ;
-(void)setAudioPriority:(int)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)setStartsPaused:(char)arg1 ;
-(void)setXRotationAngle:(float)arg1 ;
-(void)setYRotationAngle:(float)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setMontage:(id)arg1 ;
-(id)montage;
-(double)timeIn;
-(double)phaseInDuration;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)plug;
-(id)parentDocument;
-(void)configureActions;
-(id)plugID;
-(void)setIsTriggered:(char)arg1 ;
-(char)isTriggered;
-(id)animationPaths;
-(id)fullDebugLog;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)arg1 ;
-(int)audioPriority;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(void)dump;
-(float)zPosition;
-(id)objectID;
-(void)removeActionForKey:(id)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(double)duration;
-(id)actions;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(float)arg1 ;
-(id)action;
-(NSString *)title;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(id)filters;
-(float)width;
-(float)height;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)setZPosition:(float)arg1 ;
-(void)setWidth:(float)arg1 ;
-(id)uuid;
-(void)setHeight:(float)arg1 ;
-(void)cleanup;
-(int)zIndex;
-(void)setZIndex:(int)arg1 ;
-(void)addFilters:(id)arg1 ;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(void)addFilter:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
@end

