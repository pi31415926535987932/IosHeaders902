/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:14:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKController;

@interface AKToolController : NSObject {

	unsigned _toolMode;
	AKController* _controller;

}

@property (nonatomic,readonly) char isInDefaultMode; 
@property (assign,nonatomic) unsigned toolMode;                   //@synthesize toolMode=_toolMode - In the implementation block
@property (__weak) AKController * controller;                     //@synthesize controller=_controller - In the implementation block
+(void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(char)arg3 ;
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(unsigned)toolMode;
-(void)resetToDefaultMode;
-(void)performToolActionForSender:(id)arg1 ;
-(char)validateToolSender:(id)arg1 ;
-(void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(char)arg3 shouldCascade:(char)arg4 ;
-(id)createAnnotationOfType:(int)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(void)setToolMode:(unsigned)arg1 ;
-(CGPoint)_defaultCenterForNewAnnotation;
-(float)_modelBaseScaleFactorForNewAnnotation;
-(float)_strokeWidthForNewAnnotation;
-(CGRect)_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(CGPoint)arg2 ;
-(id)_defaultTypingAttributes;
-(unsigned)_arrowStyleForToolTag:(int)arg1 ;
-(id)_defaultTextBoxTypingAttributes;
-(id)_bubbleFillColor;
-(void)_setRectangleToFitTextOnTextAnnotation:(id)arg1 ;
-(char)isInDefaultMode;
-(CGRect)_validatedRect:(CGRect)arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 centeredAtPoint:(CGPoint)arg3 ;
-(CGRect)_centerBounds:(CGRect)arg1 atPoint:(CGPoint)arg2 ;
@end

