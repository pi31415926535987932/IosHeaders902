/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:32:20 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleCALayer : FigBaseCALayer {

	OpaqueFigSubtitleCALayerInternal* layerInternal;

}

@property (assign,getter=isOverscanSubtitleSupportEnabled,nonatomic) char overscanSubtitleSupportEnabled; 
+(id)defaultActionForKey:(id)arg1 ;
-(void)setSubtitleGravityNonObscuring:(unsigned char)arg1 ;
-(void)setViewport:(CGRect)arg1 ;
-(void)addAnimations:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationsForKey:(id)arg1 ;
-(void)setVideosize:(CGSize)arg1 ;
-(void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1 ;
-(char)isOverscanSubtitleSupportEnabled;
-(void)setOverscanSubtitleSupportEnabled:(char)arg1 ;
-(void)handleNeedsLayoutNotification;
-(void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)_addPositionAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)beginUpdate;
-(void)endUpdate;
-(id)subtitleLayerDisplay;
-(void)setPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)dealloc;
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(void)clear;
-(id)initWithLayer:(id)arg1 ;
-(void)layoutSublayers;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)finalize;
@end
