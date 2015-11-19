/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:44 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, MPSlide, MPFrameInternal, NSString;

@interface MPFrame : NSObject <NSCoding, NSCopying> {

	NSMutableDictionary* _attributes;
	MPSlide* _parentSlide;
	MPFrameInternal* _internal;

}

@property (nonatomic,copy) NSString * frameID; 
@property (nonatomic,copy) NSString * presetID; 
+(id)frameWithFrameID:(id)arg1 ;
-(id)parentSlide;
-(void)setParentSlide:(id)arg1 ;
-(NSString *)frameID;
-(void)copyStruct:(id)arg1 ;
-(NSString *)presetID;
-(id)frameAttributes;
-(void)setPresetID:(NSString *)arg1 ;
-(void)setFrameID:(NSString *)arg1 ;
-(id)initWithFrameID:(id)arg1 ;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)parentDocument;
-(id)fullDebugLog;
-(id)frameAttributeForKey:(id)arg1 ;
-(void)dump;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

