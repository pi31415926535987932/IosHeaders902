/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSMutableSet, NSMutableDictionary, NSSet;

@interface MRTouchSet : NSObject {

	NSMutableSet* _touches;
	NSMutableDictionary* _touchesForUITouches;
	CGSize _locationFactor;

}

@property (readonly) NSSet * touches;                            //@synthesize touches=_touches - In the implementation block
@property (readonly) CGPoint centroid; 
@property (readonly) float scale; 
@property (readonly) float rotation; 
@property (readonly) char isActive; 
@property (readonly) unsigned countOfActiveTouches; 
-(void)cancelAllTouches;
-(id)initWithTouches:(id)arg1 ;
-(id)updateWithPosition:(CGPoint)arg1 andCountOfTouches:(unsigned)arg2 ;
-(id)initWithPosition:(CGPoint)arg1 andCountOfTouches:(unsigned)arg2 ;
-(id)initWithTouch:(id)arg1 ;
-(id)initWithUITouches:(id)arg1 inView:(id)arg2 ;
-(id)updateWithUITouches:(id)arg1 inView:(id)arg2 ;
-(id)initWithUITouches:(id)arg1 inView:(id)arg2 withLocationFactor:(CGSize)arg3 ;
-(unsigned)countOfActiveTouches;
-(void)removeAllTouches;
-(void)addTouch:(id)arg1 ;
-(void)removeTouch:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isActive;
-(float)scale;
-(NSSet *)touches;
-(float)rotation;
-(CGPoint)centroid;
@end

