/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OKPresentation, NSString, OKMediaItem, OKPresentationCanvas, OKProducerPlugin;

@interface OKPresentationGuideline : NSObject <NSCopying> {

	OKPresentation* _presentation;
	unsigned _type;
	double _timestamp;
	NSString* _key;
	id _value;
	OKMediaItem* _mediaItem;
	NSString* _mediaItemUniqueURLString;
	OKPresentationCanvas* _presentationCanvas;
	unsigned _presentationCanvasType;
	NSString* _presentationCanvasKeyPath;
	OKProducerPlugin* _producerPlugin;
	NSString* _producerPluginUUID;

}

@property (assign,nonatomic) unsigned type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * key;                                           //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) OKMediaItem * mediaItem;                                //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) OKProducerPlugin * producerPlugin;                      //@synthesize producerPlugin=_producerPlugin - In the implementation block
@property (nonatomic,retain) OKPresentationCanvas * presentationCanvas;              //@synthesize presentationCanvas=_presentationCanvas - In the implementation block
@property (assign,nonatomic) OKPresentation * presentation;                          //@synthesize presentation=_presentation - In the implementation block
+(id)guidelineLiveAuthoringEnabled:(char)arg1 ;
+(id)guidelineAuthoringRecommendedResolutionSizes:(id)arg1 ;
+(id)guidelineAuthoringTitle:(id)arg1 ;
+(id)guidelineWithType:(unsigned)arg1 key:(id)arg2 value:(id)arg3 ;
+(id)defaultMobileRecommendedResolutionSizes;
+(id)globalUniqueKeyForKey:(id)arg1 ;
+(id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 presentationCanvas:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 producerPlugin:(id)arg2 ;
+(id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 presentationCanvas:(id)arg3 producerPlugin:(id)arg4 ;
+(id)guidelineAuthoringDefaultMobileRecommendedResolutionSizes;
+(id)guidelineAuthoringAttributedTitle:(id)arg1 ;
+(id)guidelineAuthoringTransitionSettings:(id)arg1 ;
+(id)guidelineAuthoringInteractiveTransitionSettings:(id)arg1 ;
+(id)guidelineAuthoringDebuggingEnabled:(char)arg1 ;
-(OKMediaItem *)mediaItem;
-(void)setMediaItem:(OKMediaItem *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(double)timestamp;
-(NSString *)key;
-(id)dictionary;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setPresentation:(OKPresentation *)arg1 ;
-(OKPresentation *)presentation;
-(id)initWithType:(unsigned)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)presentationCanvasKeyPath;
-(void)setPresentationCanvas:(OKPresentationCanvas *)arg1 ;
-(void)setProducerPlugin:(OKProducerPlugin *)arg1 ;
-(OKPresentationCanvas *)presentationCanvas;
-(OKProducerPlugin *)producerPlugin;
-(id)globalUniqueKey;
@end

