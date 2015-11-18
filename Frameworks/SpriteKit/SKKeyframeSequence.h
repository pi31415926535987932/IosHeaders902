/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:47:53 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSCoding, NSCopying> {

	unsigned _count;
	NSMutableArray* _values;
	NSMutableArray* _times;
	int _interpolationMode;
	int _repeatMode;
	SKCKeyframeSequence* _cKeyframeSequence;

}

@property (assign,nonatomic) int interpolationMode; 
@property (assign,nonatomic) int repeatMode; 
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(id)initWithCount:(unsigned)arg1 ;
-(int)interpolationMode;
-(float)getKeyframeTimeForIndex:(unsigned)arg1 ;
-(id)getKeyframeValueForIndex:(unsigned)arg1 ;
-(id)initWithKeyframeValues:(id)arg1 times:(id)arg2 ;
-(void)setInterpolationMode:(int)arg1 ;
-(void)_dirtySKCKeyframeSequence;
-(void)setKeyframeValue:(id)arg1 forIndex:(unsigned)arg2 ;
-(void)setKeyframeTime:(float)arg1 forIndex:(unsigned)arg2 ;
-(SKCKeyframeSequence*)_createSKCKeyframeSequence;
-(Class)_valueClass;
-(void)addKeyframeValue:(id)arg1 time:(float)arg2 ;
-(void)removeLastKeyframe;
-(void)removeAllKeyframes;
-(void)removeKeyframeAtIndex:(unsigned)arg1 ;
-(void)setKeyframeValue:(id)arg1 time:(float)arg2 forIndex:(unsigned)arg3 ;
-(id)sampleAtTime:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(id)init;
-(id)copy;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

