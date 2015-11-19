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

@protocol MPAnimationSupport;
@class NSObject, MCAnimationPath;

@interface MPAnimationPath : NSObject <NSCoding, NSCopying> {

	char _isTriggered;
	NSObject*<MPAnimationSupport> _parentObject;
	MCAnimationPath* _animationPath;

}

@property (assign) char isTriggered; 
+(id)animationPath;
-(id)animationPath;
-(id)animatedParent;
-(id)animatedKey;
-(void)setAnimationPath:(id)arg1 ;
-(id)parentDocument;
-(void)setIsTriggered:(char)arg1 ;
-(char)isTriggered;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)key;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cleanup;
-(id)parent;
-(void)setParent:(id)arg1 ;
@end
