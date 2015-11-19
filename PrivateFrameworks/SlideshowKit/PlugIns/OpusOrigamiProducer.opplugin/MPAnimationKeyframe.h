/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, MPAnimationPath, MCAnimationKeyframe;

@interface MPAnimationKeyframe : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _attributes;
	MPAnimationPath* _parentPath;
	MCAnimationKeyframe* _keyframe;
	double _time;
	unsigned _offsetType;
	double _preControl;
	double _postControl;

}

@property (assign,nonatomic) double time;                      //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) unsigned offsetType;              //@synthesize offsetType=_offsetType - In the implementation block
@property (assign,nonatomic) double preControl;                //@synthesize preControl=_preControl - In the implementation block
@property (assign,nonatomic) double postControl;               //@synthesize postControl=_postControl - In the implementation block
-(void)setKeyframe:(id)arg1 ;
-(void)setPostControl:(double)arg1 ;
-(void)setPreControl:(double)arg1 ;
-(unsigned)offsetType;
-(double)preControl;
-(void)copyVars:(id)arg1 ;
-(void)setOffsetType:(unsigned)arg1 ;
-(double)postControl;
-(int)relativeTimeCompare:(id)arg1 ;
-(id)parentDocument;
-(void)setParentPath:(id)arg1 ;
-(id)fullDebugLog;
-(void)dump;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)time;
-(id)parentPath;
@end

